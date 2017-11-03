function [torquePos2,jointPos2] = torqueDataCollect2()
    % collect the torque data of different arm poses
    % all joints, except 1,6,7, are changed every pose
    clear all
    clc
    rosinit
    %receive and send torque/position data 
    sub_pos = rossubscriber('/dvrk/MTMR/state_joint_current');
    sub_tor = rossubscriber('/dvrk/MTMR/state_joint_current');
    pub_pos = rospublisher('/dvrk/MTMR/set_position_joint');
    torquePos2 = zeros(8,10,4);
    jointPos2 = zeros(8,10,4);
    %initialize with home pose
    q = [0,0,0,0,0,0,0];    
    Set_Position(pub_pos,q);
    pause(3)
    for i=2 
        for j = 1:10
            torqueEach = zeros(8,100);
            q(i)=q(i)-0.02;
            Set_Position(pub_pos,q);
            pause(3)
            for k = 1:100
               msg = receive(sub_tor);
               torqueEach(:,k) = msg.Effort;       
            end 
            torquePos2(:,j,i-1) = mean(torqueEach,2);
            jointPos2(:,j,i-1) = Get_Position(sub_pos);
        end
    end
    
    for i=3 
        for j = 1:10
            torqueEach = zeros(8,100);
            q(i)=q(i)+0.05;
            Set_Position(pub_pos,q);
            pause(3)
            for k = 1:100
               msg = receive(sub_tor);
               torqueEach(:,k) = msg.Effort;       
            end 
            torquePos2(:,j,i-1) = mean(torqueEach,2);
            jointPos2(:,j,i-1) = Get_Position(sub_pos);
        end
    end
    
    for i=4 
        for j = 1:10
            torqueEach = zeros(8,100);
            q(i)=q(i)+0.15;
            Set_Position(pub_pos,q);
            pause(3)
            for k = 1:100
               msg = receive(sub_tor);
               torqueEach(:,k) = msg.Effort;       
            end 
            torquePos2(:,j,i-1) = mean(torqueEach,2);
            jointPos2(:,j,i-1) = Get_Position(sub_pos);
        end
    end
    
    for i=4 
        for j = 1:10
            torqueEach = zeros(8,100);
            q(i)=q(i)-0.29;
            Set_Position(pub_pos,q);
            pause(3)
            for k = 1:100
               msg = receive(sub_tor);
               torqueEach(:,k) = msg.Effort;       
            end 
            torquePos2(:,j,4) = mean(torqueEach,2);
            jointPos2(:,j,4) = Get_Position(sub_pos);
        end
    end
    

    for j = 1:10
        torqueEach = zeros(8,100);
        q(5)=q(5)+0.15;
        Set_Position(pub_pos,q);
        pause(3)
        for k = 1:100
           msg = receive(sub_tor);
           torqueEach(:,k) = msg.Effort;       
        end 
        torquePos2(:,j,5) = mean(torqueEach,2);
        jointPos2(:,j,5) = Get_Position(sub_pos);
    end
   
    

    for j = 1:10
        torqueEach = zeros(8,100);
        q(5)=q(5)-0.16;
        Set_Position(pub_pos,q);
        pause(3)
        for k = 1:100
           msg = receive(sub_tor);
           torqueEach(:,k) = msg.Effort;       
        end 
        torquePos2(:,j,6) = mean(torqueEach,2);
        jointPos2(:,j,6) = Get_Position(sub_pos);
    end
    
    for j = 1:10
        torqueEach = zeros(8,100);
        q(3)=q(3)-0.07;
        Set_Position(pub_pos,q);
        pause(3)
        for k = 1:100
           msg = receive(sub_tor);
           torqueEach(:,k) = msg.Effort;       
        end 
        torquePos2(:,j,7) = mean(torqueEach,2);
        jointPos2(:,j,7) = Get_Position(sub_pos);
    end
    
    for j = 1:10
        torqueEach = zeros(8,100);
        q(2)=q(2)+0.03;
        Set_Position(pub_pos,q);
        pause(3)
        for k = 1:100
           msg = receive(sub_tor);
           torqueEach(:,k) = msg.Effort;       
        end 
        torquePos2(:,j,8) = mean(torqueEach,2);
        jointPos2(:,j,8) = Get_Position(sub_pos);
    end

    for j = 1:10
        torqueEach = zeros(8,100);
        q(5)=q(5)+0.28;
        Set_Position(pub_pos,q);
        pause(3)
        for k = 1:100
           msg = receive(sub_tor);
           torqueEach(:,k) = msg.Effort;       
        end 
        torquePos2(:,j,9) = mean(torqueEach,2);
        jointPos2(:,j,9) = Get_Position(sub_pos);
    end

    for j = 1:10
        torqueEach = zeros(8,100);
        q(4)=q(4)+0.29;
        Set_Position(pub_pos,q);
        pause(3)
        for k = 1:100
           msg = receive(sub_tor);
           torqueEach(:,k) = msg.Effort;       
        end 
        torquePos2(:,j,10) = mean(torqueEach,2);
        jointPos2(:,j,10) = Get_Position(sub_pos);
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