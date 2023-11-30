%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~%
%~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  KATEE  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~%
%~~~~~~~~~~~~~~~~~~~~~~~~~~ V2.0 (July 2023) ~~~~~~~~~~~~~~~~~~~~~~~~~~~~%
%%~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  

% clear previous instance of app
if exist('app', 'var') == 1
    delete(app);
end
delete(timerfindall)

% housekeeping 
clear all
close all
clc
baseDir = pwd;

% Create Busses
samplerate=1000;
dt=1/samplerate;
speedController_bus_creation();

% CMA-ES hyperparamters
% TODO (med): remove subjectNumber, includeStatic, includeElite, sigma and put in GUI
% cmaesN=10;                      % number of parameters
% lambda=4+floor(3*log(cmaesN));  % conditions/gen
% sigma = 0.5;                    % "spread" of CMA search region 
% subjectnumber=1;
% param_names={'PeakTorque','TorqueTime','RiseTime'};
% include_static = 1;             % testing a static condition once/gen helps track learning
% include_elite = 1;              % testing the prev gen's elite condition helps expedite optimization

% ankle assistance min/mean/static/max [onset_time, peak_torque, peak_time]
% note peak torque is Nm/kg (typically 0 to 1)
% TODO add weight to cmaes block 
% minAnk  =   [.10; 0.0; 0.10];
% meanAnk =   [.25; 0.5; 0.60];
% maxAnk  =   [.80; 1.0; 0.95];
% 
% % [heelstrike_ang, flex_ang, flexi_time, ext_ang, ext_time, swing_ang, swing_time]
% minKnee  =  [05; 10; 0.08; 02; 0.25; 45; 0.60];
% meanKnee =  [04; 28; 0.12; 08; 0.38; 70; 0.72];
% maxKnee  =  [15; 20; 0.20; 10; 0.45; 75; 0.80];
% 
% % gains (prop, deriv, learn, delay, sl) to initialize with
% startGains.ank.Kp = 0.0002;
% startGains.ank.Kd = 0;
% startGains.ank.Kl = 0.00025;
% startGains.ank.del = 18;
% startGains.ank.slack = 100;
% 
% startGains.knex.Kp = 7;
% startGains.knex.Kd = 0;
% startGains.knex.Kl = 0.5;
% startGains.knex.del = 30;
% startGains.knex.slack = 225;
% 
% startGains.knfl.Kp = 4;
% startGains.knfl.Kd = 0;
% startGains.knfl.Kl = 0.5;
% startGains.knfl.del = 30;
% startGains.knfl.slack = 150;
% 
% startGains.knex.KtS = 80;
% startGains.knfl.KtS = 80;
% 
% startGains.other.dtm = 0.025; % time interval that desired motor velocity is re-calculated at 
% startGains.other.KILdecay = .99;


% self-paced treadmill
% addpath([baseDir '\selfPacedTreadmill']); TEMP?
% tm.params.p_off = 0;
% tm.params.G_p = 0.1;
% tm.params.G_v = 0.25;
% tm.params.minMax_vel = [0, 3.0];
% tm.params.del_t_tgt = 0.5;

% load variables for controller 
% load('enablestream.mat') % tells cosmed to start streaming ENABLE COSMED STREAMING BUTTON

% send it 
choice = questdlg('Build SLX model?', 'Start options', 'Build model and run GUI', 'Just run GUI', 'Build model and run GUI');
            
tic
if strcmp(choice, 'Build model and run GUI')
    disp('Starting to build controller...')
    slbuild('speed_controller_copy');
end
start(slrt);
buildTime = num2str(round(toc));
disp(['Controller build finished in ' buildTime ' seconds.'])


disp('Starting to build GUI...');
app = SpeedControllerGui;

disp('Turn off gas! Zero force plates!')
