function bio=speed_controller_copybio
bio = [];
bio(1).blkName='controller1/p1';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&speed_controller_copy_B.desiredSpeed';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='controller1/p2';
bio(2).sigName='';
bio(2).portIdx=1;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&speed_controller_copy_B.walkMode_out';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='controller1/p3';
bio(3).sigName='';
bio(3).portIdx=2;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&speed_controller_copy_B.print';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='Constant1';
bio(4).sigName='';
bio(4).portIdx=0;
bio(4).dim=[1,1];
bio(4).sigWidth=1;
bio(4).sigAddress='&speed_controller_copy_B.Constant1';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='Saturation1';
bio(5).sigName='';
bio(5).portIdx=0;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&speed_controller_copy_B.Saturation1';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='Sensor Read and Process/Control modes';
bio(6).sigName='';
bio(6).portIdx=0;
bio(6).dim=[2,1];
bio(6).sigWidth=2;
bio(6).sigAddress='&speed_controller_copy_B.walkMode[0]';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='Sensor Read and Process/State Determination/p1';
bio(7).sigName='';
bio(7).portIdx=0;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&speed_controller_copy_B.strideStateR_out';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

bio(8).blkName='Sensor Read and Process/State Determination/p2';
bio(8).sigName='tStride';
bio(8).portIdx=1;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&speed_controller_copy_B.tStride_out';
bio(8).ndims=2;
bio(8).size=[];
bio(8).isStruct=false;

bio(9).blkName='Sensor Read and Process/State Determination/p3';
bio(9).sigName='';
bio(9).portIdx=2;
bio(9).dim=[1,1];
bio(9).sigWidth=1;
bio(9).sigAddress='&speed_controller_copy_B.tStride_avg_out';
bio(9).ndims=2;
bio(9).size=[];
bio(9).isStruct=false;

bio(10).blkName='Sensor Read and Process/State Determination/p4';
bio(10).sigName='';
bio(10).portIdx=3;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&speed_controller_copy_B.tStance_avg_out';
bio(10).ndims=2;
bio(10).size=[];
bio(10).isStruct=false;

bio(11).blkName='Sensor Read and Process/State Determination/p5';
bio(11).sigName='';
bio(11).portIdx=4;
bio(11).dim=[1,1];
bio(11).sigWidth=1;
bio(11).sigAddress='&speed_controller_copy_B.pctStride_out';
bio(11).ndims=2;
bio(11).size=[];
bio(11).isStruct=false;

bio(12).blkName='Sensor Read and Process/State Determination/p6';
bio(12).sigName='';
bio(12).portIdx=5;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&speed_controller_copy_B.pctStance_out';
bio(12).ndims=2;
bio(12).size=[];
bio(12).isStruct=false;

bio(13).blkName='Sensor Read and Process/State Determination/p7';
bio(13).sigName='';
bio(13).portIdx=6;
bio(13).dim=[1,1];
bio(13).sigWidth=1;
bio(13).sigAddress='&speed_controller_copy_B.tStance_out_k';
bio(13).ndims=2;
bio(13).size=[];
bio(13).isStruct=false;

bio(14).blkName='Sensor Read and Process/measureSubjWeight';
bio(14).sigName='';
bio(14).portIdx=0;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&speed_controller_copy_B.weight_out';
bio(14).ndims=2;
bio(14).size=[];
bio(14).isStruct=false;

bio(15).blkName='Sensor Read and Process/Gain10';
bio(15).sigName='tStance_out';
bio(15).portIdx=0;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&speed_controller_copy_B.tStance_out';
bio(15).ndims=2;
bio(15).size=[];
bio(15).isStruct=false;

bio(16).blkName='Sensor Read and Process/Gain3';
bio(16).sigName='strideStateR';
bio(16).portIdx=0;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&speed_controller_copy_B.strideStateR';
bio(16).ndims=2;
bio(16).size=[];
bio(16).isStruct=false;

bio(17).blkName='Sensor Read and Process/Gain4';
bio(17).sigName='tStride_avg';
bio(17).portIdx=0;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&speed_controller_copy_B.tStride_avg';
bio(17).ndims=2;
bio(17).size=[];
bio(17).isStruct=false;

bio(18).blkName='Sensor Read and Process/Analog input3';
bio(18).sigName='';
bio(18).portIdx=0;
bio(18).dim=[20,1];
bio(18).sigWidth=20;
bio(18).sigAddress='&speed_controller_copy_B.Analoginput3[0]';
bio(18).ndims=2;
bio(18).size=[];
bio(18).isStruct=false;

bio(19).blkName='Sensor Read and Process/3rd Order, 25 Hz  Butterworth Filter1';
bio(19).sigName='GRF\\nvoltage';
bio(19).portIdx=0;
bio(19).dim=[12,1];
bio(19).sigWidth=12;
bio(19).sigAddress='&speed_controller_copy_B.GRFvoltage[0]';
bio(19).ndims=2;
bio(19).size=[];
bio(19).isStruct=false;

