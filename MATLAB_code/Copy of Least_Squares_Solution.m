function [Unknowns_Value] = Least_Squares_Solution(knowns, torques)
    syms q1 q2 q3 q4 q5 q6 q7;

    num_sets = length(torques)/8;
    for i = 1:num_sets
        for j = 1:7
            knowns_value((i+j), 1:25) = double(subs(knowns(j, :), [q1, q2, q3, q4, q5, q6, q7], torques(1:7,1,i)'));
            torque_values(i+j, 1) = torques(j,2,i);
        end
    end
    Unknowns_Value = lscov(knowns_value,torque_values);
end