function xcp = speed_controllerDec10xcp

xcp.events     =  repmat(struct('id',{}, 'sampletime', {}, 'offset', {}), getNumEvents, 1 );
xcp.parameters =  repmat(struct('symbol',{}, 'size', {}, 'dtname', {}, 'baseaddr', {}), getNumParameters, 1 );
xcp.signals    =  repmat(struct('symbol',{}), getNumSignals, 1 );
xcp.models     =  cell(1,getNumModels);
    
xcp.models{1} = 'speed_controllerDec10';
   
   
         
xcp.events(1).id         = 0;
xcp.events(1).sampletime = 0.001;
xcp.events(1).offset     = 0.0;
    
xcp.signals(1).symbol =  'speed_controllerDec10_B.desiredSpeed';
    
xcp.signals(2).symbol =  'speed_controllerDec10_B.walkMode_out';
    
xcp.signals(3).symbol =  'speed_controllerDec10_B.print';
    
xcp.signals(4).symbol =  'speed_controllerDec10_B.Constant1';
    
xcp.signals(5).symbol =  'speed_controllerDec10_B.Saturation1';
    
xcp.signals(6).symbol =  'speed_controllerDec10_B.walkMode';
    
xcp.signals(7).symbol =  'speed_controllerDec10_B.strideStateR_out';
    
xcp.signals(8).symbol =  'speed_controllerDec10_B.tStride_out';
    
xcp.signals(9).symbol =  'speed_controllerDec10_B.tStride_avg_out';
    
xcp.signals(10).symbol =  'speed_controllerDec10_B.tStance_avg_out';
    
xcp.signals(11).symbol =  'speed_controllerDec10_B.tSwing_avg_out';
    
xcp.signals(12).symbol =  'speed_controllerDec10_B.pctStride_out';
    
xcp.signals(13).symbol =  'speed_controllerDec10_B.pctStance_out';
    
xcp.signals(14).symbol =  'speed_controllerDec10_B.pctSwing_out';
    
xcp.signals(15).symbol =  'speed_controllerDec10_B.tStance_out_p';
    
xcp.signals(16).symbol =  'speed_controllerDec10_B.weight_out';
    
xcp.signals(17).symbol =  'speed_controllerDec10_B.tStance_out';
    
xcp.signals(18).symbol =  'speed_controllerDec10_B.strideStateR';
    
xcp.signals(19).symbol =  'speed_controllerDec10_B.tStride_avg';
    
xcp.signals(20).symbol =  'speed_controllerDec10_B.Analoginput3';
    
xcp.signals(21).symbol =  'speed_controllerDec10_B.GRFvoltage';
    
xcp.signals(22).symbol =  'speed_controllerDec10_B.UnitDelay1';
    
xcp.signals(23).symbol =  'speed_controllerDec10_B.UseIterativeLearning';
    
xcp.signals(24).symbol =  'speed_controllerDec10_B.num_strike';
    
xcp.signals(25).symbol =  'speed_controllerDec10_B.num_swing';
    
xcp.signals(26).symbol =  'speed_controllerDec10_B.thresh_mid';
    
xcp.signals(27).symbol =  'speed_controllerDec10_B.thresh_swing';
    
xcp.signals(28).symbol =  'speed_controllerDec10_B.to_pct';
    
xcp.signals(29).symbol =  'speed_controllerDec10_B.tstance_avg_init';
    
xcp.signals(30).symbol =  'speed_controllerDec10_B.tstance_pct';
    
xcp.signals(31).symbol =  'speed_controllerDec10_B.tstride_avg_init';
    
xcp.signals(32).symbol =  'speed_controllerDec10_B.tswing_min';
    
xcp.signals(33).symbol =  'speed_controllerDec10_B.LOCK';
    
xcp.signals(34).symbol =  'speed_controllerDec10_B.REST';
    
xcp.signals(35).symbol =  'speed_controllerDec10_B.RUN';
    
