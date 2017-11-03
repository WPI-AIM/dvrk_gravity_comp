function J_w = angularJacobian(i,dh_table,rho)
%return 3xn angular Jacobian matrix at the center of mass of ith link
n = size(dh_table,1);
J_w = sym(zeros(3,n));

for k = 1:i
    
    T = sym(eye(4));
    for j = 1:i
        theta = dh_table(j,1);
        d = dh_table(j,2);
        a = dh_table(j,3);
        alpha = dh_table(j,4);
        T = T*DHtransform(theta,d,a,alpha);
        
        
    end
    J_w(:,k) = simplify(rho(k)*T(1:3,3));
    
end
end