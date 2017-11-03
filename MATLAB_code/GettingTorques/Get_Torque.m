function [torques] = Get_Torque(sub_torque)
%Use to get the torque values
    msg = receive(sub_torque);
    torques = msg.Effort;
end