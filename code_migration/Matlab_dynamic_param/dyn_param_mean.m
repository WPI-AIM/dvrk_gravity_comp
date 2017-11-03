function dynamic_mean = dyn_param_mean(dynamic_param)
%     x=1
    dynamic_mean = zeros(size(dynamic_param,1),1);
    for i = 1:size(dynamic_param,1)
       dynamic_mean(i)=mean(dynamic_param(i,:)); 
    end

end