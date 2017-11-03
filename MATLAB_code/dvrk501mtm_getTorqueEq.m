function torque = dvrk501mtm_getTorqueEq()

syms g real;
syms m1 m2 m3 m4 m5 m6 m7 real;
syms cm1_x cm2_x cm3_x cm4_x cm5_x cm6_x cm7_x real;
syms cm1_y cm2_y cm3_y cm4_y cm5_y cm6_y cm7_y real;
syms cm1_z cm2_z cm3_z cm4_z cm5_z cm6_z cm7_z real;
syms I1_xx I1_xy I1_xz I1_yy I1_yz I1_zz real;
syms I2_xx I2_xy I2_xz I2_yy I2_yz I2_zz real;
syms I3_xx I3_xy I3_xz I3_yy I3_yz I3_zz real;
syms I4_xx I4_xy I4_xz I4_yy I4_yz I4_zz real;
syms I5_xx I5_xy I5_xz I5_yy I5_yz I5_zz real;
syms I6_xx I6_xy I6_xz I6_yy I6_yz I6_zz real;
syms I7_xx I7_xy I7_xz I7_yy I7_yz I7_zz real;
syms L1 L2 L3 L4_y0 L4_z0 L5_y0 L5_z0 L6_z0 L6_x0 real;

syms q1 q2 q3 q4 q5 q6 q7 real;
q = [q1, q2, q3, q4, q5, q6, q7];
syms qd1 qd2 qd3 qd4 qd5 qd6 qd7 real;
syms qdd1 qdd2 qdd3 qdd4 qdd5 qdd6 qdd7 real;
rho = [1 1 1 1 1 1 1]; %types of joints: 1 for revolute, 0 for prismatic
dList=[-1*L1 0 0 L4_z0 0 0 0];
alphaList=[-pi/2 0 pi/2 -pi/2 -pi/2 pi/2 0];
aList=[0 L2 L3 0 0 0 0];
tList=[q1 (-q2+pi/2) (-q3-pi/2) q4 (-q5-pi) (q6-pi/2) -q7];


DH_table = [tList' dList' aList' alphaList'];
        
gravity_vector = [0 0 -g]'; %negative direction in y-axiss        
m = [m1 m2 m3 m4 m5 m6 m7];
cm1 = [cm1_x cm1_y cm1_z]';
cm2 = [cm2_x cm2_y cm2_z]';
cm3 = [cm3_x cm3_y cm3_z]';
cm4 = [cm4_x cm4_y cm4_z]';
cm5 = [cm5_x cm5_y cm5_z]';
cm6 = [cm6_x cm6_y cm6_z]';
cm7 = [cm7_x cm7_y cm7_z]';
cm = [cm1 cm2 cm3 cm4 cm5 cm6 cm7]; %respect to generalized (local) coordinate
%frame

I1 = [I1_xx I1_xy I1_xz;...
      I1_xy I1_yy I1_yz;...
      I1_xz I1_yz I1_zz];

I2 = [I2_xx I2_xy I2_xz;...
      I2_xy I2_yy I2_yz;...
      I2_xz I2_yz I2_zz];
  
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
  
I7 = [I7_xx I7_xy I7_xz;...
      I7_xy I7_yy I7_yz;...
      I7_xz I7_yz I7_zz];
  
I = sym(zeros(3,3,6));
I(:,:,1) = I1;
I(:,:,2) = I2;
I(:,:,3) = I3;
I(:,:,4) = I4;
I(:,:,5) = I5;
I(:,:,6) = I6;
I(:,:,7) = I7;
pE = potentialEnergy(DH_table, m, cm, gravity_vector);
torque = sym('t_%d', [7,1]);
for i = 1:length(q)
    torque(i) = -diff(pE, q(i));
end
torque = subs(torque, [g], [9.81]);
% torque = subs(torque, [cm1_x cm1_y cm1_z cm2_x cm2_y cm2_z cm3_x cm3_y cm3_z cm4_x cm4_y cm4_z cm5_x cm5_y cm5_z cm6_x cm6_y cm6_z cm7_x cm7_y cm7_z], [0 (-L1/2) 0 (-L2/2) 0 0 (-L3/2) 0 0 0 (3/4*L4_z0) (3/4*L4_y0) 0 (-3/4*L5_y0) (-3/4*L5_z0) 0 (-3/4*L6_z0) (-3/4*L6_x0) 0 0 0]);
% torque = subs(torque, [L1 L2 L3 L4_y0 L4_z0 L5_y0 L5_z0 L6_z0 L6_x0], [.195 .285 .370 .115 .150 11.5 .0725 .0725 .060]);
torque = simplify(torque);