xcp.signals(36).symbol =  'speed_controllerDec10_B.SETZERO';
    
xcp.signals(37).symbol =  'speed_controllerDec10_B.STANCE';
    
xcp.signals(38).symbol =  'speed_controllerDec10_B.SWING';
    
xcp.signals(39).symbol =  'speed_controllerDec10_B.pflex';
    
xcp.signals(40).symbol =  'speed_controllerDec10_B.MinMax1';
    
xcp.signals(41).symbol =  'speed_controllerDec10_B.strideStateRight';
    
xcp.signals(42).symbol =  'speed_controllerDec10_B.vGRFLeftN';
    
xcp.signals(43).symbol =  'speed_controllerDec10_B.vGRFRightN';
    
xcp.signals(44).symbol =  'speed_controllerDec10_B.Sum1';
    
xcp.signals(45).symbol =  'speed_controllerDec10_B.GRF_zero';
    
xcp.signals(46).symbol =  'speed_controllerDec10_B.calibration';
         
xcp.parameters(1).symbol = 'speed_controllerDec10_P.Constant1_Value';
xcp.parameters(1).size   =  1;       
xcp.parameters(1).dtname = 'real_T'; 
xcp.parameters(2).baseaddr = '&speed_controllerDec10_P.Constant1_Value';     
         
xcp.parameters(2).symbol = 'speed_controllerDec10_P.Saturation1_UpperSat';
xcp.parameters(2).size   =  1;       
xcp.parameters(2).dtname = 'real_T'; 
xcp.parameters(3).baseaddr = '&speed_controllerDec10_P.Saturation1_UpperSat';     
         
xcp.parameters(3).symbol = 'speed_controllerDec10_P.Saturation1_LowerSat';
xcp.parameters(3).size   =  1;       
xcp.parameters(3).dtname = 'real_T'; 
xcp.parameters(4).baseaddr = '&speed_controllerDec10_P.Saturation1_LowerSat';     
         
xcp.parameters(4).symbol = 'speed_controllerDec10_P.Analogoutput1_P1';
xcp.parameters(4).size   =  4;       
xcp.parameters(4).dtname = 'real_T'; 
xcp.parameters(5).baseaddr = '&speed_controllerDec10_P.Analogoutput1_P1[0]';     
         
xcp.parameters(5).symbol = 'speed_controllerDec10_P.Analogoutput1_P2';
xcp.parameters(5).size   =  4;       
xcp.parameters(5).dtname = 'real_T'; 
xcp.parameters(6).baseaddr = '&speed_controllerDec10_P.Analogoutput1_P2[0]';     
         
xcp.parameters(6).symbol = 'speed_controllerDec10_P.Analogoutput1_P3';
xcp.parameters(6).size   =  4;       
xcp.parameters(6).dtname = 'real_T'; 
xcp.parameters(7).baseaddr = '&speed_controllerDec10_P.Analogoutput1_P3[0]';     
         
xcp.parameters(7).symbol = 'speed_controllerDec10_P.Analogoutput1_P4';
xcp.parameters(7).size   =  1;       
xcp.parameters(7).dtname = 'real_T'; 
xcp.parameters(8).baseaddr = '&speed_controllerDec10_P.Analogoutput1_P4';     
         
xcp.parameters(8).symbol = 'speed_controllerDec10_P.Analogoutput1_P5';
xcp.parameters(8).size   =  1;       
xcp.parameters(8).dtname = 'real_T'; 
xcp.parameters(9).baseaddr = '&speed_controllerDec10_P.Analogoutput1_P5';     
         
xcp.parameters(9).symbol = 'speed_controllerDec10_P.subjMass_InitialValue';
xcp.parameters(9).size   =  1;       
xcp.parameters(9).dtname = 'real_T'; 
xcp.parameters(10).baseaddr = '&speed_controllerDec10_P.subjMass_InitialValue';     
         
