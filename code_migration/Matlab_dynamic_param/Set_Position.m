function [success] = Set_Position(set_position_msg,q)
    msg = rosmessage(set_position_msg);
    msg.Position(1) = q(1);
    msg.Position(2) = q(2);
    msg.Position(3) = q(3);
    msg.Position(4) = q(4);
    msg.Position(5) = q(5);
    msg.Position(6) = q(6);
    msg.Position(7) = q(7);
    send(set_position_msg, msg);
    success = 1;

end