function G = gravityMatrix (dh_table,m,cm,gravity_vector)
n = size(dh_table,1);
syms q1 q2 q3 q4 q5 q6 real;
q_temp = [q1 q2 q3 q4 q5 q6];
q = sym([]);
for j = 1:n
    q = [q q_temp(j)];
    
end
P = potentialEnergy(dh_table,m,cm,gravity_vector);
G = jacobian(P,q)';

end