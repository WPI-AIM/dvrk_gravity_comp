function R = Rinertial(i,dh_table)
%oriantation transformation from the ith body attached fram and the 
%inertial (global) frame
T = sym(eye(4));
for j = 1:i
    theta = dh_table(j,1);
    d = dh_table(j,2);
    a = dh_table(j,3);
    alpha = dh_table(j,4);
    T = T*DHtransform(theta,d,a,alpha);
    
end
R = T(1:3,1:3);

end