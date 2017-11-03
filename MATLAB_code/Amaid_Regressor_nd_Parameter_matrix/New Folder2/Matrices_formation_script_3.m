%
%
%
%
%
%
%% 
% Regressor and dyna.Parameter Matrices initialization
Regressor_Matrix = sym(zeros(7,12));
Parameter_matrix = sym(zeros(12,1));


%%
% First of all Populate the parametetric matrix
Parameter_matrix(1,1)  = L2*m2+L2*m3+L2*m4+L2*m5+L2*m6+L2*m7+cm2_x*m2;
Parameter_matrix(2,1)  = cm2_y*m2;
Parameter_matrix(3,1)  = L3*m3+L3*m4+L3*m5+L3*m6+L3*m7+cm3_x*m3;
Parameter_matrix(4,1)  = cm4_y*m4 -cm3_z*m3 -L4_z0*m4 -L4_z0*m5 -L4_z0*m6 -L4_z0*m7;
Parameter_matrix(5,1)  = cm5_z*m5 +cm6_y*m6;
Parameter_matrix(6,1)  = cm6_z*m6 +cm7_z*m7;
Parameter_matrix(7,1)  = cm4_x*m4;
%Parameter_matrix(8,1)  = cm4_y*m4;
Parameter_matrix(8,1)  = - cm4_z*m4 + cm5_y*m5;
Parameter_matrix(9,1) = cm5_x*m5;
%Parameter_matrix(10,1) = cm5_y*m5;
Parameter_matrix(10,1) = cm6_x*m6;
Parameter_matrix(11,1) = cm7_x*m7;
Parameter_matrix(12,1) = cm7_y*m7;

%%
% Now populate the regressor Matrix
%%

% Row 2
Regressor_Matrix (2,1)  = Get_Cof(Torque(2),m2,L2);
Regressor_Matrix (2,2)  = Get_Cof(Torque(2),m2,cm2_y);
Regressor_Matrix (2,3)  = Get_Cof(Torque(2),m3,L3);
Regressor_Matrix (2,4)  = Get_Cof(Torque(2),m4,cm4_y);
Regressor_Matrix (2,5)  = Get_Cof(Torque(2),m5,cm5_z);
Regressor_Matrix (2,6)  = Get_Cof(Torque(2),m6,cm6_z);
Regressor_Matrix (2,7)  = Get_Cof(Torque(2),m4,cm4_x);
%Regressor_Matrix (2,8)  = Get_Cof(Torque(2),m4,cm4_y);
Regressor_Matrix (2,8)  = Get_Cof(Torque(2),m5,cm5_y);
Regressor_Matrix (2,9) = Get_Cof(Torque(2),m5,cm5_x);
%Regressor_Matrix (2,10) = Get_Cof(Torque(2),m5,cm5_y);
Regressor_Matrix (2,10) = Get_Cof(Torque(2),m6,cm6_x);
Regressor_Matrix (2,11) = Get_Cof(Torque(2),m7,cm7_x);
Regressor_Matrix (2,12) = Get_Cof(Torque(2),m7,cm7_y);


%%
% Row 3

% Regressor_Matrix (3,1)  = Get_Cof(Torque(3),m2,L2);
% Regressor_Matrix (3,2)  = Get_Cof(Torque(3),m2,cm2_y);
Regressor_Matrix (3,3)  = Get_Cof(Torque(3),m3,L3);
Regressor_Matrix (3,4)  = Get_Cof(Torque(3),m4,cm4_y);
Regressor_Matrix (3,5)  = Get_Cof(Torque(3),m5,cm5_z);
Regressor_Matrix (3,6)  = Get_Cof(Torque(3),m6,cm6_z);
Regressor_Matrix (3,7)  = Get_Cof(Torque(3),m4,cm4_x);
%Regressor_Matrix (3,8)  = Get_Cof(Torque(3),m4,cm4_y);
Regressor_Matrix (3,8)  = Get_Cof(Torque(3),m5,cm5_y);
Regressor_Matrix (3,9) = Get_Cof(Torque(3),m5,cm5_x);
%Regressor_Matrix (3,10) = Get_Cof(Torque(3),m5,cm5_y);
Regressor_Matrix (3,10) = Get_Cof(Torque(3),m6,cm6_x);
Regressor_Matrix (3,11) = Get_Cof(Torque(3),m7,cm7_x);
Regressor_Matrix (3,12) = Get_Cof(Torque(3),m7,cm7_y);

