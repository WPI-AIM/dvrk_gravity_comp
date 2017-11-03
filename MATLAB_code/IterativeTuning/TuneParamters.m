% Use this file to tune the parameters of a DaVinci Robot at the given ip
% addess

ip = fill; %change to computer running dvrk
max_error = fill; %EDIT THIS

Connect_to_DVRK();
read_position_msg = rossubscriber(fill);
set_position_msg = rospublisher(fill, 'sensor_msgs/JointState');
set_torque_msg = rospublisher('/dvrk_mtm/set_joint_effort', 'sensor_msgs/JointState');

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
