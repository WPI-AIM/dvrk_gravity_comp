
%%
%
q_sub = zeros(8,1);
tor_sub = zeros(8,1);
R2_augmented = zeros(210,12);
T2_augmented = zeros(210,1);
%%
% create an array of angles
syms q1 q8

qs = [symvar(Regressor_Matrix)];

%%
% number of data sets
s= size(Torques_data)
number_of_data_sets = s(3)

for i=1:number_of_data_sets
    
    % load angles values
    q_sub = Torques_data(:,1,i);
    
    % load torques
    tor_sub = Torques_data(1:7,2,i);
    
   
    A = double(subs(Regressor_Matrix,qs,[9.9 q_sub(2:7).']));
    
    %B = double(subs(knowns,qs,q_sub));
    
    if (i==1)
       R2_augmented(1:7,:) = A; 
       T2_augmented(1:7,:) = tor_sub;
    
    else
        
        R2_augmented(7*i-6:7*i,:) = A;
        T2_augmented(7*i-6:7*i,:) = tor_sub;
    end
    
    
end 