xcp.parameters(10).symbol = 'speed_controllerDec10_P.GRF_Threshold_Down_Value';
xcp.parameters(10).size   =  1;       
xcp.parameters(10).dtname = 'real_T'; 
xcp.parameters(11).baseaddr = '&speed_controllerDec10_P.GRF_Threshold_Down_Value';     
         
xcp.parameters(11).symbol = 'speed_controllerDec10_P.GRF_Threshold_Up_Value';
xcp.parameters(11).size   =  1;       
xcp.parameters(11).dtname = 'real_T'; 
xcp.parameters(12).baseaddr = '&speed_controllerDec10_P.GRF_Threshold_Up_Value';     
         
xcp.parameters(12).symbol = 'speed_controllerDec10_P.Gain1_Gain_p';
xcp.parameters(12).size   =  1;       
xcp.parameters(12).dtname = 'real_T'; 
xcp.parameters(13).baseaddr = '&speed_controllerDec10_P.Gain1_Gain_p';     
         
xcp.parameters(13).symbol = 'speed_controllerDec10_P.Gain10_Gain';
xcp.parameters(13).size   =  1;       
xcp.parameters(13).dtname = 'real_T'; 
xcp.parameters(14).baseaddr = '&speed_controllerDec10_P.Gain10_Gain';     
         
xcp.parameters(14).symbol = 'speed_controllerDec10_P.Gain2_Gain_c';
xcp.parameters(14).size   =  1;       
xcp.parameters(14).dtname = 'real_T'; 
xcp.parameters(15).baseaddr = '&speed_controllerDec10_P.Gain2_Gain_c';     
         
xcp.parameters(15).symbol = 'speed_controllerDec10_P.Gain3_Gain';
xcp.parameters(15).size   =  1;       
xcp.parameters(15).dtname = 'real_T'; 
xcp.parameters(16).baseaddr = '&speed_controllerDec10_P.Gain3_Gain';     
         
xcp.parameters(16).symbol = 'speed_controllerDec10_P.Gain4_Gain';
xcp.parameters(16).size   =  1;       
xcp.parameters(16).dtname = 'real_T'; 
xcp.parameters(17).baseaddr = '&speed_controllerDec10_P.Gain4_Gain';     
         
xcp.parameters(17).symbol = 'speed_controllerDec10_P.Gain5_Gain_e';
xcp.parameters(17).size   =  1;       
xcp.parameters(17).dtname = 'real_T'; 
xcp.parameters(18).baseaddr = '&speed_controllerDec10_P.Gain5_Gain_e';     
         
xcp.parameters(18).symbol = 'speed_controllerDec10_P.Gain8_Gain';
xcp.parameters(18).size   =  1;       
xcp.parameters(18).dtname = 'real_T'; 
xcp.parameters(19).baseaddr = '&speed_controllerDec10_P.Gain8_Gain';     
         
xcp.parameters(19).symbol = 'speed_controllerDec10_P.Gain9_Gain';
xcp.parameters(19).size   =  1;       
xcp.parameters(19).dtname = 'real_T'; 
xcp.parameters(20).baseaddr = '&speed_controllerDec10_P.Gain9_Gain';     
         
xcp.parameters(20).symbol = 'speed_controllerDec10_P.Analoginput3_P1';
xcp.parameters(20).size   =  1;       
xcp.parameters(20).dtname = 'real_T'; 
xcp.parameters(21).baseaddr = '&speed_controllerDec10_P.Analoginput3_P1';     
         
xcp.parameters(21).symbol = 'speed_controllerDec10_P.Analoginput3_P2';
xcp.parameters(21).size   =  1;       
xcp.parameters(21).dtname = 'real_T'; 
xcp.parameters(22).baseaddr = '&speed_controllerDec10_P.Analoginput3_P2';     
         
xcp.parameters(22).symbol = 'speed_controllerDec10_P.Analoginput3_P3';
xcp.parameters(22).size   =  1;       
xcp.parameters(22).dtname = 'real_T'; 
xcp.parameters(23).baseaddr = '&speed_controllerDec10_P.Analoginput3_P3';     
         
