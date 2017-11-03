%% calculated estimates
%
%%
% right pseudo_inverse
%Rpi = (R_augmented.')*inv((R_augmented*(R_augmented.')));

dynamic_parameters = pinv(R2_augmented)*T2_augmented