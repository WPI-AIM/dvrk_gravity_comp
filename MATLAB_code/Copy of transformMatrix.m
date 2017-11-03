function matrix = transformMatrix(theta, d, alpha, a)
ct=cos(theta);

st=sin(theta);
ca=cos(alpha);
sa=sin(alpha);

if(abs(ca)<1e-5)
    ca=0;
end
if(abs(sa)<1e-5)
    sa=0;
end

matrix=[ct -st*ca st*sa a*ct;
    st ct*ca -ct*sa a*st;
    0 sa ca d;
    0 0 0 1];
return;