xcp.parameters(23).symbol = 'speed_controllerDec10_P.Analoginput3_P4';
xcp.parameters(23).size   =  1;       
xcp.parameters(23).dtname = 'real_T'; 
xcp.parameters(24).baseaddr = '&speed_controllerDec10_P.Analoginput3_P4';     
         
xcp.parameters(24).symbol = 'speed_controllerDec10_P.Analoginput3_P5';
xcp.parameters(24).size   =  1;       
xcp.parameters(24).dtname = 'real_T'; 
xcp.parameters(25).baseaddr = '&speed_controllerDec10_P.Analoginput3_P5';     
         
xcp.parameters(25).symbol = 'speed_controllerDec10_P.Analoginput3_P6';
xcp.parameters(25).size   =  1;       
xcp.parameters(25).dtname = 'real_T'; 
xcp.parameters(26).baseaddr = '&speed_controllerDec10_P.Analoginput3_P6';     
         
xcp.parameters(26).symbol = 'speed_controllerDec10_P.Analoginput3_P7';
xcp.parameters(26).size   =  1;       
xcp.parameters(26).dtname = 'real_T'; 
xcp.parameters(27).baseaddr = '&speed_controllerDec10_P.Analoginput3_P7';     
         
xcp.parameters(27).symbol = 'speed_controllerDec10_P.Setup1_P1';
xcp.parameters(27).size   =  1;       
xcp.parameters(27).dtname = 'real_T'; 
xcp.parameters(28).baseaddr = '&speed_controllerDec10_P.Setup1_P1';     
         
xcp.parameters(28).symbol = 'speed_controllerDec10_P.Setup1_P2';
xcp.parameters(28).size   =  1;       
xcp.parameters(28).dtname = 'real_T'; 
xcp.parameters(29).baseaddr = '&speed_controllerDec10_P.Setup1_P2';     
         
xcp.parameters(29).symbol = 'speed_controllerDec10_P.Setup1_P3';
xcp.parameters(29).size   =  1;       
xcp.parameters(29).dtname = 'real_T'; 
xcp.parameters(30).baseaddr = '&speed_controllerDec10_P.Setup1_P3';     
         
xcp.parameters(30).symbol = 'speed_controllerDec10_P.Setup4_P1';
xcp.parameters(30).size   =  1;       
xcp.parameters(30).dtname = 'real_T'; 
xcp.parameters(31).baseaddr = '&speed_controllerDec10_P.Setup4_P1';     
         
xcp.parameters(31).symbol = 'speed_controllerDec10_P.Setup4_P2';
xcp.parameters(31).size   =  1;       
xcp.parameters(31).dtname = 'real_T'; 
xcp.parameters(32).baseaddr = '&speed_controllerDec10_P.Setup4_P2';     
         
xcp.parameters(32).symbol = 'speed_controllerDec10_P.Setup4_P3';
xcp.parameters(32).size   =  1;       
xcp.parameters(32).dtname = 'real_T'; 
xcp.parameters(33).baseaddr = '&speed_controllerDec10_P.Setup4_P3';     
         
xcp.parameters(33).symbol = 'speed_controllerDec10_P.Setup4_P4';
xcp.parameters(33).size   =  1;       
xcp.parameters(33).dtname = 'real_T'; 
xcp.parameters(34).baseaddr = '&speed_controllerDec10_P.Setup4_P4';     
         
xcp.parameters(34).symbol = 'speed_controllerDec10_P.Setup4_P5';
xcp.parameters(34).size   =  1;       
xcp.parameters(34).dtname = 'real_T'; 
xcp.parameters(35).baseaddr = '&speed_controllerDec10_P.Setup4_P5';     
         