%%
%row 4

% Regressor_Matrix (4,1)  = Get_Cof(Torque(4),m2,L2);
% Regressor_Matrix (4,2)  = Get_Cof(Torque(4),m2,cm2_y);
% Regressor_Matrix (4,3)  = Get_Cof(Torque(4),m3,L3);
% Regressor_Matrix (4,4)  = Get_Cof(Torque(4),m4,cm4_y);
Regressor_Matrix (4,5)  = Get_Cof(Torque(4),m5,cm5_z);
Regressor_Matrix (4,6)  = Get_Cof(Torque(4),m6,cm6_z);
Regressor_Matrix (4,7)  = Get_Cof(Torque(4),m4,cm4_x);
%Regressor_Matrix (4,8)  = Get_Cof(Torque(4),m4,cm4_y);
Regressor_Matrix (4,8)  = Get_Cof(Torque(4),m5,cm5_y);
Regressor_Matrix (4,9) = Get_Cof(Torque(4),m5,cm5_x);
%Regressor_Matrix (4,10) = Get_Cof(Torque(4),m5,cm5_y);
Regressor_Matrix (4,10) = Get_Cof(Torque(4),m6,cm6_x);
Regressor_Matrix (4,11) = Get_Cof(Torque(4),m7,cm7_x);
Regressor_Matrix (4,12) = Get_Cof(Torque(4),m7,cm7_y);

%%
% Row 5

% Regressor_Matrix (5,1)  = Get_Cof(Torque(5),m2,L2);
% Regressor_Matrix (5,2)  = Get_Cof(Torque(5),m2,cm2_y);
% Regressor_Matrix (5,3)  = Get_Cof(Torque(5),m3,L3);
% Regressor_Matrix (5,4)  = Get_Cof(Torque(5),m4,cm4_y);
 Regressor_Matrix (5,5)  = Get_Cof(Torque(5),m5,cm5_z);
 Regressor_Matrix (5,6)  = Get_Cof(Torque(5),m6,cm6_z);
% Regressor_Matrix (5,7)  = Get_Cof(Torque(5),m4,cm4_x);
% Regressor_Matrix (5,8)  = Get_Cof(Torque(5),m4,cm4_y);
% Regressor_Matrix (5,8)  = Get_Cof(Torque(5),m4,cm4_z);
Regressor_Matrix (5,9) = Get_Cof(Torque(5),m5,cm5_x);
% Regressor_Matrix (5,10) = Get_Cof(Torque(5),m5,cm5_y);
Regressor_Matrix (5,10)   = Get_Cof(Torque(5),m6,cm6_x);
Regressor_Matrix (5,11)  = Get_Cof(Torque(5),m7,cm7_x);
Regressor_Matrix (5,12)   = Get_Cof(Torque(5),m7,cm7_y);

%%
% Row 6 

% Regressor_Matrix (6,1)  = Get_Cof(Torque(6),m2,L2);
% Regressor_Matrix (6,2)  = Get_Cof(Torque(6),m2,cm2_y);
% Regressor_Matrix (6,3)  = Get_Cof(Torque(6),m3,L3);
% Regressor_Matrix (6,4)  = Get_Cof(Torque(6),m4,cm4_y);
% Regressor_Matrix (6,5)  = Get_Cof(Torque(6),m5,cm5_z);
Regressor_Matrix (6,6)  = Get_Cof(Torque(6),m6,cm6_z);
% Regressor_Matrix (6,7)  = Get_Cof(Torque(6),m4,cm4_x);
% Regressor_Matrix (6,8)  = Get_Cof(Torque(6),m4,cm4_y);
% Regressor_Matrix (6,8)  = Get_Cof(Torque(6),m4,cm4_z);
% Regressor_Matrix (6,9) = Get_Cof(Torque(6),m5,cm5_x);
% Regressor_Matrix (6,10) = Get_Cof(Torque(6),m5,cm5_y);
Regressor_Matrix (6,10) = Get_Cof(Torque(6),m6,cm6_x);
Regressor_Matrix (6,11) = Get_Cof(Torque(6),m7,cm7_x);
Regressor_Matrix (6,12) = Get_Cof(Torque(6),m7,cm7_y);

