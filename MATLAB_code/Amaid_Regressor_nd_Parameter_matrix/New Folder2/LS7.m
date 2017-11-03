%%
%
qs = [symvar(Regressor_Matrix)];



% Read your x and z
x =  Regressor_Matrix(7,11);

z =  Regressor_Matrix(7,12);

A = zeros(66,1);

for i=1:66
    q_sub = Torques_data(:,1,i);
    A(i) = subs(x^2,qs,[9.9 q_sub(2:7).']);
end
