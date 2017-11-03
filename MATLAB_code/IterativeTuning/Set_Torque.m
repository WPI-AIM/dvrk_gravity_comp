function [Success] = Set_Torque(set_torque_msg,torque)
    msg = rosmessage(set_torque_msg);
    msg.effort = torque;
    msg.name = [fill];
    send(set_torque_msg, msg);
    Success = 1;
end

