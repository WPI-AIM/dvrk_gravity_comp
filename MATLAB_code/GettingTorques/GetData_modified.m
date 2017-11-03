%n = 20;
n=10;
sub_tor = rossubscriber('/my_tor_node2');
sub_pos = rossubscriber('/dvrk_mtm/joint_position_current');
pub_pos = rospublisher('/dvrk_mtm/set_position_joint', 'sensor_msgs/JointState');
data = zeros(8,2,n);
%qs = rand(8,n);
qs = zeros(8,10);
q_max = [.79 .79 .79 4.28 3.14 .79 4.71 0];
q_min = [-1.31 -.79 -.79 -1.05 -1.57 -.79 -4.71 0];
q_mids = q_min+(q_max-q_min)/2
q_dis_l = [(q_mid(1)-q_min(1))/3 , (q_mid(2)-q_min(2))/3 , (q_mid(3)-q_min(3))/3 ,(q_mid(4)-q_min(4))/2 , (q_mid(5)-q_min(5))/2 , (q_mid(6)-q_min(6))/2 , (q_mid(7)-q_min(7))/2 , (q_mid(8)-q_min(8))/2]
q_dis_h = [(q_max(1)-q_mid(1))/3 , (q_max(2)-q_mid(2))/3 , (q_max(3)-q_mid(3))/3 ,(q_max(4)-q_mid(4))/2 , (q_max(5)-q_mid(5))/2 , (q_max(6)-q_mid(6))/2 , (q_max(7)-q_mid(7))/2 , (q_max(8)-q_mid(8))/2]


qs(:,1)  = q_mids - q_dis_l
qs(:,2)  = q_mids + q_dis_h
qs(:,3)  = [q_mids(1)-q_dis_l(1) - 0.1 + 0.2 * rand , q_mids(2)-q_dis_l(2) - 0.1 + 0.2 * rand , q_mids(3)-q_dis_l(3) -0.1 + 0.2 * rand , q_mids(4)+q_dis_h(4) -0.1 + 0.2 * rand , q_mids(5)+q_dis_h(5) -0.1 + 0.2 * rand , q_mids(6)+q_dis_h(6) -0.1 + 0.2 * rand , q_mids(7)+q_dis_h(7) -0.1 + 0.2 * rand , q_mids(8)+q_dis_h(8) -0.1 + 0.2 * rand]
qs(:,4)  = [q_mids(1)+q_dis_h(1) - 0.1 + 0.2 * rand , q_mids(2)+q_dis_h(2) - 0.1 + 0.2 * rand , q_mids(3)+q_dis_h(3) -0.1 + 0.2 * rand , q_mids(4)-q_dis_l(4) -0.1 + 0.2 * rand , q_mids(5)-q_dis_l(5) -0.1 + 0.2 * rand , q_mids(6)-q_dis_l(6) -0.1 + 0.2 * rand , q_mids(7)+q_dis_h(7) -0.1 + 0.2 * rand , q_mids(8)+q_dis_h(8) -0.1 + 0.2 * rand]
qs(:,5)  = [q_mids(1)-q_dis_l(1) - 0.1 + 0.2 * rand , q_mids(2)-q_dis_l(2) - 0.1 + 0.2 * rand , q_mids(3)+q_dis_h(3) -0.1 + 0.2 * rand , q_mids(4)+q_dis_h(4) -0.1 + 0.2 * rand , q_mids(5)-q_dis_l(5) -0.1 + 0.2 * rand , q_mids(6)-q_dis_l(6) -0.1 + 0.2 * rand , q_mids(7)+q_dis_h(7) -0.1 + 0.2 * rand , q_mids(8)+q_dis_h(8) -0.1 + 0.2 * rand]
qs(:,6)  = [q_mids(1)+q_dis_h(1) - 0.1 + 0.2 * rand , q_mids(2)+q_dis_h(2) - 0.1 + 0.2 * rand , q_mids(3)-q_dis_l(3) -0.1 + 0.2 * rand , q_mids(4)+q_dis_h(4) -0.1 + 0.2 * rand , q_mids(5)+q_dis_h(5) -0.1 + 0.2 * rand , q_mids(6)-q_dis_l(6) -0.1 + 0.2 * rand , q_mids(7)-q_dis_l(7) -0.1 + 0.2 * rand , q_mids(8)+q_dis_h(8) -0.1 + 0.2 * rand]
qs(:,7)  = [q_mids(1)-q_dis_l(1) - 0.1 + 0.2 * rand , q_mids(2)-q_dis_l(2) - 0.1 + 0.2 * rand , q_mids(3)-q_dis_l(3) -0.1 + 0.2 * rand , q_mids(4)+q_dis_h(4) -0.1 + 0.2 * rand , q_mids(5)+q_dis_h(5) -0.1 + 0.2 * rand , q_mids(6)+q_dis_h(6) -0.1 + 0.2 * rand , q_mids(7)+q_dis_h(7) -0.1 + 0.2 * rand , q_mids(8)+q_dis_h(8) -0.1 + 0.2 * rand]
qs(:,8)  = [q_mids(1)+q_dis_h(1) - 0.1 + 0.2 * rand , q_mids(2)+q_dis_h(2) - 0.1 + 0.2 * rand , q_mids(3)-q_dis_l(3) -0.1 + 0.2 * rand , q_mids(4)+q_dis_h(4) -0.1 + 0.2 * rand , q_mids(5)-q_dis_l(5) -0.1 + 0.2 * rand , q_mids(6)+q_dis_h(6) -0.1 + 0.2 * rand , q_mids(7)-q_dis_l(7) -0.1 + 0.2 * rand , q_mids(8)+q_dis_h(8) -0.1 + 0.2 * rand]
qs(:,9)  = [q_mids(1)+q_dis_h(1) - 0.1 + 0.2 * rand , q_mids(2)+q_dis_h(2) - 0.1 + 0.2 * rand , q_mids(3)-q_dis_l(3) -0.1 + 0.2 * rand , q_mids(4)-q_dis_l(4) -0.1 + 0.2 * rand , q_mids(5)-q_dis_l(5) -0.1 + 0.2 * rand , q_mids(6)+q_dis_h(6) -0.1 + 0.2 * rand , q_mids(7)+q_dis_h(7) -0.1 + 0.2 * rand , q_mids(8)+q_dis_h(8) -0.1 + 0.2 * rand]
qs(:,10) = [q_mids(1)+q_dis_h(1) - 0.1 + 0.2 * rand , q_mids(2)+q_dis_h(2) - 0.1 + 0.2 * rand , q_mids(3)+q_dis_h(3) -0.1 + 0.2 * rand , q_mids(4)-q_dis_l(4) -0.1 + 0.2 * rand , q_mids(5)-q_dis_l(5) -0.1 + 0.2 * rand , q_mids(6)+q_dis_h(6) -0.1 + 0.2 * rand , q_mids(7)-q_dis_l(7) -0.1 + 0.2 * rand , q_mids(8)+q_dis_h(8) -0.1 + 0.2 * rand]

%{
for i = 1:8
    if i<4
        qs(i, :) = (qs(i, :)-.5)*(q_max(i)-q_min(i))/3 + (q_max(i) + q_min(i))/2;
    else
        qs(i, :) = (qs(i, :)-.5)*(q_max(i)-q_min(i)) + (q_max(i) + q_min(i))/2;
    end
    
end
%}
for i = 1:n
    Set_Position(pub_pos, qs(:,i));
    pause(5);
    data(:,1,i) = Get_Position(sub_pos);
    data(:,2,i) = Get_Torque(sub_tor);
    pause(1);
end
