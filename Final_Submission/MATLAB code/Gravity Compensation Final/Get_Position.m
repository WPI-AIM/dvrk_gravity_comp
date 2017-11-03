function [position] = Get_Position(sub_pos)
%Use to get the torque values
    msg = receive(sub_pos);
    position = msg.Position;
end