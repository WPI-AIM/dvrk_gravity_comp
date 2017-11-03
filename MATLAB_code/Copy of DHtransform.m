function T = DHtransform(theta,d,a,alpha)
%take in four standard DH parameters between two consecutive frames and 
%return 4x4 homogeneous intermediate transformation matrix between
%the links
T = rot(theta,'z')*transl(d,'z')*transl(a,'x')*rot(alpha,'x');
for r=1:4
    for c=1:4
        if isa(T(r,c), 'sym')
        elseif abs(T(r,c))<1e-4
           T(r,c)=0;
        end
    end
end

end
