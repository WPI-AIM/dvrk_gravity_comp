function v = Get_Cof( T,m,L )
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here

a = coeffs(T,m);
b = coeffs(a(2),L);
v = b(2);

end

