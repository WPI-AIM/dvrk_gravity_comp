function [List] = Get_Initial_Parameter()
% Get_Initial_Parameters returns array of inital guesse of parameters
% Returns the inital guesses for the gravitational compensation terms in
% the array [g, cm1_x, cm1_y, cm1_z ... cm7_y, cm7_z, m1, ... m7]. initial
% guesses should be modified in this file

g = 9.81;

cm1_x = 0;
cm1_y = .195/2;
cm1_z = 0;

cm2_x = -.285/2;
cm2_y = 0;
cm2_z = 0;

cm3_x = -.37/2;
cm3_y = 0;
cm3_z = 0;

cm4_x = 0;
cm4_y = (3/4)*.10;
cm4_z = (3/4)*.095;

cm5_x = 0;
cm5_y = (3/4)*-.095;
cm5_z = -(3/4)*.045;

cm6_x = 0;
cm6_y = -(3/4)*.045;
cm6_z = -(3/4)*.045;

cm7_x = 0;
cm7_y = 0;
cm7_z = 0;

m1 = 0;
m2 = 0;
m3 = 0;
m4 = 10;
m5 = 0;
m6 = 0;
m7 = 0;

L2 = .195;
L3 = .285;
L4_z0 = .150;

List = [g, cm1_x, cm1_y, cm1_z, cm2_x, cm2_y, cm2_z,cm3_x, cm3_y, cm3_z,cm4_x, cm4_y, cm4_z, cm5_x, cm5_y, cm5_z,cm6_x, cm6_y, cm6_z,cm7_x, cm7_y, cm7_z,m1, m2, m3, m4, m5, m6, m7, L2, L3, L4_z0];

end

