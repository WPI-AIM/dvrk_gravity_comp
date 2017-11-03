n = 30;
sub_tor = rossubscriber('/my_tor_node2');
sub_pos = rossubscriber('/dvrk_mtm/joint_position_current');
pub_pos = rospublisher('/dvrk_mtm/set_position_joint', 'sensor_msgs/JointState');
saved_data = zeros(8,2,n);
data = zeros(8,2,10);
qs = zeros(8,n);
q_max = [19.3/180*pi  49/180*pi 5.5/180*pi .79];
q_min = [-31.8/180*pi -17/180*pi -15/180*pi -1.05];
q_mids = q_min+(q_max-q_min)/2

for i = 1:8
    if i<5
        qs(i, :) = (qs(i, :)-.5)*(q_max(i)-q_min(i)) + (q_max(i) + q_min(i))/2;
    else
        qs(i, :) = 0;
    end
    
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
        saved_data(j,1,n) = avg(data(j,1,:));
        saved_data(j,1,n) = avg(data(j,2,:));
    end
end
