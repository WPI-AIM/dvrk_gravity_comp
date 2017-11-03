syms g real;
syms m1 m2 m3 m4 m5 m6 real;
syms l1 l2 l3 l4 l5 l6 real;
syms cm1_x cm2_x cm3_x cm4_x cm5_x cm6_x real;
syms cm1_y cm2_y cm3_y cm4_y cm5_y cm6_y real;
syms cm1_z cm2_z cm3_z cm4_z cm5_z cm6_z real;
syms I1_xx I1_xy I1_xz I1_yy I1_yz I1_zz real;
syms I2_xx I2_xy I2_xz I2_yy I2_yz I2_zz real;
syms I3_xx I3_xy I3_xz I3_yy I3_yz I3_zz real;
syms I4_xx I4_xy I4_xz I4_yy I4_yz I4_zz real;
syms I5_xx I5_xy I5_xz I5_yy I5_yz I5_zz real;
syms I6_xx I6_xy I6_xz I6_yy I6_yz I6_zz real;
syms q1 q2 q3 q4 q5 q6 real;
syms qd1 qd2 qd3 qd4 qd5 qd6 real;
syms qdd1 qdd2 qdd3 qdd4 qdd5 qdd6 real;
rho = [1 1 1 1 1 0]; %types of joints: 1 for revolute, 0 for prismatic 

DH_table = [q1 0 l1 0;...
            q2 0 l2 0];

gravity_vector = [0 -g 0]'; %negative direction in y-axis
m = [m1 m2 m3 m4 m5 m6];
cm1 = [0 0 0]';
cm2 = [0 0 0]';
cm3 = [cm3_x cm3_y cm3_z]';
cm4 = [cm4_x cm4_y cm4_z]';
cm5 = [cm5_x cm5_y cm5_z]';
cm6 = [cm6_x cm6_y cm6_z]';

cm = [cm1 cm2 cm3 cm4 cm5 cm6]; %respect to generalized (local) coordinate
%frame

I1 = [0 0 0;...
      0 0 0;...
      0 0 I1_zz];

I2 = [0 0 0;...
      0 0 0;...
      0 0 I2_zz];
  
I3 = [I3_xx I3_xy I3_xz;...
      I3_xy I3_yy I3_yz;...
      I3_xz I3_yz I3_zz];
  
I4 = [I4_xx I4_xy I4_xz;...
      I4_xy I4_yy I4_yz;...
      I4_xz I4_yz I4_zz];
  
I5 = [I5_xx I5_xy I5_xz;...
      I5_xy I5_yy I5_yz;...
      I5_xz I5_yz I5_zz];
  
I6 = [I6_xx I6_xy I6_xz;...
      I6_xy I6_yy I6_yz;...
      I6_xz I6_yz I6_zz];
  
I = sym(zeros(3,3,6));
I(:,:,1) = I1;
I(:,:,2) = I2;
I(:,:,3) = I3;
I(:,:,4) = I4;
I(:,:,5) = I5;
I(:,:,6) = I6;
               