xcp.parameters(35).symbol = 'speed_controllerDec10_P.Setup4_P6';
xcp.parameters(35).size   =  1;       
xcp.parameters(35).dtname = 'real_T'; 
xcp.parameters(36).baseaddr = '&speed_controllerDec10_P.Setup4_P6';     
         
xcp.parameters(36).symbol = 'speed_controllerDec10_P.Setup4_P7';
xcp.parameters(36).size   =  1;       
xcp.parameters(36).dtname = 'real_T'; 
xcp.parameters(37).baseaddr = '&speed_controllerDec10_P.Setup4_P7';     
         
xcp.parameters(37).symbol = 'speed_controllerDec10_P.urdOrder25HzButterworthFilter1_';
xcp.parameters(37).size   =  4;       
xcp.parameters(37).dtname = 'real_T'; 
xcp.parameters(38).baseaddr = '&speed_controllerDec10_P.urdOrder25HzButterworthFilter1_[0]';     
         
xcp.parameters(38).symbol = 'speed_controllerDec10_P.urdOrder25HzButterworthFilter_m';
xcp.parameters(38).size   =  4;       
xcp.parameters(38).dtname = 'real_T'; 
xcp.parameters(39).baseaddr = '&speed_controllerDec10_P.urdOrder25HzButterworthFilter_m[0]';     
         
xcp.parameters(39).symbol = 'speed_controllerDec10_P.urdOrder25HzButterworthFilter_f';
xcp.parameters(39).size   =  1;       
xcp.parameters(39).dtname = 'real_T'; 
xcp.parameters(40).baseaddr = '&speed_controllerDec10_P.urdOrder25HzButterworthFilter_f';     
         
xcp.parameters(40).symbol = 'speed_controllerDec10_P.UnitDelay1_InitialCondition';
xcp.parameters(40).size   =  2;       
xcp.parameters(40).dtname = 'real_T'; 
xcp.parameters(41).baseaddr = '&speed_controllerDec10_P.UnitDelay1_InitialCondition[0]';     
         
xcp.parameters(41).symbol = 'speed_controllerDec10_P.BTLock_Value';
xcp.parameters(41).size   =  1;       
xcp.parameters(41).dtname = 'real_T'; 
xcp.parameters(42).baseaddr = '&speed_controllerDec10_P.BTLock_Value';     
         
xcp.parameters(42).symbol = 'speed_controllerDec10_P.BTRun_Value';
xcp.parameters(42).size   =  1;       
xcp.parameters(42).dtname = 'real_T'; 
xcp.parameters(43).baseaddr = '&speed_controllerDec10_P.BTRun_Value';     
         
xcp.parameters(43).symbol = 'speed_controllerDec10_P.BTmeasureWeight_Value';
xcp.parameters(43).size   =  1;       
xcp.parameters(43).dtname = 'real_T'; 
xcp.parameters(44).baseaddr = '&speed_controllerDec10_P.BTmeasureWeight_Value';     
         
xcp.parameters(44).symbol = 'speed_controllerDec10_P.BTresetStateVariables_Value';
xcp.parameters(44).size   =  1;       
xcp.parameters(44).dtname = 'real_T'; 
xcp.parameters(45).baseaddr = '&speed_controllerDec10_P.BTresetStateVariables_Value';     
         
xcp.parameters(45).symbol = 'speed_controllerDec10_P.BTzeroLeft_Value';
xcp.parameters(45).size   =  1;       
xcp.parameters(45).dtname = 'real_T'; 
xcp.parameters(46).baseaddr = '&speed_controllerDec10_P.BTzeroLeft_Value';     
         
xcp.parameters(46).symbol = 'speed_controllerDec10_P.BTzeroRight_Value';
xcp.parameters(46).size   =  1;       
xcp.parameters(46).dtname = 'real_T'; 
xcp.parameters(47).baseaddr = '&speed_controllerDec10_P.BTzeroRight_Value';     
         
