function J_v = linearJacobian(i,dh_table,cm)
%return 3xn linear Jacobian matrix at the center of mass of ith link
n = size(dh_table,1);
syms q1 q2 q3 q4 q5 q6 real;
q_temp = [q1 q2 q3 q4 q5 q6];
q = sym([]);
for j = 1:n
    q = [q q_temp(j)];
    
end
p = ForwardKinematics (i,dh_table,cm);
J_v = simplify(jacobian(p,q));


end