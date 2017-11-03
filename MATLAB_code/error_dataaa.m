




for i=1:72
q_sub = Torques_data(:,1,i);

E = double(subs(Regressor_Matrix,qs,[9.9 q_sub(2:7).']));

F = E*dynamic_parameters_2;

error_data(:,i) = Torques_data(1:7,2,i) - F

end

size(error_data);

figure(1)
plot(error_data(2,:).^2)

figure(2)
plot(error_data(3,:).^2)

figure(3)
plot(error_data(4,:).^2)

figure(4)
plot(error_data(5,:).^2)

figure(5)
plot(error_data(6,:).^2)

figure(6)
plot(error_data(7,:).^2)


