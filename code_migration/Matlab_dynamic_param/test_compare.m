g= 9.81;
% q1 = actual_position(1,10,4); 
% q2 = actual_position(2,10,4); 
% q3 = actual_position(3,10,4); 
% q4 = actual_position(4,10,4); 
% q5 = actual_position(5,10,4); 
% q6 = actual_position(6,10,4); 
% q7 = actual_position(7,10,4); 
% q8 = actual_position(8,10,4);

q1 = 0.0025;
q2 = 0.0059;
q3 = -0.2356;
q4 = -0.9954;
q5 = 1.0155;
q6 = -0.0237;
q7 = 0;

  Regressor_Matrix =             [         0,          0,                                     0,                                     0,                                                                                                                             0,                                                                                                                                                                                                                                     0,                                                     0,                                                     0,                                                                                                                             0,                                                                                                                                                                                                                                     0,                                                                                                                                                                                                                                                                                                                                                                                                                                                     0,                                                                                                                                                                                                                                                                                                                                                                                                                                                     0
                                   g*sin(q2), -g*cos(q2), g*cos(q2)*cos(q3) - g*sin(q2)*sin(q3), g*cos(q2)*sin(q3) + g*cos(q3)*sin(q2), g*cos(q4)*sin(q2)*sin(q3)*sin(q5) - g*cos(q3)*cos(q5)*sin(q2) - g*cos(q2)*cos(q3)*cos(q4)*sin(q5) - g*cos(q2)*cos(q5)*sin(q3), g*sin(q2)*sin(q3)*sin(q4)*sin(q6) - g*cos(q2)*cos(q6)*sin(q3)*sin(q5) - g*cos(q3)*cos(q6)*sin(q2)*sin(q5) - g*cos(q2)*cos(q3)*sin(q4)*sin(q6) - g*cos(q4)*cos(q5)*cos(q6)*sin(q2)*sin(q3) + g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*cos(q6), g*cos(q2)*cos(q3)*cos(q4) - g*cos(q4)*sin(q2)*sin(q3), g*cos(q2)*cos(q3)*sin(q4) - g*sin(q2)*sin(q3)*sin(q4), g*cos(q2)*sin(q3)*sin(q5) + g*cos(q3)*sin(q2)*sin(q5) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5) + g*cos(q4)*cos(q5)*sin(q2)*sin(q3), g*cos(q6)*sin(q2)*sin(q3)*sin(q4) - g*cos(q2)*cos(q3)*cos(q6)*sin(q4) + g*cos(q2)*sin(q3)*sin(q5)*sin(q6) + g*cos(q3)*sin(q2)*sin(q5)*sin(q6) + g*cos(q4)*cos(q5)*sin(q2)*sin(q3)*sin(q6) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*sin(q6), g*cos(q2)*cos(q5)*sin(q3)*sin(q7) + g*cos(q3)*cos(q5)*sin(q2)*sin(q7) + g*cos(q2)*cos(q3)*cos(q4)*sin(q5)*sin(q7) + g*cos(q6)*cos(q7)*sin(q2)*sin(q3)*sin(q4) + g*cos(q2)*cos(q7)*sin(q3)*sin(q5)*sin(q6) + g*cos(q3)*cos(q7)*sin(q2)*sin(q5)*sin(q6) - g*cos(q4)*sin(q2)*sin(q3)*sin(q5)*sin(q7) - g*cos(q2)*cos(q3)*cos(q6)*cos(q7)*sin(q4) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*cos(q7)*sin(q6) + g*cos(q4)*cos(q5)*cos(q7)*sin(q2)*sin(q3)*sin(q6), g*cos(q4)*cos(q7)*sin(q2)*sin(q3)*sin(q5) - g*cos(q3)*cos(q5)*cos(q7)*sin(q2) - g*cos(q2)*cos(q3)*cos(q6)*sin(q4)*sin(q7) - g*cos(q2)*cos(q5)*cos(q7)*sin(q3) + g*cos(q6)*sin(q2)*sin(q3)*sin(q4)*sin(q7) + g*cos(q2)*sin(q3)*sin(q5)*sin(q6)*sin(q7) + g*cos(q3)*sin(q2)*sin(q5)*sin(q6)*sin(q7) - g*cos(q2)*cos(q3)*cos(q4)*cos(q7)*sin(q5) + g*cos(q4)*cos(q5)*sin(q2)*sin(q3)*sin(q6)*sin(q7) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*sin(q6)*sin(q7)
                                           0,          0, g*cos(q2)*cos(q3) - g*sin(q2)*sin(q3), g*cos(q2)*sin(q3) + g*cos(q3)*sin(q2), g*cos(q4)*sin(q2)*sin(q3)*sin(q5) - g*cos(q3)*cos(q5)*sin(q2) - g*cos(q2)*cos(q3)*cos(q4)*sin(q5) - g*cos(q2)*cos(q5)*sin(q3), g*sin(q2)*sin(q3)*sin(q4)*sin(q6) - g*cos(q2)*cos(q6)*sin(q3)*sin(q5) - g*cos(q3)*cos(q6)*sin(q2)*sin(q5) - g*cos(q2)*cos(q3)*sin(q4)*sin(q6) - g*cos(q4)*cos(q5)*cos(q6)*sin(q2)*sin(q3) + g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*cos(q6), g*cos(q2)*cos(q3)*cos(q4) - g*cos(q4)*sin(q2)*sin(q3), g*cos(q2)*cos(q3)*sin(q4) - g*sin(q2)*sin(q3)*sin(q4), g*cos(q2)*sin(q3)*sin(q5) + g*cos(q3)*sin(q2)*sin(q5) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5) + g*cos(q4)*cos(q5)*sin(q2)*sin(q3), g*cos(q6)*sin(q2)*sin(q3)*sin(q4) - g*cos(q2)*cos(q3)*cos(q6)*sin(q4) + g*cos(q2)*sin(q3)*sin(q5)*sin(q6) + g*cos(q3)*sin(q2)*sin(q5)*sin(q6) + g*cos(q4)*cos(q5)*sin(q2)*sin(q3)*sin(q6) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*sin(q6), g*cos(q2)*cos(q5)*sin(q3)*sin(q7) + g*cos(q3)*cos(q5)*sin(q2)*sin(q7) + g*cos(q2)*cos(q3)*cos(q4)*sin(q5)*sin(q7) + g*cos(q6)*cos(q7)*sin(q2)*sin(q3)*sin(q4) + g*cos(q2)*cos(q7)*sin(q3)*sin(q5)*sin(q6) + g*cos(q3)*cos(q7)*sin(q2)*sin(q5)*sin(q6) - g*cos(q4)*sin(q2)*sin(q3)*sin(q5)*sin(q7) - g*cos(q2)*cos(q3)*cos(q6)*cos(q7)*sin(q4) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*cos(q7)*sin(q6) + g*cos(q4)*cos(q5)*cos(q7)*sin(q2)*sin(q3)*sin(q6), g*cos(q4)*cos(q7)*sin(q2)*sin(q3)*sin(q5) - g*cos(q3)*cos(q5)*cos(q7)*sin(q2) - g*cos(q2)*cos(q3)*cos(q6)*sin(q4)*sin(q7) - g*cos(q2)*cos(q5)*cos(q7)*sin(q3) + g*cos(q6)*sin(q2)*sin(q3)*sin(q4)*sin(q7) + g*cos(q2)*sin(q3)*sin(q5)*sin(q6)*sin(q7) + g*cos(q3)*sin(q2)*sin(q5)*sin(q6)*sin(q7) - g*cos(q2)*cos(q3)*cos(q4)*cos(q7)*sin(q5) + g*cos(q4)*cos(q5)*sin(q2)*sin(q3)*sin(q6)*sin(q7) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*sin(q6)*sin(q7)
                                           0,          0,                                     0,                                     0,                                                                                                g*sin(q2 + q3)*sin(q4)*sin(q5),                                                                                                                                                                           -g*sin(q2 + q3)*(cos(q4)*sin(q6) + cos(q5)*cos(q6)*sin(q4)),                               -g*sin(q2 + q3)*sin(q4),                                g*sin(q2 + q3)*cos(q4),                                                                                                g*sin(q2 + q3)*cos(q5)*sin(q4),                                                                                                                                                                           -g*sin(q2 + q3)*(cos(q4)*cos(q6) - cos(q5)*sin(q4)*sin(q6)),                                                                                                                                                                                                                                                                                                                                                 -g*sin(q2 + q3)*(sin(q4)*sin(q5)*sin(q7) + cos(q4)*cos(q6)*cos(q7) - cos(q5)*cos(q7)*sin(q4)*sin(q6)),                                                                                                                                                                                                                                                                                                                                                  g*sin(q2 + q3)*(cos(q7)*sin(q4)*sin(q5) - cos(q4)*cos(q6)*sin(q7) + cos(q5)*sin(q4)*sin(q6)*sin(q7))
                                           0,          0,                                     0,                                     0,    -g*(cos(q2)*cos(q3)*sin(q5) - sin(q2)*sin(q3)*sin(q5) + cos(q2)*cos(q4)*cos(q5)*sin(q3) + cos(q3)*cos(q4)*cos(q5)*sin(q2)),                                                                            -g*(cos(q5)*cos(q6)*sin(q2)*sin(q3) - cos(q2)*cos(q3)*cos(q5)*cos(q6) + cos(q2)*cos(q4)*cos(q6)*sin(q3)*sin(q5) + cos(q3)*cos(q4)*cos(q6)*sin(q2)*sin(q5)),                                                     0,                                                     0,     g*(cos(q5)*sin(q2)*sin(q3) - cos(q2)*cos(q3)*cos(q5) + cos(q2)*cos(q4)*sin(q3)*sin(q5) + cos(q3)*cos(q4)*sin(q2)*sin(q5)),                                                                             g*(cos(q5)*sin(q2)*sin(q3)*sin(q6) - cos(q2)*cos(q3)*cos(q5)*sin(q6) + cos(q2)*cos(q4)*sin(q3)*sin(q5)*sin(q6) + cos(q3)*cos(q4)*sin(q2)*sin(q5)*sin(q6)),                                                                                                     g*(cos(q2)*cos(q3)*sin(q5)*sin(q7) - sin(q2)*sin(q3)*sin(q5)*sin(q7) - cos(q2)*cos(q3)*cos(q5)*cos(q7)*sin(q6) + cos(q2)*cos(q4)*cos(q5)*sin(q3)*sin(q7) + cos(q3)*cos(q4)*cos(q5)*sin(q2)*sin(q7) + cos(q5)*cos(q7)*sin(q2)*sin(q3)*sin(q6) + cos(q2)*cos(q4)*cos(q7)*sin(q3)*sin(q5)*sin(q6) + cos(q3)*cos(q4)*cos(q7)*sin(q2)*sin(q5)*sin(q6)),                                                                                                    -g*(cos(q2)*cos(q3)*cos(q7)*sin(q5) - cos(q7)*sin(q2)*sin(q3)*sin(q5) + cos(q2)*cos(q4)*cos(q5)*cos(q7)*sin(q3) + cos(q3)*cos(q4)*cos(q5)*cos(q7)*sin(q2) + cos(q2)*cos(q3)*cos(q5)*sin(q6)*sin(q7) - cos(q5)*sin(q2)*sin(q3)*sin(q6)*sin(q7) - cos(q2)*cos(q4)*sin(q3)*sin(q5)*sin(q6)*sin(q7) - cos(q3)*cos(q4)*sin(q2)*sin(q5)*sin(q6)*sin(q7))
                                           0,          0,                                     0,                                     0,                                                                                                                             0,        -g*(cos(q2)*cos(q6)*sin(q3)*sin(q4) + cos(q3)*cos(q6)*sin(q2)*sin(q4) + cos(q2)*cos(q3)*sin(q5)*sin(q6) - sin(q2)*sin(q3)*sin(q5)*sin(q6) + cos(q2)*cos(q4)*cos(q5)*sin(q3)*sin(q6) + cos(q3)*cos(q4)*cos(q5)*sin(q2)*sin(q6)),                                                     0,                                                     0,                                                                                                                             0,        -g*(cos(q2)*cos(q3)*cos(q6)*sin(q5) - cos(q2)*sin(q3)*sin(q4)*sin(q6) - cos(q3)*sin(q2)*sin(q4)*sin(q6) - cos(q6)*sin(q2)*sin(q3)*sin(q5) + cos(q2)*cos(q4)*cos(q5)*cos(q6)*sin(q3) + cos(q3)*cos(q4)*cos(q5)*cos(q6)*sin(q2)),                                                                                                                                                                        -g*(cos(q2)*cos(q3)*cos(q6)*cos(q7)*sin(q5) - cos(q2)*cos(q7)*sin(q3)*sin(q4)*sin(q6) - cos(q3)*cos(q7)*sin(q2)*sin(q4)*sin(q6) - cos(q6)*cos(q7)*sin(q2)*sin(q3)*sin(q5) + cos(q2)*cos(q4)*cos(q5)*cos(q6)*cos(q7)*sin(q3) + cos(q3)*cos(q4)*cos(q5)*cos(q6)*cos(q7)*sin(q2)),                                                                                                                                                                        -g*(cos(q2)*cos(q3)*cos(q6)*sin(q5)*sin(q7) - cos(q2)*sin(q3)*sin(q4)*sin(q6)*sin(q7) - cos(q3)*sin(q2)*sin(q4)*sin(q6)*sin(q7) - cos(q6)*sin(q2)*sin(q3)*sin(q5)*sin(q7) + cos(q2)*cos(q4)*cos(q5)*cos(q6)*sin(q3)*sin(q7) + cos(q3)*cos(q4)*cos(q5)*cos(q6)*sin(q2)*sin(q7))
                                           0,          0,                                     0,                                     0,                                                                                                                             0,                                                                                                                                                                                                                                     0,                                                     0,                                                     0,                                                                                                                             0,                                                                                                                                                                                                                                     0,                 g*(cos(q5)*cos(q7)*sin(q2)*sin(q3) - cos(q2)*cos(q3)*cos(q5)*cos(q7) + cos(q2)*cos(q4)*cos(q7)*sin(q3)*sin(q5) + cos(q3)*cos(q4)*cos(q7)*sin(q2)*sin(q5) + cos(q2)*cos(q6)*sin(q3)*sin(q4)*sin(q7) + cos(q3)*cos(q6)*sin(q2)*sin(q4)*sin(q7) + cos(q2)*cos(q3)*sin(q5)*sin(q6)*sin(q7) - sin(q2)*sin(q3)*sin(q5)*sin(q6)*sin(q7) + cos(q2)*cos(q4)*cos(q5)*sin(q3)*sin(q6)*sin(q7) + cos(q3)*cos(q4)*cos(q5)*sin(q2)*sin(q6)*sin(q7)),                -g*(cos(q2)*cos(q3)*cos(q5)*sin(q7) - cos(q5)*sin(q2)*sin(q3)*sin(q7) + cos(q2)*cos(q6)*cos(q7)*sin(q3)*sin(q4) + cos(q3)*cos(q6)*cos(q7)*sin(q2)*sin(q4) + cos(q2)*cos(q3)*cos(q7)*sin(q5)*sin(q6) - cos(q2)*cos(q4)*sin(q3)*sin(q5)*sin(q7) - cos(q3)*cos(q4)*sin(q2)*sin(q5)*sin(q7) - cos(q7)*sin(q2)*sin(q3)*sin(q5)*sin(q6) + cos(q2)*cos(q4)*cos(q5)*cos(q7)*sin(q3)*sin(q6) + cos(q3)*cos(q4)*cos(q5)*cos(q7)*sin(q2)*sin(q6))];




 dynamic_param_1 =  [0.0414
                  -0.0192
                   0.0328
                   0.0095
                  -0.0033
                  -0.0003
                  -0.0071
                  -0.0188
                  -0.0015
                  -0.0003
                  -0.0001
                   0.0008];
