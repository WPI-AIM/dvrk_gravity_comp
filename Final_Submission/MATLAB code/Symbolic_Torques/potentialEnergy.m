function P = potentialEnergy(dh_table,m,cm,gravity_vector)
n = size(dh_table,1);
P = sym(0);
for i = 1:n
    rc = ForwardKinematics(i,dh_table,cm);
    P = P + m(i)*gravity_vector'*rc;
    %disp(i);
end


end