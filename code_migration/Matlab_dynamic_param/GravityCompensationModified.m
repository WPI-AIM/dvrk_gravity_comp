
rosinit
sub_pos = rossubscriber('/dvrk/MTMR/state_joint_current');
sub_tor = rossubscriber('/dvrk/MTMR/state_joint_current');
pub_tor = rospublisher('/dvrk/MTMR/set_torque_joint');
 g = 9.81;
 r = rosrate(150); % increase ros refresh rate to 150 Hz
 position = Get_Position(sub_pos);
%  position_error = zeros(8,100);
 loop = 0;

%   dynamic_param_grav = [0.0414
%                       -0.0192
%                        0.0328
%                        0.0095
%                       -0.0033
%                       -0.0003
%                       -0.0071
%                       -0.0188
%                       -0.0015
%                       -0.0003
%                       -0.0001
%                        0.0005];

% dynamic_param_grav =    [ 0.0491
%                        -0.0233
%                         0.0239
%                         0.0052
%                        -0.0040
%                         0.0037
%                         0.0054
%                        -0.0249
%                         0.0038
%                        -0.0007
%                        -0.0001
%                         0.0003];

 dynamic_param_grav =    [ 0.0503
                       -0.0234
                        0.0314
                       -0.0076
                       -0.0138
                        0.0034
                        0.0009
                       -0.0380
                        0.0040
                       -0.0119
                       -0.0000
                        0.0002];                   
% dynamic_param_grav = [0.0567577263842204
%                      -0.0273443511790786
%                       0.0149559714638287
%                       0.000905781384603654
%                      -0.00469618402173110
%                       0.00766466902328854
%                       0.0178875962608100
%                      -0.0309503200271792
%                       0.00914115133299973
%                      -0.00101204046739775
%                      -3.22834038181053e-07
%                       2.61333915701065e-05];

