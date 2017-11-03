function [effort] = Get_Torque(sub_tor)
%Use to get the torque values
    msg = receive(sub_tor);
    effort = msg.Effort;
end