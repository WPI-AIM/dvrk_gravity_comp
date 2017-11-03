function [torque_data,actual_position] = decoupledDataCollection()
    clear all;clc
    rosinit

    % This function is for data collection for each joint torque of the MTM
    % (the joints are decoupled)
    sub_pos = rossubscriber('/dvrk/MTMR/state_joint_current');
    sub_tor = rossubscriber('/dvrk/MTMR/state_joint_current');
    pub_pos = rospublisher('/dvrk/MTMR/set_position_joint');
    % torque_data = (recorded_torque,jth_pose,ith_joint)
    torque_data = zeros(8,10,4);
    actual_position = zeros(8,10,4);
    % reset the pose to home configuration
    q = [0,0,0,0,0,0,0];
    Set_Position(pub_pos,q);
    pause(3)
    % set and record the torque data at different configurations
    % Each time the data collection of one joint is done, the robot is 
    % reset to the home pose and then move on to the next joint
    for i = 2
        sum_mean_torque = zeros(8,50);
        q = [0,-0.20,0,0,0,0,0];
        Set_Position(pub_pos,q); 
        pause(3)
        for j = 1:10
            q(i) = q(i)+0.045;
            Set_Position(pub_pos,q);
            pause(2)
            for k = 1:50
                msg = receive(sub_tor);
                sum_mean_torque(:,k) = msg.Effort;                
            end
            torque_data(:,j,i-1) = mean(sum_mean_torque,2);
            actual_position(:,j,i-1) = Get_Position(sub_pos);
        end                 
    end
    
    for i = 3
        sum_mean_torque = zeros(8,50);
        q = [0,0,-0.5,0,0,0,0];
        Set_Position(pub_pos,q); 
        pause(3)
        for j = 1:10
            q(i) = q(i)+0.075;
            Set_Position(pub_pos,q);
            pause(2)
            for k = 1:50
                msg = receive(sub_tor);
                sum_mean_torque(:,k) = msg.Effort;                
            end
            torque_data(:,j,i-1) = mean(sum_mean_torque,2);
            actual_position(:,j,i-1) = Get_Position(sub_pos);
        end                 
    end
    
    for i = 4
        sum_mean_torque = zeros(8,50);
        q = [0,0,0,-1,0,0,0];
        Set_Position(pub_pos,q); 
        pause(3)
        for j = 1:10
            q(i) = q(i)+0.4;
            Set_Position(pub_pos,q);
            pause(2)
            for k = 1:50
                msg = receive(sub_tor);
                sum_mean_torque(:,k) = msg.Effort;                
            end
            torque_data(:,j,i-1) = mean(sum_mean_torque,2);
            actual_position(:,j,i-1) = Get_Position(sub_pos);
        end            
     
    end
    
    for i = 5
        sum_mean_torque = zeros(8,50);
        q = [0,0,0,0,-1.2,0,0];
        Set_Position(pub_pos,q); 
        pause(3)
        for j = 1:10
            q(i) = q(i)+0.4;
            Set_Position(pub_pos,q);
            pause(2)
            for k = 1:50
                msg = receive(sub_tor);
                sum_mean_torque(:,k) = msg.Effort;                
            end
            torque_data(:,j,i-1) = mean(sum_mean_torque,2);
            actual_position(:,j,i-1) = Get_Position(sub_pos);
        end            
     
    end
    q = [0,0,0,0,0,0,0];
    Set_Position(pub_pos,q);
    
    rosshutdown
end