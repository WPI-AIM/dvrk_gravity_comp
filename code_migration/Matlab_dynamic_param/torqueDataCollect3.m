function [torquePos3,jointPos3] = torqueDataCollect3()
    % collect the torque data of different arm poses
    % all joints, except 1,6,7, are changed every pose
    clear all
    clc
    rosinit
    %receive and send torque/position data 
    sub_pos = rossubscriber('/dvrk/MTMR/state_joint_current');
    sub_tor = rossubscriber('/dvrk/MTMR/state_joint_current');
    pub_pos = rospublisher('/dvrk/MTMR/set_position_joint');
    torquePos3 = zeros(8,10,4);
    jointPos3 = zeros(8,10,4);
    %initialize with home pose
    q = [0,0,0,0,0,0,0];    
    Set_Position(pub_pos,q);
    pause(4)
    
    for j = 1:10
        torqueEach = zeros(8,100);
        q(4)=q(4)+0.14;
        Set_Position(pub_pos,q);
        pause(3)
        for k = 1:100
           msg = receive(sub_tor);
           torqueEach(:,k) = msg.Effort;       
        end 
        torquePos3(:,j,1) = mean(torqueEach,2);
        jointPos3(:,j,1) = Get_Position(sub_pos);
    end

    
    for j = 1:10
        torqueEach = zeros(8,100);
        q(2)=q(2)-0.02;
        Set_Position(pub_pos,q);
        pause(3)
        for k = 1:100
           msg = receive(sub_tor);
           torqueEach(:,k) = msg.Effort;       
        end 
        torquePos3(:,j,2) = mean(torqueEach,2);
        jointPos3(:,j,2) = Get_Position(sub_pos);
    end
    

    for j = 1:10
        torqueEach = zeros(8,100);
        q(3)=q(3)+0.025;
        Set_Position(pub_pos,q);
        pause(3)
        for k = 1:100
           msg = receive(sub_tor);
           torqueEach(:,k) = msg.Effort;       
        end 
        torquePos3(:,j,3) = mean(torqueEach,2);
        jointPos3(:,j,3) = Get_Position(sub_pos);
    end

    for j = 1:10
        torqueEach = zeros(8,100);
        q(2)=q(2)+0.04;
        Set_Position(pub_pos,q);
        pause(3)
        for k = 1:100
           msg = receive(sub_tor);
           torqueEach(:,k) = msg.Effort;       
        end 
        torquePos3(:,j,4) = mean(torqueEach,2);
        jointPos3(:,j,4) = Get_Position(sub_pos);
    end

    for j = 1:10
        torqueEach = zeros(8,100);
        q(3)=q(3)-0.04;
        Set_Position(pub_pos,q);
        pause(3)
        for k = 1:100
           msg = receive(sub_tor);
           torqueEach(:,k) = msg.Effort;       
        end 
        torquePos3(:,j,5) = mean(torqueEach,2);
        jointPos3(:,j,5) = Get_Position(sub_pos);
    end
    
    for j = 1:10
        torqueEach = zeros(8,100);
        q(2)=q(2)+0.02;
        Set_Position(pub_pos,q);
        pause(3)
        for k = 1:100
           msg = receive(sub_tor);
           torqueEach(:,k) = msg.Effort;       
        end 
        torquePos3(:,j,6) = mean(torqueEach,2);
        jointPos3(:,j,6) = Get_Position(sub_pos);
    end
    
    for j = 1:10
        torqueEach = zeros(8,100);
        q(3)=q(3)-0.015;
        Set_Position(pub_pos,q);
        pause(3)
        for k = 1:100
           msg = receive(sub_tor);
           torqueEach(:,k) = msg.Effort;       
        end 
        torquePos3(:,j,7) = mean(torqueEach,2);
        jointPos3(:,j,7) = Get_Position(sub_pos);
    end
    rosshutdown
end