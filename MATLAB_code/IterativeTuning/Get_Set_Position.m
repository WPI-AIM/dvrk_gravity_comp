function [q_values] = Get_Set_Position(set_position_msg)
%Use to set the position to begin gravity compensation tuning and returns
%position
    q_values = [0 0 0 0 0 0 0]; % assign q values here
    msg = rosmessage(set_position_msg);
    msg.name = [fill];
    msg.position = q_vales;
    send(set_position_msg, msg);
end

