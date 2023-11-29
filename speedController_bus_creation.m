% function [ankleParams, kneeParams, constants, gains, treadmillButtons, ...
%     ankleButtons, kneeButtons, buttons, state, io] = Bus_Creation_katee()

% Script that creates the busses in the Workspace that are needed for the KATEE controller
% 2023/07/25

%% ankleParams
busElements(1) = Simulink.BusElement;
busElements(1).Name = "tOn";
busElements(1).Dimensions = 1;

% busElements(2) = Simulink.BusElement;
% busElements(2).Name = "torquePeak";
% busElements(2).Dimensions = 1;
% 
% busElements(3) = Simulink.BusElement;
% busElements(3).Name = "tPeak";
% busElements(3).Dimensions = 1;

% for i=1:numel(busElements)
%     busElements(i).SampleTime = [0,1];
% end

ankleParams = Simulink.Bus;
ankleParams.Elements = busElements;

clearvars busElements % Delete predefined bus elements

%% kneeParams
% busElements(1) = Simulink.BusElement;
% busElements(1).Name = "angHS";
% busElements(1).Dimensions = 1;
% 
% busElements(2) = Simulink.BusElement;
% busElements(2).Name = "angFlex";
% busElements(2).Dimensions = 1;
% 
% busElements(3) = Simulink.BusElement;
% busElements(3).Name = "tFlex";
% busElements(3).Dimensions = 1;
% 
% busElements(4) = Simulink.BusElement;
% busElements(4).Name = "angExt";
% busElements(4).Dimensions = 1;
% 
% busElements(5) = Simulink.BusElement;
% busElements(5).Name = "tExt";
% busElements(5).Dimensions = 1;
% 
% busElements(6) = Simulink.BusElement;
% busElements(6).Name = "angSwing";
% busElements(6).Dimensions = 1;

busElements(7) = Simulink.BusElement;
busElements(7).Name = "tSwing";
busElements(7).Dimensions = 1;

% for i=1:numel(busElements)
%     busElements(i).SampleTime = [0,1];
% end

kneeParams = Simulink.Bus;
kneeParams.Elements = busElements; 

clearvars busElements % Delete predefined bus elements

%% constants
% busElements(1) = Simulink.BusElement;
% busElements(1).Name = "KEXT";
% busElements(1).Dimensions = 1;
% 
% busElements(2) = Simulink.BusElement;
% busElements(2).Name = "KFLEX";
% busElements(2).Dimensions = 1;

busElements(3) = Simulink.BusElement;
busElements(3).Name = "REST";
busElements(3).Dimensions = 1;

busElements(4) = Simulink.BusElement;
busElements(4).Name = "SETZERO";
busElements(4).Dimensions = 1;

busElements(5) = Simulink.BusElement;
busElements(5).Name = "SWING";
busElements(5).Dimensions = 1;

busElements(6) = Simulink.BusElement;
busElements(6).Name = "STANCE";
busElements(6).Dimensions = 1;
% 
% busElements(7) = Simulink.BusElement;
% busElements(7).Name = "TORQUE";
% busElements(7).Dimensions = 1;

busElements(8) = Simulink.BusElement;
busElements(8).Name = "LOCK";
busElements(8).Dimensions = 1;

busElements(9) = Simulink.BusElement;
busElements(9).Name = "RUN";
busElements(9).Dimensions = 1;

% busElements(10) = Simulink.BusElement;
% busElements(10).Name = "GIVINGSLACK";
% busElements(10).Dimensions = 1;
% 
% busElements(11) = Simulink.BusElement;
% busElements(11).Name = "NOTZEROING";
% busElements(11).Dimensions = 1;
% 
% busElements(12) = Simulink.BusElement;
% busElements(12).Name = "ZEROING";
% busElements(12).Dimensions = 1;

% for i=1:numel(busElements)
%     busElements(i).SampleTime = [0,1];
% end

constants = Simulink.Bus;
constants.Elements = busElements; 

clearvars busElements % Delete predefined bus elements

