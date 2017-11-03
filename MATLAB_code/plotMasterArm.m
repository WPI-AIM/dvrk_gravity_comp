function allTransforms = plotMasterArm(j1, j2, j3, j4, j5, j6, j7, dList, aList, alphaList)
deg=pi/180;
%dList=[0 0 0 0.1506 0 0 0];
%alphaList=[pi/2 0 -pi/2 pi/2 -pi/2 pi/2 0];
%aList=[0 0.2794 0.3645 0 0 0 0];
tList=[j1-90 j2-90 j3+90 j4 j5 j6-90 j7]*deg;

transform2List(:,:,1)=[1 0 0 0; 0 1 0 0; 0 0 1 0; 0 0 0 1];

for i=1:length(dList)
    transform=transformMatrix(tList(i), dList(i), alphaList(i), aList(i));
    allTransforms(:,:,i)=transform;
end

for i=1:length(dList)
    transform=allTransforms(:,:,i);
    transform2List(:,:,i+1)=transform2List(:,:,i)*transform;
end
xPos=0;
yPos=0;
zPos=0;
for k=2:length(dList)+1
    xPos=[xPos transform2List(1,4,k)];
    yPos=[yPos transform2List(2,4,k)];
    zPos=[zPos transform2List(3,4,k)];
end
plot3(xPos, yPos, zPos, '-bo', 'LineWidth', 5, 'MarkerSize', 10);
xlabel('X');
    ylabel('Y');
    zlabel('Z');
axis([-1 1 -1 1])
endTransform=transform2List(:,:,end);
mainTransform=transform2List(:,:,4);