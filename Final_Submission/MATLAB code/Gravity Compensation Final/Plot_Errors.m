function [Success] = Plot_Errors(pos_e)
close all;

figure

for i = 2:7
    subplot(2,3,(i-1))
    hold on
    plot(pos_e(i,:))
    title(sprintf('Joint %d', i));
    xlabel('Time (msec)');
    ylabel('Joint Error (rads)');
end

Success = 1;
