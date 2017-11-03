rosshutdown
rosinit

sub_tor = rossubscriber('/dvrk/MTMR/state_joint_current');
pub_pos = rospublisher('/dvrk/MTMR/set_position_joint');

sum_mean_torque = zeros(8,50);
for i = 2:6
    sum_mean_torque = zeros(8,50);
    q = [0,0,0,0,0,0,0];
    Set_Position(pub_pos,q); 
    pause(3)
    for j = 1:10
        q(i) = q(i)+0.015;
        Set_Position(pub_pos,q);
        pause(2)
        for k = 1:50
            msg = receive(sub_tor);
            sum_mean_torque(:,k) = msg.Effort;                
        end
        mean(sum_mean_torque)
    end                 
end
mean(sum_mean_torque)