%% gains
% ankle
% busElements(1) = Simulink.BusElement;
% busElements(1).Name = "KP_a";
% busElements(1).Dimensions = 1;
% 
% busElements(2) = Simulink.BusElement;
% busElements(2).Name = "KD_a";
% busElements(2).Dimensions = 1;
% 
% busElements(3) = Simulink.BusElement;
% busElements(3).Name = "KIL_a";
% busElements(3).Dimensions = 1;
% 
% busElements(4) = Simulink.BusElement;
% busElements(4).Name = "Delay_a";
% busElements(4).Dimensions = 1;
% 
% busElements(5) = Simulink.BusElement;
% busElements(5).Name = "Slack_a";
% busElements(5).Dimensions = 1;
% 
% busElements(6) = Simulink.BusElement;
% busElements(6).Name = "TorqLim_a";
% busElements(6).Dimensions = 1;
% 
% busElements(7) = Simulink.BusElement;
% busElements(7).Name = "Km_a";
% busElements(7).Dimensions = 1;
% 
% % Knee extension 
% busElements(8) = Simulink.BusElement;
% busElements(8).Name = "KP_ext";
% busElements(8).Dimensions = 1;
% 
% busElements(9) = Simulink.BusElement;
% busElements(9).Name = "KD_ext";
% busElements(9).Dimensions = 1;
% 
% busElements(10) = Simulink.BusElement;
% busElements(10).Name = "KIL_ext";
% busElements(10).Dimensions = 1;
% 
% busElements(11) = Simulink.BusElement;
% busElements(11).Name = "Delay_ext";
% busElements(11).Dimensions = 1;
% 
% busElements(12) = Simulink.BusElement;
% busElements(12).Name = "Slack_ext";
% busElements(12).Dimensions = 1;
% 
% % constants
% busElements(13) = Simulink.BusElement;
% busElements(13).Name = "TorqLim_ext";
% busElements(13).Dimensions = 1;
% 
% busElements(14) = Simulink.BusElement;
% busElements(14).Name = "Km_ext";
% busElements(14).Dimensions = 1;
% 
% busElements(15) = Simulink.BusElement;
% busElements(15).Name = "returnSpring_ext";
% busElements(15).Dimensions = 1;
% 
% % Knee flexion
% busElements(16) = Simulink.BusElement;
% busElements(16).Name = "KP_flx";
% busElements(16).Dimensions = 1;
% 
% busElements(17) = Simulink.BusElement;
% busElements(17).Name = "KD_flx";
% busElements(17).Dimensions = 1;
% 
% busElements(18) = Simulink.BusElement;
% busElements(18).Name = "KIL_flx";
% busElements(18).Dimensions = 1;
% 
% busElements(19) = Simulink.BusElement;
% busElements(19).Name = "Delay_flx";
% busElements(19).Dimensions = 1;
% 
% busElements(20) = Simulink.BusElement;
% busElements(20).Name = "Slack_flx";
% busElements(20).Dimensions = 1;
% 
% busElements(21) = Simulink.BusElement;
% busElements(21).Name = "TorqLim_flx";
% busElements(21).Dimensions = 1;
% 
% busElements(22) = Simulink.BusElement;
% busElements(22).Name = "Km_flx";
% busElements(22).Dimensions = 1;
% 
% busElements(23) = Simulink.BusElement;
% busElements(23).Name = "returnSpring_flx";
% busElements(23).Dimensions = 1;
% 
% busElements(24) = Simulink.BusElement;
% busElements(24).Name = "maxSlack";
% busElements(24).Dimensions = 3;
% 
% busElements(25) = Simulink.BusElement;
% busElements(25).Name = "KtS_ext";
% busElements(25).Dimensions = 1;
% 
% busElements(26) = Simulink.BusElement;
% busElements(26).Name = "KtS_flx";
% busElements(26).Dimensions = 1;
% 
% busElements(27) = Simulink.BusElement;
% busElements(27).Name = "KIL_decay";
% busElements(27).Dimensions = 1;

% for i=1:numel(busElements)
%     busElements(i).SampleTime = [0,1];
% end

gains = Simulink.Bus;
gains.Elements = busElements; 

clearvars busElements % Delete predefined bus elements

%% treadmillButtons
busElements(1) = Simulink.BusElement;
busElements(1).Name = "BTmeasureWeight";
busElements(1).Dimensions = 1;

busElements(2) = Simulink.BusElement;
busElements(2).Name = "BTzeroLeft";
busElements(2).Dimensions = 1;

busElements(3) = Simulink.BusElement;
busElements(3).Name = "BTzeroRight";
busElements(3).Dimensions = 1;

% for i=1:numel(busElements)
%     busElements(i).SampleTime = [0,1];
% end

treadmillButtons = Simulink.Bus;
treadmillButtons.Elements = busElements; 

clearvars busElements % Delete predefined bus elements

%% walkmodebuttons
busElements(1) = Simulink.BusElement;
busElements(1).Name = "BTRun";
busElements(1).Dimensions = 1;

busElements(2) = Simulink.BusElement;
busElements(2).Name = "BTLock";
busElements(2).Dimensions = 1;

