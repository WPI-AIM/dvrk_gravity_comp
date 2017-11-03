% Use this file to tune the parameters of a DaVinci Robot at the given ip
% addess
% This is a modification of Amaid Zia's parameter tuning code

% ip = fill; %change to computer running dvrk
max_error = 10e-3; %EDIT THIS

% Connect_to_DVRK();
rosshutdown
rosinit
% enable direct effort control
% [pubDir,msgDir] = rospublisher('/dvrk/MTMR/set_robot_state','std_msgs/String');
% get and send position and torque messages
read_position_msg = rossubscriber('/dvrk/MTMR/state_joint_current/position','sensor_msgs/JointState');
set_position_msg = rospublisher('/dvrk/MTMR/set_position_joint', 'sensor_msgs/JointState');
set_torque_msg = rospublisher('/dvrk/MTMR/set_torque_joint', 'sensor_msgs/JointState');

Parameters_List = Get_Initial_Parameter();

q_List = Get_Set_Position(set_position_msg);

par_to_tune = [23 24 25 26 27 28]; %EDIT THIS
percision = [.01 .01 .01 .01 .01 .01]; %EDIT THIS

for i = 1:length(par_to_tune)
    q_List = Get_Set_Position(set_position_msg);
    pause(5);
    
    %get torque values initally
    torque = Get_Torque_Values(Parameters_List, q_List);
    
    %set first error value
    tic;
    error = Get_Error(read_position_msg,q_List);
    while error < max_error
        Set_Torque(set_torque_msg, torque);
        error = Get_Error(read_position_msg,q_List);
    end
    new_error_time = toc;
    error_time = new_error + 1;
    
    while new_error_time < error_time
       error_time = new_error_time;
       q_List = Get_Set_Position(set_position_msg);
       pause(5);
       Parameters_List(par_to_tune(i)) = Parameters_List(par_to_tune(i)) - percision(i);
       torque = Get_Torque_Values(Parameters_List, q_List);
       tic;
       while error < max_error
          Set_Torque(set_torque_msg, torque);
          error = Get_Error(read_position_msg,q_List);
       end
       new_error_time = toc;
    end
    
    Parameters_List(par_to_tune(i)) = Parameters_List(par_to_tune(i)) + percision(i);
    error_time = new_error_time + 1;
    
    while new_error_time < error_time
       error_time = new_error_time;
       q_List = Get_Set_Position(set_position_msg);
       pause(5);
       Parameters_List(par_to_tune(i)) = Parameters_List(par_to_tune(i)) + percision(i);
       torque = Get_Torque_Values(Parameters_List, q_List);
       tic;
       while error < max_error
          Set_Torque(set_torque_msg, torque);
          error = Get_Error(read_position_msg,q_List);
       end
       new_error_time = toc;
    end
    
    Parameters_List(par_to_tune(i)) = Parameters_List(par_to_tune(i)) - percision(i);
    i
    length(par_to_tune)
end

Parameters_List