bio(20).blkName='Sensor Read and Process/Unit Delay1';
bio(20).sigName='';
bio(20).portIdx=0;
bio(20).dim=[2,1];
bio(20).sigWidth=2;
bio(20).sigAddress='&speed_controller_copy_B.UnitDelay1[0]';
bio(20).ndims=2;
bio(20).size=[];
bio(20).isStruct=false;

bio(21).blkName='Sensor Read and Process/GUI/UseIterativeLearning';
bio(21).sigName='';
bio(21).portIdx=0;
bio(21).dim=[1,1];
bio(21).sigWidth=1;
bio(21).sigAddress='&speed_controller_copy_B.UseIterativeLearning';
bio(21).ndims=2;
bio(21).size=[];
bio(21).isStruct=false;

bio(22).blkName='Sensor Read and Process/GUI/num_strike';
bio(22).sigName='num_strike';
bio(22).portIdx=0;
bio(22).dim=[1,1];
bio(22).sigWidth=1;
bio(22).sigAddress='&speed_controller_copy_B.num_strike';
bio(22).ndims=2;
bio(22).size=[];
bio(22).isStruct=false;

bio(23).blkName='Sensor Read and Process/GUI/num_swing';
bio(23).sigName='num_swing';
bio(23).portIdx=0;
bio(23).dim=[1,1];
bio(23).sigWidth=1;
bio(23).sigAddress='&speed_controller_copy_B.num_swing';
bio(23).ndims=2;
bio(23).size=[];
bio(23).isStruct=false;

bio(24).blkName='Sensor Read and Process/GUI/thresh_mid';
bio(24).sigName='thresh_mid';
bio(24).portIdx=0;
bio(24).dim=[1,1];
bio(24).sigWidth=1;
bio(24).sigAddress='&speed_controller_copy_B.thresh_mid';
bio(24).ndims=2;
bio(24).size=[];
bio(24).isStruct=false;

bio(25).blkName='Sensor Read and Process/GUI/thresh_swing';
bio(25).sigName='thresh_swing';
bio(25).portIdx=0;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&speed_controller_copy_B.thresh_swing';
bio(25).ndims=2;
bio(25).size=[];
bio(25).isStruct=false;

bio(26).blkName='Sensor Read and Process/GUI/to_pct';
bio(26).sigName='to_pct';
bio(26).portIdx=0;
bio(26).dim=[1,1];
bio(26).sigWidth=1;
bio(26).sigAddress='&speed_controller_copy_B.to_pct';
bio(26).ndims=2;
bio(26).size=[];
bio(26).isStruct=false;

bio(27).blkName='Sensor Read and Process/GUI/tstance_avg_init';
bio(27).sigName='tstance_avg_init';
bio(27).portIdx=0;
bio(27).dim=[1,1];
bio(27).sigWidth=1;
bio(27).sigAddress='&speed_controller_copy_B.tstance_avg_init';
bio(27).ndims=2;
bio(27).size=[];
bio(27).isStruct=false;

bio(28).blkName='Sensor Read and Process/GUI/tstance_pct';
bio(28).sigName='tstance_pct';
bio(28).portIdx=0;
bio(28).dim=[1,1];
bio(28).sigWidth=1;
bio(28).sigAddress='&speed_controller_copy_B.tstance_pct';
bio(28).ndims=2;
bio(28).size=[];
bio(28).isStruct=false;

bio(29).blkName='Sensor Read and Process/GUI/tstride_avg_init';
bio(29).sigName='tstride_avg_init';
bio(29).portIdx=0;
bio(29).dim=[1,1];
bio(29).sigWidth=1;
bio(29).sigAddress='&speed_controller_copy_B.tstride_avg_init';
bio(29).ndims=2;
bio(29).size=[];
bio(29).isStruct=false;

bio(30).blkName='Sensor Read and Process/GUI/tswing_min';
bio(30).sigName='tswing_min';
bio(30).portIdx=0;
bio(30).dim=[1,1];
bio(30).sigWidth=1;
bio(30).sigAddress='&speed_controller_copy_B.tswing_min';
bio(30).ndims=2;
bio(30).size=[];
bio(30).isStruct=false;

bio(31).blkName='Sensor Read and Process/GUI/LOCK';
bio(31).sigName='LOCK';
bio(31).portIdx=0;
bio(31).dim=[1,1];
bio(31).sigWidth=1;
bio(31).sigAddress='&speed_controller_copy_B.LOCK';
bio(31).ndims=2;
bio(31).size=[];
bio(31).isStruct=false;

