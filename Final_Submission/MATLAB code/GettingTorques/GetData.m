Home();
pause(10);
n = 30;
sub_tor = rossubscriber('/my_tor_node2');
sub_pos = rossubscriber('/dvrk_mtm/joint_position_current');
pub_pos = rospublisher('/dvrk_mtm/set_position_joint', 'sensor_msgs/JointState');
saved_data = zeros(8,2,n);
data = zeros(8,2,10);
q_max = [0 0 0 4.28 3.14 .079 4.71];
q_min = [0 0 0 -1.05 -1.57 -0.79 -4.71];
qs = rand(8,n);
qs(1:8, 1) = [0, 0, 0, 0, 0, 0, 0, 0];

for i = 1:15
       qs(1:3,i) = positions(1:3,2);
end

for i = 16:30
       qs(1:3,i) = positions(1:3,3);
end

for i = 1:30
    qs(4:7,i) = qs(4:7,i).*(q_max(4:7)'-q_min(4:7)')*.8 - (q_max(4:7)'+ q_min(4:7)')/2;
end

for i = 1:n
    Set_Position(pub_pos, qs(:,i));
    pause(5);
    for j = 1:10
        data(:,1,j) = Get_Position(sub_pos);
        data(:,2,j) = Get_Torque(sub_tor);
        pause(1);
    end
    for j = 1:8
        saved_data(j,1,i) = mean(data(j,1,:));
        saved_data(j,2,i) = mean(data(j,2,:));
    end
end
