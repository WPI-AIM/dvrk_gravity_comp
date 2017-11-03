function [q_values] = Set_Position(set_position_msg, q_values)
%Use to set the position to begin gravity compensation tuning and returns
%position
    msg = rosmessage(set_position_msg);
    msg.Position = q_values;
    send(set_position_msg, msg);
end