%% 
% Row 7

% Regressor_Matrix (7,1)  = Get_Cof(Torque(7),m2,L2);
% Regressor_Matrix (7,2)  = Get_Cof(Torque(7),m2,cm2_y);
% Regressor_Matrix (7,3)  = Get_Cof(Torque(7),m3,L3);
% Regressor_Matrix (7,4)  = Get_Cof(Torque(7),m4,cm4_y);
% Regressor_Matrix (7,5)  = Get_Cof(Torque(7),m5,cm5_z);
% Regressor_Matrix (7,6)  = Get_Cof(Torque(7),m6,cm6_z);
% Regressor_Matrix (7,7)  = Get_Cof(Torque(7),m4,cm4_x);
% Regressor_Matrix (7,8)  = Get_Cof(Torque(7),m4,cm4_y);
% Regressor_Matrix (7,8)  = Get_Cof(Torque(7),m4,cm4_z);
% Regressor_Matrix (7,9) = Get_Cof(Torque(7),m5,cm5_x);
% Regressor_Matrix (7,10) = Get_Cof(Torque(7),m5,cm5_y);
% Regressor_Matrix (7,11) = Get_Cof(Torque(7),m6,cm6_x);
 Regressor_Matrix (7,11) = g*(cos(q5)*cos(q7)*sin(q2)*sin(q3) - cos(q2)*cos(q3)*cos(q5)*cos(q7) + cos(q2)*cos(q4)*cos(q7)*sin(q3)*sin(q5) + cos(q3)*cos(q4)*cos(q7)*sin(q2)*sin(q5) + cos(q2)*cos(q6)*sin(q3)*sin(q4)*sin(q7) + cos(q3)*cos(q6)*sin(q2)*sin(q4)*sin(q7) + cos(q2)*cos(q3)*sin(q5)*sin(q6)*sin(q7) - sin(q2)*sin(q3)*sin(q5)*sin(q6)*sin(q7) + cos(q2)*cos(q4)*cos(q5)*sin(q3)*sin(q6)*sin(q7) + cos(q3)*cos(q4)*cos(q5)*sin(q2)*sin(q6)*sin(q7));
 Regressor_Matrix (7,12) = (-g*(cos(q2)*cos(q3)*cos(q5)*sin(q7) - cos(q5)*sin(q2)*sin(q3)*sin(q7) + cos(q2)*cos(q6)*cos(q7)*sin(q3)*sin(q4) + cos(q3)*cos(q6)*cos(q7)*sin(q2)*sin(q4) + cos(q2)*cos(q3)*cos(q7)*sin(q5)*sin(q6) - cos(q2)*cos(q4)*sin(q3)*sin(q5)*sin(q7) - cos(q3)*cos(q4)*sin(q2)*sin(q5)*sin(q7) - cos(q7)*sin(q2)*sin(q3)*sin(q5)*sin(q6) + cos(q2)*cos(q4)*cos(q5)*cos(q7)*sin(q3)*sin(q6) + cos(q3)*cos(q4)*cos(q5)*cos(q7)*sin(q2)*sin(q6)));
%Get_Cof(Torque(7),m7,cm7_y);
%Regressor_Matrix (7,25) = Get_Cof(Torque(7),m7,cm7_z);


Regressor_Matrix

T = Regressor_Matrix*Parameter_matrix

Diff  = simplify(T - Torque)
















