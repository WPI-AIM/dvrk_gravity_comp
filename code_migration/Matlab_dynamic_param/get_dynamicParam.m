function dynamicParameter = get_dynamicParam(joint_position,torque)

    regressorTotal = Get_Regressor(joint_position);

    torque = torque(1:7,:,:);
    torqueTotal = [];
    for i = 1:size(torque,3)
        for j = 1:size(torque,2)
            torqueTotal = [torqueTotal; torque(:,j,i)];
        end
    end

    dynamicParameter = pinv(regressorTotal)*torqueTotal;


end