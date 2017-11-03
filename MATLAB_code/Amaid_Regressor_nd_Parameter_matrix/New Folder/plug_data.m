
%%
%
q_sub = zeros(8,1);
tor_sub = zeros(8,1);
%R_augmented = zeros(462,31)

%%
% create an array of angles
syms q1 q8

qs = [q1 symvar(knowns) q8].'

%%
% number of data sets
s= size(Torques_data)
number_of_data_sets = s(3)

for i=1:number_of_data_sets
    
    % load angles values
    q_sub = Torques_data(:,1,i);
    
    % load torques
    tor_sub = Torques_data(1:7,2,i);
    
   
    A = double(subs(knowns,qs,q_sub));
    
    %B = double(subs(knowns,qs,q_sub));
    
    if (i==1)
       R_augmented = A; 
       T_augmented = tor_sub;
    
    else
        
        R_augmented = [R_augmented;A];
        T_augmented = [T_augmented;tor_sub];
    end
    
    
end 