xcp.parameters(47).symbol = 'speed_controllerDec10_P.LOCK_Value';
xcp.parameters(47).size   =  1;       
xcp.parameters(47).dtname = 'real_T'; 
xcp.parameters(48).baseaddr = '&speed_controllerDec10_P.LOCK_Value';     
         
xcp.parameters(48).symbol = 'speed_controllerDec10_P.NODE1P_Value';
xcp.parameters(48).size   =  1;       
xcp.parameters(48).dtname = 'real_T'; 
xcp.parameters(49).baseaddr = '&speed_controllerDec10_P.NODE1P_Value';     
         
xcp.parameters(49).symbol = 'speed_controllerDec10_P.NODE1S_Value';
xcp.parameters(49).size   =  1;       
xcp.parameters(49).dtname = 'real_T'; 
xcp.parameters(50).baseaddr = '&speed_controllerDec10_P.NODE1S_Value';     
         
xcp.parameters(50).symbol = 'speed_controllerDec10_P.NODE2P_Value';
xcp.parameters(50).size   =  1;       
xcp.parameters(50).dtname = 'real_T'; 
xcp.parameters(51).baseaddr = '&speed_controllerDec10_P.NODE2P_Value';     
         
xcp.parameters(51).symbol = 'speed_controllerDec10_P.NODE2S_Value';
xcp.parameters(51).size   =  1;       
xcp.parameters(51).dtname = 'real_T'; 
xcp.parameters(52).baseaddr = '&speed_controllerDec10_P.NODE2S_Value';     
         
xcp.parameters(52).symbol = 'speed_controllerDec10_P.NODE3P_Value';
xcp.parameters(52).size   =  1;       
xcp.parameters(52).dtname = 'real_T'; 
xcp.parameters(53).baseaddr = '&speed_controllerDec10_P.NODE3P_Value';     
         
xcp.parameters(53).symbol = 'speed_controllerDec10_P.NODE3S_Value';
xcp.parameters(53).size   =  1;       
xcp.parameters(53).dtname = 'real_T'; 
xcp.parameters(54).baseaddr = '&speed_controllerDec10_P.NODE3S_Value';     
         
xcp.parameters(54).symbol = 'speed_controllerDec10_P.NODE4P_Value';
xcp.parameters(54).size   =  1;       
xcp.parameters(54).dtname = 'real_T'; 
xcp.parameters(55).baseaddr = '&speed_controllerDec10_P.NODE4P_Value';     
         
xcp.parameters(55).symbol = 'speed_controllerDec10_P.NODE4S_Value';
xcp.parameters(55).size   =  1;       
xcp.parameters(55).dtname = 'real_T'; 
xcp.parameters(56).baseaddr = '&speed_controllerDec10_P.NODE4S_Value';     
         
xcp.parameters(56).symbol = 'speed_controllerDec10_P.NUMNODES_Value';
xcp.parameters(56).size   =  1;       
xcp.parameters(56).dtname = 'real_T'; 
xcp.parameters(57).baseaddr = '&speed_controllerDec10_P.NUMNODES_Value';     
         
xcp.parameters(57).symbol = 'speed_controllerDec10_P.REST_Value';
xcp.parameters(57).size   =  1;       
xcp.parameters(57).dtname = 'real_T'; 
xcp.parameters(58).baseaddr = '&speed_controllerDec10_P.REST_Value';     
         
xcp.parameters(58).symbol = 'speed_controllerDec10_P.RUN_Value';
xcp.parameters(58).size   =  1;       
xcp.parameters(58).dtname = 'real_T'; 
xcp.parameters(59).baseaddr = '&speed_controllerDec10_P.RUN_Value';     
         
xcp.parameters(59).symbol = 'speed_controllerDec10_P.SETZERO_Value';
xcp.parameters(59).size   =  1;       
xcp.parameters(59).dtname = 'real_T'; 
xcp.parameters(60).baseaddr = '&speed_controllerDec10_P.SETZERO_Value';     
         
