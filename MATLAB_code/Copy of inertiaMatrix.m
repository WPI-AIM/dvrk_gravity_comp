function D = inertiaMatrix(dh_table,m,cm,I,rho)
%return nxn generalized inertia matrix
n = size(dh_table,1);
D = sym(zeros(n));
for i = 1:n
   J_v = linearJacobian(i,dh_table,cm);
   J_w = angularJacobian(i,dh_table,rho);
   R = Rinertial(i,dh_table);
   linear_term = m(i)*(J_v')*J_v;
   angular_term = J_w'*R*I(:,:,i)*R'*J_w;
   D = D + linear_term + angular_term;
    
end
D = simplify(D);
end