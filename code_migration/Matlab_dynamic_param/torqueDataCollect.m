function [torquePos,jointPos] = torqueDataCollect()
    % collect the torque data of different arm poses
    % all joints, except 1,6,7, are changed every pose
    clear all
    clc
    rosinit
    %receive and send torque/position data 
    sub_pos = rossubscriber('/dvrk/MTMR/state_joint_current');
    sub_tor = rossubscriber('/dvrk/MTMR/state_joint_current');
    pub_pos = rospublisher('/dvrk/MTMR/set_position_joint');
    torquePos = zeros(8,10,4);
    jointPos = zeros(8,10,4);
    %initialize with home pose
    q = [0,0,0,0,0,0,0];    
    Set_Position(pub_pos,q);
    pause(3)
    for i=4 
        for j = 1:10
            torqueEach = zeros(8,100);
            q(i)=q(i)-0.14;
            Set_Position(pub_pos,q);
            pause(3)
            for k = 1:100
               msg = receive(sub_tor);
               torqueEach(:,k) = msg.Effort;       
            end 
            torquePos(:,j,i-1) = mean(torqueEach,2);
            jointPos(:,j,i-1) = Get_Position(sub_pos);
        end
    end
    
    for i=5 
        for j = 1:10
            torqueEach = zeros(8,100);
            q(i)=q(i)+0.1;
            Set_Position(pub_pos,q);
            pause(3)
            for k = 1:100
               msg = receive(sub_tor);
               torqueEach(:,k) = msg.Effort;       
            end 
            torquePos(:,j,i-1) = mean(torqueEach,2);
            jointPos(:,j,i-1) = Get_Position(sub_pos);
        end
    end
    
    for i=3 
        for j = 1:10
            torqueEach = zeros(8,100);
            q(i)=q(i)-0.025;
            Set_Position(pub_pos,q);
            pause(3)
            for k = 1:100
               msg = receive(sub_tor);
               torqueEach(:,k) = msg.Effort;       
            end 
            torquePos(:,j,i-1) = mean(torqueEach,2);
            jointPos(:,j,i-1) = Get_Position(sub_pos);
        end
    end
    
    for i=2 
        for j = 1:10
            torqueEach = zeros(8,100);
            q(i)=q(i)+0.04;
            Set_Position(pub_pos,q);
            pause(3)
            for k = 1:100
               msg = receive(sub_tor);
               torqueEach(:,k) = msg.Effort;       
            end 
            torquePos(:,j,i-1) = mean(torqueEach,2);
            jointPos(:,j,i-1) = Get_Position(sub_pos);
        end
    end
    
%     for j = 1:10
%         torqueEach = zeros(8,100);
%         q(2)=q(2)+0.04;
%         q(3)=q(3)-0.04;
%         Set_Position(pub_pos,q);
%         pause(3)
%         for k = 1:100
%            msg = receive(sub_tor);
%            torqueEach(:,k) = msg.Effort;       
%         end 
%         torquePos(:,j,i-1) = mean(torqueEach,2);
%         jointPos(:,j,i-1) = Get_Position(sub_pos); 
%     end

    rosshutdown
end