xcp.parameters(60).symbol = 'speed_controllerDec10_P.STANCE_Value';
xcp.parameters(60).size   =  1;       
xcp.parameters(60).dtname = 'real_T'; 
xcp.parameters(61).baseaddr = '&speed_controllerDec10_P.STANCE_Value';     
         
xcp.parameters(61).symbol = 'speed_controllerDec10_P.SWING_Value';
xcp.parameters(61).size   =  1;       
xcp.parameters(61).dtname = 'real_T'; 
xcp.parameters(62).baseaddr = '&speed_controllerDec10_P.SWING_Value';     
         
xcp.parameters(62).symbol = 'speed_controllerDec10_P.UseIterativeLearning_Value';
xcp.parameters(62).size   =  1;       
xcp.parameters(62).dtname = 'real_T'; 
xcp.parameters(63).baseaddr = '&speed_controllerDec10_P.UseIterativeLearning_Value';     
         
xcp.parameters(63).symbol = 'speed_controllerDec10_P.num_strike_Value';
xcp.parameters(63).size   =  1;       
xcp.parameters(63).dtname = 'real_T'; 
xcp.parameters(64).baseaddr = '&speed_controllerDec10_P.num_strike_Value';     
         
xcp.parameters(64).symbol = 'speed_controllerDec10_P.num_swing_Value';
xcp.parameters(64).size   =  1;       
xcp.parameters(64).dtname = 'real_T'; 
xcp.parameters(65).baseaddr = '&speed_controllerDec10_P.num_swing_Value';     
         
xcp.parameters(65).symbol = 'speed_controllerDec10_P.pflex_max_Value';
xcp.parameters(65).size   =  1;       
xcp.parameters(65).dtname = 'real_T'; 
xcp.parameters(66).baseaddr = '&speed_controllerDec10_P.pflex_max_Value';     
         
xcp.parameters(66).symbol = 'speed_controllerDec10_P.pflex_sing_Value';
xcp.parameters(66).size   =  1;       
xcp.parameters(66).dtname = 'real_T'; 
xcp.parameters(67).baseaddr = '&speed_controllerDec10_P.pflex_sing_Value';     
         
xcp.parameters(67).symbol = 'speed_controllerDec10_P.thresh_mid_Value';
xcp.parameters(67).size   =  1;       
xcp.parameters(67).dtname = 'real_T'; 
xcp.parameters(68).baseaddr = '&speed_controllerDec10_P.thresh_mid_Value';     
         
xcp.parameters(68).symbol = 'speed_controllerDec10_P.thresh_swing_Value';
xcp.parameters(68).size   =  1;       
xcp.parameters(68).dtname = 'real_T'; 
xcp.parameters(69).baseaddr = '&speed_controllerDec10_P.thresh_swing_Value';     
         
xcp.parameters(69).symbol = 'speed_controllerDec10_P.to_pct_Value';
xcp.parameters(69).size   =  1;       
xcp.parameters(69).dtname = 'real_T'; 
xcp.parameters(70).baseaddr = '&speed_controllerDec10_P.to_pct_Value';     
         
xcp.parameters(70).symbol = 'speed_controllerDec10_P.tstance_avg_init_Value';
xcp.parameters(70).size   =  1;       
xcp.parameters(70).dtname = 'real_T'; 
xcp.parameters(71).baseaddr = '&speed_controllerDec10_P.tstance_avg_init_Value';     
         
xcp.parameters(71).symbol = 'speed_controllerDec10_P.tstance_pct_Value';
xcp.parameters(71).size   =  1;       
xcp.parameters(71).dtname = 'real_T'; 
xcp.parameters(72).baseaddr = '&speed_controllerDec10_P.tstance_pct_Value';     
         
xcp.parameters(72).symbol = 'speed_controllerDec10_P.tstride_avg_init_Value';
xcp.parameters(72).size   =  1;       
xcp.parameters(72).dtname = 'real_T'; 
xcp.parameters(73).baseaddr = '&speed_controllerDec10_P.tstride_avg_init_Value';     
         