dynamic_param_ham = [-0.0005
                  -0.0275
                   0.0271
                  -0.0009
                  -0.0002
                   0.0001
                   0.0833
                   0.0217
                   0.0006
                  -0.0004
                  -0.0004
                  -0.0002];
dynamic_param_ham1 = [-0.0005
                  -0.0280
                   0.0320
                  -0.0009
                  -0.0003
                  -0.0172
                   0.0770
                   0.0117
                  -0.0161
                  -0.0102
                  -0.0102
                  -0.0003];
dynamic_param_ham2 = [0.0002
                  -0.0346
                  -0.0277
                   0.0065
                  -0.0014
                   0.0009
                  -0.0035
                   0.0308
                   0.0066
                  -0.0012
                  -0.0012
                  -0.0014];
dynamic_param_ham3 = [0.0158
                  -0.040
                   0.0261
                   0.0030
                  -0.0011
                   0.0006
                  -0.0096
                  -0.0373
                   0.0035
                  -0.000
                  -0.000
                  -0.0011];
torque_compare(:,1) = Regressor_Matrix*dynamic_param_1;
torque_compare(:,2) = Regressor_Matrix*dynamic_param_ham;
torque_compare(:,3) = Regressor_Matrix*dynamic_param_ham1;
torque_compare(:,4) = Regressor_Matrix*dynamic_param_ham2;
torque_compare(:,5) = Regressor_Matrix*dynamic_param_ham3;

torque_diff(:,1) = abs(torque_compare(:,1)-torque_compare(:,2));
torque_diff(:,2) = abs(torque_compare(:,1)-torque_compare(:,3));
torque_diff(:,3) = abs(torque_compare(:,1)-torque_compare(:,4));
torque_diff(:,4) = abs(torque_compare(:,1)-torque_compare(:,5));

dynParam_diff(:,1) = abs(dynamic_param_1-dynamic_param_ham);
dynParam_diff(:,2) = abs(dynamic_param_1-dynamic_param_ham1);
dynParam_diff(:,3) = abs(dynamic_param_1-dynamic_param_ham2);
dynParam_diff(:,4) = abs(dynamic_param_1-dynamic_param_ham3);

               