function plot_sample(x,y)
%PLOTDATA Plots the data points x and y into a new figure 
%   PLOTDATA(x,y) plots the data points and gives the figure axes labels of
%   population and profit.

figure; % open a new figure window

% ====================== YOUR CODE HERE ======================
% Instructions: Plot the training data into a figure using the 
%               "figure" and "plot" commands. Set the axes labels using
%               the "xlabel" and "ylabel" commands. Assume the 
%               population and revenue data have been passed in
%               as the x and y arguments of this function.
%
% Hint: You can use the 'rx' option with plot to have the markers
%       appear as red crosses. Furthermore, you can make the
%       markers larger by using plot(..., 'rx', 'MarkerSize', 10);

data=load('plot.txt');
x=data(:,1);
y=data(:,2);

%m=length(y);
plot(x,y,'ko', 'MarkerFaceColor', 'r', 'MarkerSize', 10);
hold on;
%plot(y,z,'rx','MarkerSize',20);
ylabel('Number of Triplets');
xlabel(' Values of n');
title('Variation of Triplets' )
%print -dpdf image12.pdf

% ============================================================

end
