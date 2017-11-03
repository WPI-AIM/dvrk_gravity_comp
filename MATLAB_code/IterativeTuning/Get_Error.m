function error = Get_Error(read_position_msg, q_desired)

msg = recieve(read_position_msg);
q_measured = msg.Position;
    for i = 1:length(q_desired)
        error = (q_desired(i) - q_measured(i))^2;
    end
end