bio(32).blkName='Sensor Read and Process/GUI/REST';
bio(32).sigName='REST';
bio(32).portIdx=0;
bio(32).dim=[1,1];
bio(32).sigWidth=1;
bio(32).sigAddress='&speed_controller_copy_B.REST';
bio(32).ndims=2;
bio(32).size=[];
bio(32).isStruct=false;

bio(33).blkName='Sensor Read and Process/GUI/RUN';
bio(33).sigName='RUN';
bio(33).portIdx=0;
bio(33).dim=[1,1];
bio(33).sigWidth=1;
bio(33).sigAddress='&speed_controller_copy_B.RUN';
bio(33).ndims=2;
bio(33).size=[];
bio(33).isStruct=false;

bio(34).blkName='Sensor Read and Process/GUI/SETZERO';
bio(34).sigName='SETZERO';
bio(34).portIdx=0;
bio(34).dim=[1,1];
bio(34).sigWidth=1;
bio(34).sigAddress='&speed_controller_copy_B.SETZERO';
bio(34).ndims=2;
bio(34).size=[];
bio(34).isStruct=false;

bio(35).blkName='Sensor Read and Process/GUI/STANCE';
bio(35).sigName='STANCE';
bio(35).portIdx=0;
bio(35).dim=[1,1];
bio(35).sigWidth=1;
bio(35).sigAddress='&speed_controller_copy_B.STANCE';
bio(35).ndims=2;
bio(35).size=[];
bio(35).isStruct=false;

bio(36).blkName='Sensor Read and Process/GUI/SWING';
bio(36).sigName='SWING';
bio(36).portIdx=0;
bio(36).dim=[1,1];
bio(36).sigWidth=1;
bio(36).sigAddress='&speed_controller_copy_B.SWING';
bio(36).ndims=2;
bio(36).size=[];
bio(36).isStruct=false;

bio(37).blkName='Sensor Read and Process/GUI/degtorad';
bio(37).sigName='pflex';
bio(37).portIdx=0;
bio(37).dim=[1,1];
bio(37).sigWidth=1;
bio(37).sigAddress='&speed_controller_copy_B.pflex';
bio(37).ndims=2;
bio(37).size=[];
bio(37).isStruct=false;

bio(38).blkName='Sensor Read and Process/GUI/MinMax1';
bio(38).sigName='';
bio(38).portIdx=0;
bio(38).dim=[1,1];
bio(38).sigWidth=1;
bio(38).sigAddress='&speed_controller_copy_B.MinMax1';
bio(38).ndims=2;
bio(38).size=[];
bio(38).isStruct=false;

bio(39).blkName='Sensor Read and Process/Scopes/Gain3';
bio(39).sigName='strideStateRight';
bio(39).portIdx=0;
bio(39).dim=[1,1];
bio(39).sigWidth=1;
bio(39).sigAddress='&speed_controller_copy_B.strideStateRight';
bio(39).ndims=2;
bio(39).size=[];
bio(39).isStruct=false;

bio(40).blkName='Sensor Read and Process/Scopes/Gain6';
bio(40).sigName='vGRF Left [N]';
bio(40).portIdx=0;
bio(40).dim=[1,1];
bio(40).sigWidth=1;
bio(40).sigAddress='&speed_controller_copy_B.vGRFLeftN';
bio(40).ndims=2;
bio(40).size=[];
bio(40).isStruct=false;

bio(41).blkName='Sensor Read and Process/Scopes/Gain7';
bio(41).sigName='vGRF Right [N]';
bio(41).portIdx=0;
bio(41).dim=[1,1];
bio(41).sigWidth=1;
bio(41).sigAddress='&speed_controller_copy_B.vGRFRightN';
bio(41).ndims=2;
bio(41).size=[];
bio(41).isStruct=false;

bio(42).blkName='Sensor Read and Process/Scopes/Sum';
bio(42).sigName='';
bio(42).portIdx=0;
bio(42).dim=[1,1];
bio(42).sigWidth=1;
bio(42).sigAddress='&speed_controller_copy_B.Sum';
bio(42).ndims=2;
bio(42).size=[];
bio(42).isStruct=false;

bio(43).blkName='Sensor Read and Process/Zero Level Treadmill/Zero Level Force Plates';
bio(43).sigName='GRFzero';
bio(43).portIdx=0;
bio(43).dim=[12,1];
bio(43).sigWidth=12;
bio(43).sigAddress='&speed_controller_copy_B.GRF_zero[0]';
bio(43).ndims=2;
bio(43).size=[];
bio(43).isStruct=false;

bio(44).blkName='Sensor Read and Process/Zero Level Treadmill/calibration';
bio(44).sigName='';
bio(44).portIdx=0;
bio(44).dim=[12,1];
bio(44).sigWidth=12;
bio(44).sigAddress='&speed_controller_copy_B.calibration[0]';
bio(44).ndims=2;
bio(44).size=[];
bio(44).isStruct=false;

function len = getlenBIO
len = 44;

