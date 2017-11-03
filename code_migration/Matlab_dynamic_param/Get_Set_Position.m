function [q_values] = Get_Set_Position(set_position_msg)
%Use to set the position to begin gravity compensation tuning and returns
%position
    q_values = [0 0 0 0 0 0 0]; % assign q values here
    msg = rosmessage(set_position_msg);
%     msg.name = ['outer_yaw', 'shoulder_pitch', 'elbow_pitch', 'wrist_platform', 'wrist_pitch', 'wrist_yaw', 'wrist_roll'];
    msg.position = q_values;
    send(set_position_msg, msg);
end

