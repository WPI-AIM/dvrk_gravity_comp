function C = coriolisMatrix (dh_table,m,cm,I,rho)
%return nxn generalized inertia Coriolis matrix 
n = size(dh_table,1);
syms q1 q2 q3 q4 q5 q6 real;
q_temp = [q1 q2 q3 q4 q5 q6];
q = sym([]);
syms qd1 qd2 qd3 qd4 qd5 qd6 real;
qd_temp = [qd1 qd2 qd3 qd4 qd5 qd6];
qd = sym([]);
for j = 1:n
    q = [q q_temp(j)];
    qd = [qd qd_temp(j)];
    
end

D = inertiaMatrix(dh_table,m,cm,I,rho);

C = sym(zeros(n));
c_kj = sym(zeros(n));

for j = 1:n
    
    for k = 1:n
        c_kj(k,j) = 0;
        for i = 1:n
         c_ijk = 1/2*(diff(D(k,j),q(i))+diff(D(k,i),q(j))-diff(D(i,j),q(k)));
         c_kj(k,j) = c_kj(k,j)+c_ijk*qd(i);
        end
        C(k,j) = c_kj(k,j); 
    end
    
end
end