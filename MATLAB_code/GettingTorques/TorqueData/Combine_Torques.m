function [combined_torques] = Combine_Torques(varargin)
    arg_number = 1;
    for i = 1:nargin
        new_arg_number = arg_number + length(varargin{i})-1;
        size(varargin{i})
        combined_torques(1:8, 1:2, arg_number:new_arg_number) = varargin{i};
        arg_number = new_arg_number;
    end
end