xcp.parameters(73).symbol = 'speed_controllerDec10_P.tswing_min_Value';
xcp.parameters(73).size   =  1;       
xcp.parameters(73).dtname = 'real_T'; 
xcp.parameters(74).baseaddr = '&speed_controllerDec10_P.tswing_min_Value';     
         
xcp.parameters(74).symbol = 'speed_controllerDec10_P.LOCK_Gain';
xcp.parameters(74).size   =  1;       
xcp.parameters(74).dtname = 'real_T'; 
xcp.parameters(75).baseaddr = '&speed_controllerDec10_P.LOCK_Gain';     
         
xcp.parameters(75).symbol = 'speed_controllerDec10_P.REST_Gain';
xcp.parameters(75).size   =  1;       
xcp.parameters(75).dtname = 'real_T'; 
xcp.parameters(76).baseaddr = '&speed_controllerDec10_P.REST_Gain';     
         
xcp.parameters(76).symbol = 'speed_controllerDec10_P.RUN_Gain';
xcp.parameters(76).size   =  1;       
xcp.parameters(76).dtname = 'real_T'; 
xcp.parameters(77).baseaddr = '&speed_controllerDec10_P.RUN_Gain';     
         
xcp.parameters(77).symbol = 'speed_controllerDec10_P.SETZERO_Gain';
xcp.parameters(77).size   =  1;       
xcp.parameters(77).dtname = 'real_T'; 
xcp.parameters(78).baseaddr = '&speed_controllerDec10_P.SETZERO_Gain';     
         
xcp.parameters(78).symbol = 'speed_controllerDec10_P.STANCE_Gain';
xcp.parameters(78).size   =  1;       
xcp.parameters(78).dtname = 'real_T'; 
xcp.parameters(79).baseaddr = '&speed_controllerDec10_P.STANCE_Gain';     
         
xcp.parameters(79).symbol = 'speed_controllerDec10_P.SWING_Gain';
xcp.parameters(79).size   =  1;       
xcp.parameters(79).dtname = 'real_T'; 
xcp.parameters(80).baseaddr = '&speed_controllerDec10_P.SWING_Gain';     
         
xcp.parameters(80).symbol = 'speed_controllerDec10_P.degtorad_Gain';
xcp.parameters(80).size   =  1;       
xcp.parameters(80).dtname = 'real_T'; 
xcp.parameters(81).baseaddr = '&speed_controllerDec10_P.degtorad_Gain';     
         
xcp.parameters(81).symbol = 'speed_controllerDec10_P.Gain1_Gain';
xcp.parameters(81).size   =  1;       
xcp.parameters(81).dtname = 'real_T'; 
xcp.parameters(82).baseaddr = '&speed_controllerDec10_P.Gain1_Gain';     
         
xcp.parameters(82).symbol = 'speed_controllerDec10_P.Gain2_Gain';
xcp.parameters(82).size   =  1;       
xcp.parameters(82).dtname = 'real_T'; 
xcp.parameters(83).baseaddr = '&speed_controllerDec10_P.Gain2_Gain';     
         
xcp.parameters(83).symbol = 'speed_controllerDec10_P.Gain5_Gain';
xcp.parameters(83).size   =  1;       
xcp.parameters(83).dtname = 'real_T'; 
xcp.parameters(84).baseaddr = '&speed_controllerDec10_P.Gain5_Gain';     
         
xcp.parameters(84).symbol = 'speed_controllerDec10_P.calibration_Gain';
xcp.parameters(84).size   =  12;       
xcp.parameters(84).dtname = 'real_T'; 
xcp.parameters(85).baseaddr = '&speed_controllerDec10_P.calibration_Gain[0]';     

function n = getNumParameters
n = 84;

function n = getNumSignals
n = 46;

function n = getNumEvents
n = 1;

function n = getNumModels
n = 1;

