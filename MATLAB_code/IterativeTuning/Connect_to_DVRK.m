function Success = Connect_to_DVRK(ip)
% connects to roscore at the given ip address
rosinit(ip);
% might need to sync timers
Success = 1;
end