% busElements(3) = Simulink.BusElement;
% busElements(3).Name = "BTwalkAnk";
% busElements(3).Dimensions = 1;
% 
% busElements(4) = Simulink.BusElement;
% busElements(4).Name = "BTzeroTorqueAnk";
% busElements(4).Dimensions = 1;
% 
% busElements(5) = Simulink.BusElement;
% busElements(5).Name = "BTTorqueAnk";
% busElements(5).Dimensions = 1;
% 
% busElements(6) = Simulink.BusElement;
% busElements(6).Name = "BTresetAnkTau";
% busElements(6).Dimensions = 1;
% 
% busElements(7) = Simulink.BusElement;
% busElements(7).Name = "BTresetAnkAngle";
% busElements(7).Dimensions = 1;
% 
% busElements(8) = Simulink.BusElement;
% busElements(8).Name = "BTresetMotorAnkAngle";
% busElements(8).Dimensions = 1;
% 
% busElements(9) = Simulink.BusElement;
% busElements(9).Name = "BTzeroFSR";
% busElements(9).Dimensions = 1;
% 
% busElements(10) = Simulink.BusElement;
% busElements(10).Name = "BTresetLearnAnk";
% busElements(10).Dimensions = 1;
% 
% busElements(11) = Simulink.BusElement;
% busElements(11).Name = "BTresetTime";
% busElements(11).Dimensions = 1;
% 
% busElements(12) = Simulink.BusElement;
% busElements(12).Name = "BTconstForceAnk";
% busElements(12).Dimensions = 1;
% 
% busElements(13) = Simulink.BusElement;
% busElements(13).Name = "BTconstPosAnk";
% busElements(13).Dimensions = 1;

% for i=1:numel(busElements)
%     busElements(i).SampleTime = [0,1];
% end

WalkModeButtons = Simulink.Bus;
WalkModeButtons.Elements = busElements; 

clearvars busElements % Delete predefined bus elements

%% kneeButtons
% busElements(1) = Simulink.BusElement;
% busElements(1).Name = "BTrestKnee";
% busElements(1).Dimensions = 1;
% 
% busElements(2) = Simulink.BusElement;
% busElements(2).Name = "BTsetzeroKnee";
% busElements(2).Dimensions = 1;
% 
% busElements(3) = Simulink.BusElement;
% busElements(3).Name = "BTwalkKnee";
% busElements(3).Dimensions = 1;
% 
% busElements(4) = Simulink.BusElement;
% busElements(4).Name = "BTzeroTorqueExt";
% busElements(4).Dimensions = 1;
% 
% busElements(5) = Simulink.BusElement;
% busElements(5).Name = "BTzeroTorqueFlx";
% busElements(5).Dimensions = 1;
% 
% busElements(6) = Simulink.BusElement;
% busElements(6).Name = "BTTorqueExt";
% busElements(6).Dimensions = 1;
% 
% busElements(7) = Simulink.BusElement;
% busElements(7).Name = "BTTorqueFlx";
% busElements(7).Dimensions = 1;
% 
% busElements(8) = Simulink.BusElement;
% busElements(8).Name = "BTresetExtF";
% busElements(8).Dimensions = 1;
% 
% busElements(9) = Simulink.BusElement;
% busElements(9).Name = "BTresetFlxF";
% busElements(9).Dimensions = 1;
% 
% busElements(10) = Simulink.BusElement;
% busElements(10).Name = "BTresetKneeAngle";
% busElements(10).Dimensions = 1;
% 
% busElements(11) = Simulink.BusElement;
% busElements(11).Name = "BTresetMotorKneeAngle";
% busElements(11).Dimensions = 1;
% 
% busElements(12) = Simulink.BusElement;
% busElements(12).Name = "BTresetLearnExt";
% busElements(12).Dimensions = 1;
% 
% busElements(13) = Simulink.BusElement;
% busElements(13).Name = "BTresetLearnFlx";
% busElements(13).Dimensions = 1;
% 
% busElements(14) = Simulink.BusElement;
% busElements(14).Name = "BTconstForceKnee";
% busElements(14).Dimensions = 1;
% 
% busElements(15) = Simulink.BusElement;
% busElements(15).Name = "BTconstPosKnee";
% busElements(15).Dimensions = 1;
% 
% busElements(16) = Simulink.BusElement;
% busElements(16).Name = "BTmeasurePosKnee";
% busElements(16).Dimensions = 1;
% 
% % for i=1:numel(busElements)
% %     busElements(i).SampleTime = [0,1];
% % end
% 
% kneeButtons = Simulink.Bus;
% kneeButtons.Elements = busElements; 
% 
% clearvars busElements % Delete predefined bus elements

%% buttons
% Merge busses treadmillButtons, ankleButtons and kneeButtons into 1 bus
% called 'buttons' with labels 'treadmill', 'ankle' and 'knee'.
busElements(1) = Simulink.BusElement;
busElements(1).Name = "treadmill";
busElements(1).DataType = "Bus: treadmillButtons";

busElements(2) = Simulink.BusElement;
busElements(2).Name = "WalkMode";
busElements(2).DataType = "Bus: WalkModeButton";