while 1
% for i = 1:100
  qs = Get_Position(sub_pos);
  q1 = qs(1);
  q2 = qs(2);
  q3 = qs(3);
  q4 = qs(4);
  q5 = qs(5);
  q6 = qs(6);
  q7 = qs(7);
  effort = Get_Torque(sub_tor);
  effort = effort(1:7);
  
  Regressor_Matrix =             [         0,          0,                                     0,                                     0,                                                                                                                             0,                                                                                                                                                                                                                                     0,                                                     0,                                                     0,                                                                                                                             0,                                                                                                                                                                                                                                     0,                                                                                                                                                                                                                                                                                                                                                                                                                                                     0,                                                                                                                                                                                                                                                                                                                                                                                                                                                     0
                                   g*sin(q2), -g*cos(q2), g*cos(q2)*cos(q3) - g*sin(q2)*sin(q3), g*cos(q2)*sin(q3) + g*cos(q3)*sin(q2), g*cos(q4)*sin(q2)*sin(q3)*sin(q5) - g*cos(q3)*cos(q5)*sin(q2) - g*cos(q2)*cos(q3)*cos(q4)*sin(q5) - g*cos(q2)*cos(q5)*sin(q3), g*sin(q2)*sin(q3)*sin(q4)*sin(q6) - g*cos(q2)*cos(q6)*sin(q3)*sin(q5) - g*cos(q3)*cos(q6)*sin(q2)*sin(q5) - g*cos(q2)*cos(q3)*sin(q4)*sin(q6) - g*cos(q4)*cos(q5)*cos(q6)*sin(q2)*sin(q3) + g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*cos(q6), g*cos(q2)*cos(q3)*cos(q4) - g*cos(q4)*sin(q2)*sin(q3), g*cos(q2)*cos(q3)*sin(q4) - g*sin(q2)*sin(q3)*sin(q4), g*cos(q2)*sin(q3)*sin(q5) + g*cos(q3)*sin(q2)*sin(q5) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5) + g*cos(q4)*cos(q5)*sin(q2)*sin(q3), g*cos(q6)*sin(q2)*sin(q3)*sin(q4) - g*cos(q2)*cos(q3)*cos(q6)*sin(q4) + g*cos(q2)*sin(q3)*sin(q5)*sin(q6) + g*cos(q3)*sin(q2)*sin(q5)*sin(q6) + g*cos(q4)*cos(q5)*sin(q2)*sin(q3)*sin(q6) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*sin(q6), g*cos(q2)*cos(q5)*sin(q3)*sin(q7) + g*cos(q3)*cos(q5)*sin(q2)*sin(q7) + g*cos(q2)*cos(q3)*cos(q4)*sin(q5)*sin(q7) + g*cos(q6)*cos(q7)*sin(q2)*sin(q3)*sin(q4) + g*cos(q2)*cos(q7)*sin(q3)*sin(q5)*sin(q6) + g*cos(q3)*cos(q7)*sin(q2)*sin(q5)*sin(q6) - g*cos(q4)*sin(q2)*sin(q3)*sin(q5)*sin(q7) - g*cos(q2)*cos(q3)*cos(q6)*cos(q7)*sin(q4) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*cos(q7)*sin(q6) + g*cos(q4)*cos(q5)*cos(q7)*sin(q2)*sin(q3)*sin(q6), g*cos(q4)*cos(q7)*sin(q2)*sin(q3)*sin(q5) - g*cos(q3)*cos(q5)*cos(q7)*sin(q2) - g*cos(q2)*cos(q3)*cos(q6)*sin(q4)*sin(q7) - g*cos(q2)*cos(q5)*cos(q7)*sin(q3) + g*cos(q6)*sin(q2)*sin(q3)*sin(q4)*sin(q7) + g*cos(q2)*sin(q3)*sin(q5)*sin(q6)*sin(q7) + g*cos(q3)*sin(q2)*sin(q5)*sin(q6)*sin(q7) - g*cos(q2)*cos(q3)*cos(q4)*cos(q7)*sin(q5) + g*cos(q4)*cos(q5)*sin(q2)*sin(q3)*sin(q6)*sin(q7) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*sin(q6)*sin(q7)
                                           0,          0, g*cos(q2)*cos(q3) - g*sin(q2)*sin(q3), g*cos(q2)*sin(q3) + g*cos(q3)*sin(q2), g*cos(q4)*sin(q2)*sin(q3)*sin(q5) - g*cos(q3)*cos(q5)*sin(q2) - g*cos(q2)*cos(q3)*cos(q4)*sin(q5) - g*cos(q2)*cos(q5)*sin(q3), g*sin(q2)*sin(q3)*sin(q4)*sin(q6) - g*cos(q2)*cos(q6)*sin(q3)*sin(q5) - g*cos(q3)*cos(q6)*sin(q2)*sin(q5) - g*cos(q2)*cos(q3)*sin(q4)*sin(q6) - g*cos(q4)*cos(q5)*cos(q6)*sin(q2)*sin(q3) + g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*cos(q6), g*cos(q2)*cos(q3)*cos(q4) - g*cos(q4)*sin(q2)*sin(q3), g*cos(q2)*cos(q3)*sin(q4) - g*sin(q2)*sin(q3)*sin(q4), g*cos(q2)*sin(q3)*sin(q5) + g*cos(q3)*sin(q2)*sin(q5) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5) + g*cos(q4)*cos(q5)*sin(q2)*sin(q3), g*cos(q6)*sin(q2)*sin(q3)*sin(q4) - g*cos(q2)*cos(q3)*cos(q6)*sin(q4) + g*cos(q2)*sin(q3)*sin(q5)*sin(q6) + g*cos(q3)*sin(q2)*sin(q5)*sin(q6) + g*cos(q4)*cos(q5)*sin(q2)*sin(q3)*sin(q6) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*sin(q6), g*cos(q2)*cos(q5)*sin(q3)*sin(q7) + g*cos(q3)*cos(q5)*sin(q2)*sin(q7) + g*cos(q2)*cos(q3)*cos(q4)*sin(q5)*sin(q7) + g*cos(q6)*cos(q7)*sin(q2)*sin(q3)*sin(q4) + g*cos(q2)*cos(q7)*sin(q3)*sin(q5)*sin(q6) + g*cos(q3)*cos(q7)*sin(q2)*sin(q5)*sin(q6) - g*cos(q4)*sin(q2)*sin(q3)*sin(q5)*sin(q7) - g*cos(q2)*cos(q3)*cos(q6)*cos(q7)*sin(q4) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*cos(q7)*sin(q6) + g*cos(q4)*cos(q5)*cos(q7)*sin(q2)*sin(q3)*sin(q6), g*cos(q4)*cos(q7)*sin(q2)*sin(q3)*sin(q5) - g*cos(q3)*cos(q5)*cos(q7)*sin(q2) - g*cos(q2)*cos(q3)*cos(q6)*sin(q4)*sin(q7) - g*cos(q2)*cos(q5)*cos(q7)*sin(q3) + g*cos(q6)*sin(q2)*sin(q3)*sin(q4)*sin(q7) + g*cos(q2)*sin(q3)*sin(q5)*sin(q6)*sin(q7) + g*cos(q3)*sin(q2)*sin(q5)*sin(q6)*sin(q7) - g*cos(q2)*cos(q3)*cos(q4)*cos(q7)*sin(q5) + g*cos(q4)*cos(q5)*sin(q2)*sin(q3)*sin(q6)*sin(q7) - g*cos(q2)*cos(q3)*cos(q4)*cos(q5)*sin(q6)*sin(q7)
                                           0,          0,                                     0,                                     0,                                                                                                g*sin(q2 + q3)*sin(q4)*sin(q5),                                                                                                                                                                           -g*sin(q2 + q3)*(cos(q4)*sin(q6) + cos(q5)*cos(q6)*sin(q4)),                               -g*sin(q2 + q3)*sin(q4),                                g*sin(q2 + q3)*cos(q4),                                                                                                g*sin(q2 + q3)*cos(q5)*sin(q4),                                                                                                                                                                           -g*sin(q2 + q3)*(cos(q4)*cos(q6) - cos(q5)*sin(q4)*sin(q6)),                                                                                                                                                                                                                                                                                                                                                 -g*sin(q2 + q3)*(sin(q4)*sin(q5)*sin(q7) + cos(q4)*cos(q6)*cos(q7) - cos(q5)*cos(q7)*sin(q4)*sin(q6)),                                                                                                                                                                                                                                                                                                                                                  g*sin(q2 + q3)*(cos(q7)*sin(q4)*sin(q5) - cos(q4)*cos(q6)*sin(q7) + cos(q5)*sin(q4)*sin(q6)*sin(q7))
                                           0,          0,                                     0,                                     0,    -g*(cos(q2)*cos(q3)*sin(q5) - sin(q2)*sin(q3)*sin(q5) + cos(q2)*cos(q4)*cos(q5)*sin(q3) + cos(q3)*cos(q4)*cos(q5)*sin(q2)),                                                                            -g*(cos(q5)*cos(q6)*sin(q2)*sin(q3) - cos(q2)*cos(q3)*cos(q5)*cos(q6) + cos(q2)*cos(q4)*cos(q6)*sin(q3)*sin(q5) + cos(q3)*cos(q4)*cos(q6)*sin(q2)*sin(q5)),                                                     0,                                                     0,     g*(cos(q5)*sin(q2)*sin(q3) - cos(q2)*cos(q3)*cos(q5) + cos(q2)*cos(q4)*sin(q3)*sin(q5) + cos(q3)*cos(q4)*sin(q2)*sin(q5)),                                                                             g*(cos(q5)*sin(q2)*sin(q3)*sin(q6) - cos(q2)*cos(q3)*cos(q5)*sin(q6) + cos(q2)*cos(q4)*sin(q3)*sin(q5)*sin(q6) + cos(q3)*cos(q4)*sin(q2)*sin(q5)*sin(q6)),                                                                                                     g*(cos(q2)*cos(q3)*sin(q5)*sin(q7) - sin(q2)*sin(q3)*sin(q5)*sin(q7) - cos(q2)*cos(q3)*cos(q5)*cos(q7)*sin(q6) + cos(q2)*cos(q4)*cos(q5)*sin(q3)*sin(q7) + cos(q3)*cos(q4)*cos(q5)*sin(q2)*sin(q7) + cos(q5)*cos(q7)*sin(q2)*sin(q3)*sin(q6) + cos(q2)*cos(q4)*cos(q7)*sin(q3)*sin(q5)*sin(q6) + cos(q3)*cos(q4)*cos(q7)*sin(q2)*sin(q5)*sin(q6)),                                                                                                    -g*(cos(q2)*cos(q3)*cos(q7)*sin(q5) - cos(q7)*sin(q2)*sin(q3)*sin(q5) + cos(q2)*cos(q4)*cos(q5)*cos(q7)*sin(q3) + cos(q3)*cos(q4)*cos(q5)*cos(q7)*sin(q2) + cos(q2)*cos(q3)*cos(q5)*sin(q6)*sin(q7) - cos(q5)*sin(q2)*sin(q3)*sin(q6)*sin(q7) - cos(q2)*cos(q4)*sin(q3)*sin(q5)*sin(q6)*sin(q7) - cos(q3)*cos(q4)*sin(q2)*sin(q5)*sin(q6)*sin(q7))
                                           0,          0,                                     0,                                     0,                                                                                                                             0,        -g*(cos(q2)*cos(q6)*sin(q3)*sin(q4) + cos(q3)*cos(q6)*sin(q2)*sin(q4) + cos(q2)*cos(q3)*sin(q5)*sin(q6) - sin(q2)*sin(q3)*sin(q5)*sin(q6) + cos(q2)*cos(q4)*cos(q5)*sin(q3)*sin(q6) + cos(q3)*cos(q4)*cos(q5)*sin(q2)*sin(q6)),                                                     0,                                                     0,                                                                                                                             0,        -g*(cos(q2)*cos(q3)*cos(q6)*sin(q5) - cos(q2)*sin(q3)*sin(q4)*sin(q6) - cos(q3)*sin(q2)*sin(q4)*sin(q6) - cos(q6)*sin(q2)*sin(q3)*sin(q5) + cos(q2)*cos(q4)*cos(q5)*cos(q6)*sin(q3) + cos(q3)*cos(q4)*cos(q5)*cos(q6)*sin(q2)),                                                                                                                                                                        -g*(cos(q2)*cos(q3)*cos(q6)*cos(q7)*sin(q5) - cos(q2)*cos(q7)*sin(q3)*sin(q4)*sin(q6) - cos(q3)*cos(q7)*sin(q2)*sin(q4)*sin(q6) - cos(q6)*cos(q7)*sin(q2)*sin(q3)*sin(q5) + cos(q2)*cos(q4)*cos(q5)*cos(q6)*cos(q7)*sin(q3) + cos(q3)*cos(q4)*cos(q5)*cos(q6)*cos(q7)*sin(q2)),                                                                                                                                                                        -g*(cos(q2)*cos(q3)*cos(q6)*sin(q5)*sin(q7) - cos(q2)*sin(q3)*sin(q4)*sin(q6)*sin(q7) - cos(q3)*sin(q2)*sin(q4)*sin(q6)*sin(q7) - cos(q6)*sin(q2)*sin(q3)*sin(q5)*sin(q7) + cos(q2)*cos(q4)*cos(q5)*cos(q6)*sin(q3)*sin(q7) + cos(q3)*cos(q4)*cos(q5)*cos(q6)*sin(q2)*sin(q7))
                                           0,          0,                                     0,                                     0,                                                                                                                             0,                                                                                                                                                                                                                                     0,                                                     0,                                                     0,                                                                                                                             0,                                                                                                                                                                                                                                     0,                                                                                                                                                                                                                                                                                                                                                                                                                                                     0,                                                                                                                                                                                                                                                                                                                                                                                                                                                    0]; %g*(cos(q5)*cos(q7)*sin(q2)*sin(q3) - cos(q2)*cos(q3)*cos(q5)*cos(q7) + cos(q2)*cos(q4)*cos(q7)*sin(q3)*sin(q5) + cos(q3)*cos(q4)*cos(q7)*sin(q2)*sin(q5) + cos(q2)*cos(q6)*sin(q3)*sin(q4)*sin(q7) + cos(q3)*cos(q6)*sin(q2)*sin(q4)*sin(q7) + cos(q2)*cos(q3)*sin(q5)*sin(q6)*sin(q7) - sin(q2)*sin(q3)*sin(q5)*sin(q6)*sin(q7) + cos(q2)*cos(q4)*cos(q5)*sin(q3)*sin(q6)*sin(q7) + cos(q3)*cos(q4)*cos(q5)*sin(q2)*sin(q6)*sin(q7)),                -g*(cos(q2)*cos(q3)*cos(q5)*sin(q7) - cos(q5)*sin(q2)*sin(q3)*sin(q7) + cos(q2)*cos(q6)*cos(q7)*sin(q3)*sin(q4) + cos(q3)*cos(q6)*cos(q7)*sin(q2)*sin(q4) + cos(q2)*cos(q3)*cos(q7)*sin(q5)*sin(q6) - cos(q2)*cos(q4)*sin(q3)*sin(q5)*sin(q7) - cos(q3)*cos(q4)*sin(q2)*sin(q5)*sin(q7) - cos(q7)*sin(q2)*sin(q3)*sin(q5)*sin(q6) + cos(q2)*cos(q4)*cos(q5)*cos(q7)*sin(q3)*sin(q6) + cos(q3)*cos(q4)*cos(q5)*cos(q7)*sin(q2)*sin(q6))];


  Torques = Regressor_Matrix*dynamic_param_grav;
%   Torques = [Torques(1);Torques(2);Torques(3);...
%       Torques(4);Torques(5);Torques(6);Torques(7)];
%   Torques = [Torques(1);Torques(2);Torques(2);Torques(3);...
%       Torques(4);0;0;0];
  Torques(5:7) = zeros(1, 3);
  Set_Torque(pub_tor, Torques);
%   pause(0.01);
%   position_error(1:8,i) = Get_Position(sub_pos)-position;
%   display('running')
%   torque_table(:,i)=Torques(:);
%   effort_table(:,i)=effort(:);
%   pos_table(:,i)=[q1;q2;q3;q4;q5;q6;q7];
  compare_torque = [effort';Torques'];
  loop = loop+1;
%   display(loop)
  time = r.TotalElapsedTime;
%   fprintf('Time Elapsed: %d',time)
  waitfor(r);
  
% end
end

% w = waitforbuttonpress;
%     if w == 0
%         disp('Reset torque')
%         i = 1;
%     else
%         disp('Press any key to reset torque')
%     end

% pause(7)
% %reset torque
Torque_reset = [0;0;0;0;0;0;0;0];
Set_Torque(pub_tor,Torque_reset);
rosshutdown
% Plot_Errors(position_error);