% busElements(3) = Simulink.BusElement;
% busElements(3).Name = "knee";
% busElements(3).DataType = "Bus: kneeButtons";

buttons = Simulink.Bus;
buttons.Elements = busElements; 

clearvars busElements % Delete predefined bus elements

%% State
busElements(1) = Simulink.BusElement;
busElements(1).Name = "strideStateR";
busElements(1).Dimensions = 1;

busElements(2) = Simulink.BusElement;
busElements(2).Name = "tStride";
busElements(2).Dimensions = 1;

busElements(3) = Simulink.BusElement;
busElements(3).Name = "tStride_avg";
busElements(3).Dimensions = 1;

busElements(4) = Simulink.BusElement;
busElements(4).Name = "tStance_avg";
busElements(4).Dimensions = 1;

busElements(5) = Simulink.BusElement;
busElements(5).Name = "pctStride";
busElements(5).Dimensions = 1;

busElements(6) = Simulink.BusElement;
busElements(6).Name = "pctStance";
busElements(6).Dimensions = 1;

% for i=1:numel(busElements)
%     busElements(i).SampleTime = [0,1];
% end

state = Simulink.Bus;
state.Elements = busElements; 

clearvars busElements % Delete predefined bus elements

%% io
% busElements(1) = Simulink.BusElement;
% busElements(1).Name = "jointAngle";
% busElements(1).Dimensions = 2;
% busElements(1).SampleTime = [0,1];
% 
% busElements(2) = Simulink.BusElement;
% busElements(2).Name = "jointVelocity";
% busElements(2).Dimensions = 2;
% busElements(2).SampleTime = [0,1];

busElements(3) = Simulink.BusElement;
busElements(3).Name = "GRF";
busElements(3).Dimensions = 12;
busElements(3).SampleTime = [0,1];

% busElements(4) = Simulink.BusElement;
% busElements(4).Name = "motorPositions";
% busElements(4).Dimensions = 3;
% busElements(4).SampleTime = [0,1];
% 
% busElements(5) = Simulink.BusElement;
% busElements(5).Name = "jointTorque";
% busElements(5).Dimensions = 3;
% busElements(5).SampleTime = [0,1];
% 
% busElements(6) = Simulink.BusElement;
% busElements(6).Name = "cableForce";
% busElements(6).Dimensions = 3;
% busElements(6).SampleTime = [0,1];

busElements(7) = Simulink.BusElement;
busElements(7).Name = "state";
busElements(7).DataType = "Bus: state";

% busElements(8) = Simulink.BusElement;
% busElements(8).Name = "prepMode";
% busElements(8).Dimensions = 3; % RMdebug - change 1 to 3
% busElements(8).SampleTime = [0,1];

busElements(9) = Simulink.BusElement;
busElements(9).Name = "walkMode";
busElements(9).Dimensions = 3; % RMdebug - change 1 to 3
busElements(9).SampleTime = [0,1];

busElements(10) = Simulink.BusElement;
busElements(10).Name = "buttons";
busElements(10).DataType = "Bus: buttons";

% busElements(11) = Simulink.BusElement;
% busElements(11).Name = "gains";
% busElements(11).DataType = "Bus: gains";

busElements(12) = Simulink.BusElement;
busElements(12).Name = "constants";
busElements(12).DataType = "Bus: constants";

% busElements(13) = Simulink.BusElement;
% busElements(13).Name = "shankLength";
% busElements(13).Dimensions = 1;
% busElements(13).SampleTime = [0,1];

% busElements(14) = Simulink.BusElement;
% busElements(14).Name = "ankleParams";
% busElements(14).DataType = "Bus: ankleParams";
% 
% busElements(15) = Simulink.BusElement;
% busElements(15).Name = "kneeParams";
% busElements(15).DataType = "Bus: kneeParams";

io = Simulink.Bus;
io.Elements = busElements; 

clearvars busElements % Delete predefined bus elements

%% Outputbus: controllerToSRP
% busElements(1) = Simulink.BusElement;
% busElements(1).Name = "desiredTorque";
% busElements(1).Dimensions = 1;

busElements(2) = Simulink.BusElement;
busElements(2).Name = "desiredSpeed";
busElements(2).Dimensions = 1;

busElements(3) = Simulink.BusElement;
busElements(3).Name = "walkMode_out";
busElements(3).Dimensions = 3;

% busElements(4) = Simulink.BusElement;
% busElements(4).Name = "walkMode";
% busElements(4).Dimensions = 3;

% busElements(5) = Simulink.BusElement;
% busElements(5).Name = "motorCommand";
% busElements(5).Dimensions = 3;

controllerToSRP = Simulink.Bus;
controllerToSRP.Elements = busElements; 

clearvars busElements % Delete predefined bus elements