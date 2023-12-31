function pt=speed_controllerDec10pt
pt = [];

  
pt(1).blockname = 'Constant1';
pt(1).paramname = 'Value';
pt(1).class     = 'scalar';
pt(1).nrows     = 1;
pt(1).ncols     = 1;
pt(1).subsource = 'SS_DOUBLE';
pt(1).ndims     = '2';
pt(1).size      = '[]';
pt(1).isStruct  = false;
pt(1).symbol     = 'speed_controllerDec10_P.Constant1_Value';
pt(1).baseaddr   = '&speed_controllerDec10_P.Constant1_Value';
pt(1).dtname     = 'real_T';

pt(getlenPT) = pt(1);


  
pt(2).blockname = 'Saturation1';
pt(2).paramname = 'UpperLimit';
pt(2).class     = 'scalar';
pt(2).nrows     = 1;
pt(2).ncols     = 1;
pt(2).subsource = 'SS_DOUBLE';
pt(2).ndims     = '2';
pt(2).size      = '[]';
pt(2).isStruct  = false;
pt(2).symbol     = 'speed_controllerDec10_P.Saturation1_UpperSat';
pt(2).baseaddr   = '&speed_controllerDec10_P.Saturation1_UpperSat';
pt(2).dtname     = 'real_T';



  
pt(3).blockname = 'Saturation1';
pt(3).paramname = 'LowerLimit';
pt(3).class     = 'scalar';
pt(3).nrows     = 1;
pt(3).ncols     = 1;
pt(3).subsource = 'SS_DOUBLE';
pt(3).ndims     = '2';
pt(3).size      = '[]';
pt(3).isStruct  = false;
pt(3).symbol     = 'speed_controllerDec10_P.Saturation1_LowerSat';
pt(3).baseaddr   = '&speed_controllerDec10_P.Saturation1_LowerSat';
pt(3).dtname     = 'real_T';



  
pt(4).blockname = 'Analog output1';
pt(4).paramname = 'P1';
pt(4).class     = 'vector';
pt(4).nrows     = 1;
pt(4).ncols     = 4;
pt(4).subsource = 'SS_DOUBLE';
pt(4).ndims     = '2';
pt(4).size      = '[]';
pt(4).isStruct  = false;
pt(4).symbol     = 'speed_controllerDec10_P.Analogoutput1_P1';
pt(4).baseaddr   = '&speed_controllerDec10_P.Analogoutput1_P1[0]';
pt(4).dtname     = 'real_T';



  
pt(5).blockname = 'Analog output1';
pt(5).paramname = 'P2';
pt(5).class     = 'vector';
pt(5).nrows     = 1;
pt(5).ncols     = 4;
pt(5).subsource = 'SS_DOUBLE';
pt(5).ndims     = '2';
pt(5).size      = '[]';
pt(5).isStruct  = false;
pt(5).symbol     = 'speed_controllerDec10_P.Analogoutput1_P2';
pt(5).baseaddr   = '&speed_controllerDec10_P.Analogoutput1_P2[0]';
pt(5).dtname     = 'real_T';



  
pt(6).blockname = 'Analog output1';
pt(6).paramname = 'P3';
pt(6).class     = 'vector';
pt(6).nrows     = 1;
pt(6).ncols     = 4;
pt(6).subsource = 'SS_DOUBLE';
pt(6).ndims     = '2';
pt(6).size      = '[]';
pt(6).isStruct  = false;
pt(6).symbol     = 'speed_controllerDec10_P.Analogoutput1_P3';
pt(6).baseaddr   = '&speed_controllerDec10_P.Analogoutput1_P3[0]';
pt(6).dtname     = 'real_T';



  
pt(7).blockname = 'Analog output1';
pt(7).paramname = 'P4';
pt(7).class     = 'scalar';
pt(7).nrows     = 1;
pt(7).ncols     = 1;
pt(7).subsource = 'SS_DOUBLE';
pt(7).ndims     = '2';
pt(7).size      = '[]';
pt(7).isStruct  = false;
pt(7).symbol     = 'speed_controllerDec10_P.Analogoutput1_P4';
pt(7).baseaddr   = '&speed_controllerDec10_P.Analogoutput1_P4';
pt(7).dtname     = 'real_T';



  
pt(8).blockname = 'Analog output1';
pt(8).paramname = 'P5';
pt(8).class     = 'scalar';
pt(8).nrows     = 1;
pt(8).ncols     = 1;
pt(8).subsource = 'SS_DOUBLE';
pt(8).ndims     = '2';
pt(8).size      = '[]';
pt(8).isStruct  = false;
pt(8).symbol     = 'speed_controllerDec10_P.Analogoutput1_P5';
pt(8).baseaddr   = '&speed_controllerDec10_P.Analogoutput1_P5';
pt(8).dtname     = 'real_T';



  
pt(9).blockname = 'Sensor Read and Process/subjMass';
pt(9).paramname = 'InitialValue';
pt(9).class     = 'scalar';
pt(9).nrows     = 1;
pt(9).ncols     = 1;
pt(9).subsource = 'SS_DOUBLE';
pt(9).ndims     = '2';
pt(9).size      = '[]';
pt(9).isStruct  = false;
pt(9).symbol     = 'speed_controllerDec10_P.subjMass_InitialValue';
pt(9).baseaddr   = '&speed_controllerDec10_P.subjMass_InitialValue';
pt(9).dtname     = 'real_T';



  
pt(10).blockname = 'Sensor Read and Process/GRF_Threshold_Down';
pt(10).paramname = 'Value';
pt(10).class     = 'scalar';
pt(10).nrows     = 1;
pt(10).ncols     = 1;
pt(10).subsource = 'SS_DOUBLE';
pt(10).ndims     = '2';
pt(10).size      = '[]';
pt(10).isStruct  = false;
pt(10).symbol     = 'speed_controllerDec10_P.GRF_Threshold_Down_Value';
pt(10).baseaddr   = '&speed_controllerDec10_P.GRF_Threshold_Down_Value';
pt(10).dtname     = 'real_T';



  
pt(11).blockname = 'Sensor Read and Process/GRF_Threshold_Up';
pt(11).paramname = 'Value';
pt(11).class     = 'scalar';
pt(11).nrows     = 1;
pt(11).ncols     = 1;
pt(11).subsource = 'SS_DOUBLE';
pt(11).ndims     = '2';
pt(11).size      = '[]';
pt(11).isStruct  = false;
pt(11).symbol     = 'speed_controllerDec10_P.GRF_Threshold_Up_Value';
pt(11).baseaddr   = '&speed_controllerDec10_P.GRF_Threshold_Up_Value';
pt(11).dtname     = 'real_T';



  
pt(12).blockname = 'Sensor Read and Process/Gain1';
pt(12).paramname = 'Gain';
pt(12).class     = 'scalar';
pt(12).nrows     = 1;
pt(12).ncols     = 1;
pt(12).subsource = 'SS_DOUBLE';
pt(12).ndims     = '2';
pt(12).size      = '[]';
pt(12).isStruct  = false;
pt(12).symbol     = 'speed_controllerDec10_P.Gain1_Gain_p';
pt(12).baseaddr   = '&speed_controllerDec10_P.Gain1_Gain_p';
pt(12).dtname     = 'real_T';



  
pt(13).blockname = 'Sensor Read and Process/Gain10';
pt(13).paramname = 'Gain';
pt(13).class     = 'scalar';
pt(13).nrows     = 1;
pt(13).ncols     = 1;
pt(13).subsource = 'SS_DOUBLE';
pt(13).ndims     = '2';
pt(13).size      = '[]';
pt(13).isStruct  = false;
pt(13).symbol     = 'speed_controllerDec10_P.Gain10_Gain';
pt(13).baseaddr   = '&speed_controllerDec10_P.Gain10_Gain';
pt(13).dtname     = 'real_T';



  
pt(14).blockname = 'Sensor Read and Process/Gain2';
pt(14).paramname = 'Gain';
pt(14).class     = 'scalar';
pt(14).nrows     = 1;
pt(14).ncols     = 1;
pt(14).subsource = 'SS_DOUBLE';
pt(14).ndims     = '2';
pt(14).size      = '[]';
pt(14).isStruct  = false;
pt(14).symbol     = 'speed_controllerDec10_P.Gain2_Gain_c';
pt(14).baseaddr   = '&speed_controllerDec10_P.Gain2_Gain_c';
pt(14).dtname     = 'real_T';



  
pt(15).blockname = 'Sensor Read and Process/Gain3';
pt(15).paramname = 'Gain';
pt(15).class     = 'scalar';
pt(15).nrows     = 1;
pt(15).ncols     = 1;
pt(15).subsource = 'SS_DOUBLE';
pt(15).ndims     = '2';
pt(15).size      = '[]';
pt(15).isStruct  = false;
pt(15).symbol     = 'speed_controllerDec10_P.Gain3_Gain';
pt(15).baseaddr   = '&speed_controllerDec10_P.Gain3_Gain';
pt(15).dtname     = 'real_T';



  
pt(16).blockname = 'Sensor Read and Process/Gain4';
pt(16).paramname = 'Gain';
pt(16).class     = 'scalar';
pt(16).nrows     = 1;
pt(16).ncols     = 1;
pt(16).subsource = 'SS_DOUBLE';
pt(16).ndims     = '2';
pt(16).size      = '[]';
pt(16).isStruct  = false;
pt(16).symbol     = 'speed_controllerDec10_P.Gain4_Gain';
pt(16).baseaddr   = '&speed_controllerDec10_P.Gain4_Gain';
pt(16).dtname     = 'real_T';



  
pt(17).blockname = 'Sensor Read and Process/Gain5';
pt(17).paramname = 'Gain';
pt(17).class     = 'scalar';
pt(17).nrows     = 1;
pt(17).ncols     = 1;
pt(17).subsource = 'SS_DOUBLE';
pt(17).ndims     = '2';
pt(17).size      = '[]';
pt(17).isStruct  = false;
pt(17).symbol     = 'speed_controllerDec10_P.Gain5_Gain_e';
pt(17).baseaddr   = '&speed_controllerDec10_P.Gain5_Gain_e';
pt(17).dtname     = 'real_T';



  
pt(18).blockname = 'Sensor Read and Process/Gain8';
pt(18).paramname = 'Gain';
pt(18).class     = 'scalar';
pt(18).nrows     = 1;
pt(18).ncols     = 1;
pt(18).subsource = 'SS_DOUBLE';
pt(18).ndims     = '2';
pt(18).size      = '[]';
pt(18).isStruct  = false;
pt(18).symbol     = 'speed_controllerDec10_P.Gain8_Gain';
pt(18).baseaddr   = '&speed_controllerDec10_P.Gain8_Gain';
pt(18).dtname     = 'real_T';



  
pt(19).blockname = 'Sensor Read and Process/Gain9';
pt(19).paramname = 'Gain';
pt(19).class     = 'scalar';
pt(19).nrows     = 1;
pt(19).ncols     = 1;
pt(19).subsource = 'SS_DOUBLE';
pt(19).ndims     = '2';
pt(19).size      = '[]';
pt(19).isStruct  = false;
pt(19).symbol     = 'speed_controllerDec10_P.Gain9_Gain';
pt(19).baseaddr   = '&speed_controllerDec10_P.Gain9_Gain';
pt(19).dtname     = 'real_T';



  
pt(20).blockname = 'Sensor Read and Process/Analog input3';
pt(20).paramname = 'P1';
pt(20).class     = 'scalar';
pt(20).nrows     = 1;
pt(20).ncols     = 1;
pt(20).subsource = 'SS_DOUBLE';
pt(20).ndims     = '2';
pt(20).size      = '[]';
pt(20).isStruct  = false;
pt(20).symbol     = 'speed_controllerDec10_P.Analoginput3_P1';
pt(20).baseaddr   = '&speed_controllerDec10_P.Analoginput3_P1';
pt(20).dtname     = 'real_T';



  
pt(21).blockname = 'Sensor Read and Process/Analog input3';
pt(21).paramname = 'P2';
pt(21).class     = 'scalar';
pt(21).nrows     = 1;
pt(21).ncols     = 1;
pt(21).subsource = 'SS_DOUBLE';
pt(21).ndims     = '2';
pt(21).size      = '[]';
pt(21).isStruct  = false;
pt(21).symbol     = 'speed_controllerDec10_P.Analoginput3_P2';
pt(21).baseaddr   = '&speed_controllerDec10_P.Analoginput3_P2';
pt(21).dtname     = 'real_T';



  
pt(22).blockname = 'Sensor Read and Process/Analog input3';
pt(22).paramname = 'P3';
pt(22).class     = 'scalar';
pt(22).nrows     = 1;
pt(22).ncols     = 1;
pt(22).subsource = 'SS_DOUBLE';
pt(22).ndims     = '2';
pt(22).size      = '[]';
pt(22).isStruct  = false;
pt(22).symbol     = 'speed_controllerDec10_P.Analoginput3_P3';
pt(22).baseaddr   = '&speed_controllerDec10_P.Analoginput3_P3';
pt(22).dtname     = 'real_T';



  
pt(23).blockname = 'Sensor Read and Process/Analog input3';
pt(23).paramname = 'P4';
pt(23).class     = 'scalar';
pt(23).nrows     = 1;
pt(23).ncols     = 1;
pt(23).subsource = 'SS_DOUBLE';
pt(23).ndims     = '2';
pt(23).size      = '[]';
pt(23).isStruct  = false;
pt(23).symbol     = 'speed_controllerDec10_P.Analoginput3_P4';
pt(23).baseaddr   = '&speed_controllerDec10_P.Analoginput3_P4';
pt(23).dtname     = 'real_T';



  
pt(24).blockname = 'Sensor Read and Process/Analog input3';
pt(24).paramname = 'P5';
pt(24).class     = 'scalar';
pt(24).nrows     = 1;
pt(24).ncols     = 1;
pt(24).subsource = 'SS_DOUBLE';
pt(24).ndims     = '2';
pt(24).size      = '[]';
pt(24).isStruct  = false;
pt(24).symbol     = 'speed_controllerDec10_P.Analoginput3_P5';
pt(24).baseaddr   = '&speed_controllerDec10_P.Analoginput3_P5';
pt(24).dtname     = 'real_T';



  
pt(25).blockname = 'Sensor Read and Process/Analog input3';
pt(25).paramname = 'P6';
pt(25).class     = 'scalar';
pt(25).nrows     = 1;
pt(25).ncols     = 1;
pt(25).subsource = 'SS_DOUBLE';
pt(25).ndims     = '2';
pt(25).size      = '[]';
pt(25).isStruct  = false;
pt(25).symbol     = 'speed_controllerDec10_P.Analoginput3_P6';
pt(25).baseaddr   = '&speed_controllerDec10_P.Analoginput3_P6';
pt(25).dtname     = 'real_T';



  
pt(26).blockname = 'Sensor Read and Process/Analog input3';
pt(26).paramname = 'P7';
pt(26).class     = 'scalar';
pt(26).nrows     = 1;
pt(26).ncols     = 1;
pt(26).subsource = 'SS_DOUBLE';
pt(26).ndims     = '2';
pt(26).size      = '[]';
pt(26).isStruct  = false;
pt(26).symbol     = 'speed_controllerDec10_P.Analoginput3_P7';
pt(26).baseaddr   = '&speed_controllerDec10_P.Analoginput3_P7';
pt(26).dtname     = 'real_T';



  
pt(27).blockname = 'Sensor Read and Process/Setup1';
pt(27).paramname = 'P1';
pt(27).class     = 'scalar';
pt(27).nrows     = 1;
pt(27).ncols     = 1;
pt(27).subsource = 'SS_DOUBLE';
pt(27).ndims     = '2';
pt(27).size      = '[]';
pt(27).isStruct  = false;
pt(27).symbol     = 'speed_controllerDec10_P.Setup1_P1';
pt(27).baseaddr   = '&speed_controllerDec10_P.Setup1_P1';
pt(27).dtname     = 'real_T';



  
pt(28).blockname = 'Sensor Read and Process/Setup1';
pt(28).paramname = 'P2';
pt(28).class     = 'scalar';
pt(28).nrows     = 1;
pt(28).ncols     = 1;
pt(28).subsource = 'SS_DOUBLE';
pt(28).ndims     = '2';
pt(28).size      = '[]';
pt(28).isStruct  = false;
pt(28).symbol     = 'speed_controllerDec10_P.Setup1_P2';
pt(28).baseaddr   = '&speed_controllerDec10_P.Setup1_P2';
pt(28).dtname     = 'real_T';



  
pt(29).blockname = 'Sensor Read and Process/Setup1';
pt(29).paramname = 'P3';
pt(29).class     = 'scalar';
pt(29).nrows     = 1;
pt(29).ncols     = 1;
pt(29).subsource = 'SS_DOUBLE';
pt(29).ndims     = '2';
pt(29).size      = '[]';
pt(29).isStruct  = false;
pt(29).symbol     = 'speed_controllerDec10_P.Setup1_P3';
pt(29).baseaddr   = '&speed_controllerDec10_P.Setup1_P3';
pt(29).dtname     = 'real_T';



  
pt(30).blockname = 'Sensor Read and Process/Setup4';
pt(30).paramname = 'P1';
pt(30).class     = 'scalar';
pt(30).nrows     = 1;
pt(30).ncols     = 1;
pt(30).subsource = 'SS_DOUBLE';
pt(30).ndims     = '2';
pt(30).size      = '[]';
pt(30).isStruct  = false;
pt(30).symbol     = 'speed_controllerDec10_P.Setup4_P1';
pt(30).baseaddr   = '&speed_controllerDec10_P.Setup4_P1';
pt(30).dtname     = 'real_T';



  
pt(31).blockname = 'Sensor Read and Process/Setup4';
pt(31).paramname = 'P2';
pt(31).class     = 'scalar';
pt(31).nrows     = 1;
pt(31).ncols     = 1;
pt(31).subsource = 'SS_DOUBLE';
pt(31).ndims     = '2';
pt(31).size      = '[]';
pt(31).isStruct  = false;
pt(31).symbol     = 'speed_controllerDec10_P.Setup4_P2';
pt(31).baseaddr   = '&speed_controllerDec10_P.Setup4_P2';
pt(31).dtname     = 'real_T';



  
pt(32).blockname = 'Sensor Read and Process/Setup4';
pt(32).paramname = 'P3';
pt(32).class     = 'scalar';
pt(32).nrows     = 1;
pt(32).ncols     = 1;
pt(32).subsource = 'SS_DOUBLE';
pt(32).ndims     = '2';
pt(32).size      = '[]';
pt(32).isStruct  = false;
pt(32).symbol     = 'speed_controllerDec10_P.Setup4_P3';
pt(32).baseaddr   = '&speed_controllerDec10_P.Setup4_P3';
pt(32).dtname     = 'real_T';



  
pt(33).blockname = 'Sensor Read and Process/Setup4';
pt(33).paramname = 'P4';
pt(33).class     = 'scalar';
pt(33).nrows     = 1;
pt(33).ncols     = 1;
pt(33).subsource = 'SS_DOUBLE';
pt(33).ndims     = '2';
pt(33).size      = '[]';
pt(33).isStruct  = false;
pt(33).symbol     = 'speed_controllerDec10_P.Setup4_P4';
pt(33).baseaddr   = '&speed_controllerDec10_P.Setup4_P4';
pt(33).dtname     = 'real_T';



  
pt(34).blockname = 'Sensor Read and Process/Setup4';
pt(34).paramname = 'P5';
pt(34).class     = 'scalar';
pt(34).nrows     = 1;
pt(34).ncols     = 1;
pt(34).subsource = 'SS_DOUBLE';
pt(34).ndims     = '2';
pt(34).size      = '[]';
pt(34).isStruct  = false;
pt(34).symbol     = 'speed_controllerDec10_P.Setup4_P5';
pt(34).baseaddr   = '&speed_controllerDec10_P.Setup4_P5';
pt(34).dtname     = 'real_T';



  
pt(35).blockname = 'Sensor Read and Process/Setup4';
pt(35).paramname = 'P6';
pt(35).class     = 'scalar';
pt(35).nrows     = 1;
pt(35).ncols     = 1;
pt(35).subsource = 'SS_DOUBLE';
pt(35).ndims     = '2';
pt(35).size      = '[]';
pt(35).isStruct  = false;
pt(35).symbol     = 'speed_controllerDec10_P.Setup4_P6';
pt(35).baseaddr   = '&speed_controllerDec10_P.Setup4_P6';
pt(35).dtname     = 'real_T';



  
pt(36).blockname = 'Sensor Read and Process/Setup4';
pt(36).paramname = 'P7';
pt(36).class     = 'scalar';
pt(36).nrows     = 1;
pt(36).ncols     = 1;
pt(36).subsource = 'SS_DOUBLE';
pt(36).ndims     = '2';
pt(36).size      = '[]';
pt(36).isStruct  = false;
pt(36).symbol     = 'speed_controllerDec10_P.Setup4_P7';
pt(36).baseaddr   = '&speed_controllerDec10_P.Setup4_P7';
pt(36).dtname     = 'real_T';



  
pt(37).blockname = 'Sensor Read and Process/3rd Order, 25 Hz  Butterworth Filter1';
pt(37).paramname = 'Numerator';
pt(37).class     = 'vector';
pt(37).nrows     = 1;
pt(37).ncols     = 4;
pt(37).subsource = 'SS_DOUBLE';
pt(37).ndims     = '2';
pt(37).size      = '[]';
pt(37).isStruct  = false;
pt(37).symbol     = 'speed_controllerDec10_P.urdOrder25HzButterworthFilter1_';
pt(37).baseaddr   = '&speed_controllerDec10_P.urdOrder25HzButterworthFilter1_[0]';
pt(37).dtname     = 'real_T';



  
pt(38).blockname = 'Sensor Read and Process/3rd Order, 25 Hz  Butterworth Filter1';
pt(38).paramname = 'Denominator';
pt(38).class     = 'vector';
pt(38).nrows     = 1;
pt(38).ncols     = 4;
pt(38).subsource = 'SS_DOUBLE';
pt(38).ndims     = '2';
pt(38).size      = '[]';
pt(38).isStruct  = false;
pt(38).symbol     = 'speed_controllerDec10_P.urdOrder25HzButterworthFilter_m';
pt(38).baseaddr   = '&speed_controllerDec10_P.urdOrder25HzButterworthFilter_m[0]';
pt(38).dtname     = 'real_T';



  
pt(39).blockname = 'Sensor Read and Process/3rd Order, 25 Hz  Butterworth Filter1';
pt(39).paramname = 'InitialStates';
pt(39).class     = 'scalar';
pt(39).nrows     = 1;
pt(39).ncols     = 1;
pt(39).subsource = 'SS_DOUBLE';
pt(39).ndims     = '2';
pt(39).size      = '[]';
pt(39).isStruct  = false;
pt(39).symbol     = 'speed_controllerDec10_P.urdOrder25HzButterworthFilter_f';
pt(39).baseaddr   = '&speed_controllerDec10_P.urdOrder25HzButterworthFilter_f';
pt(39).dtname     = 'real_T';



  
pt(40).blockname = 'Sensor Read and Process/Unit Delay1';
pt(40).paramname = 'InitialCondition';
pt(40).class     = 'vector';
pt(40).nrows     = 2;
pt(40).ncols     = 1;
pt(40).subsource = 'SS_DOUBLE';
pt(40).ndims     = '2';
pt(40).size      = '[]';
pt(40).isStruct  = false;
pt(40).symbol     = 'speed_controllerDec10_P.UnitDelay1_InitialCondition';
pt(40).baseaddr   = '&speed_controllerDec10_P.UnitDelay1_InitialCondition[0]';
pt(40).dtname     = 'real_T';



  
pt(41).blockname = 'Sensor Read and Process/GUI/BTLock';
pt(41).paramname = 'Value';
pt(41).class     = 'scalar';
pt(41).nrows     = 1;
pt(41).ncols     = 1;
pt(41).subsource = 'SS_DOUBLE';
pt(41).ndims     = '2';
pt(41).size      = '[]';
pt(41).isStruct  = false;
pt(41).symbol     = 'speed_controllerDec10_P.BTLock_Value';
pt(41).baseaddr   = '&speed_controllerDec10_P.BTLock_Value';
pt(41).dtname     = 'real_T';



  
pt(42).blockname = 'Sensor Read and Process/GUI/BTRun';
pt(42).paramname = 'Value';
pt(42).class     = 'scalar';
pt(42).nrows     = 1;
pt(42).ncols     = 1;
pt(42).subsource = 'SS_DOUBLE';
pt(42).ndims     = '2';
pt(42).size      = '[]';
pt(42).isStruct  = false;
pt(42).symbol     = 'speed_controllerDec10_P.BTRun_Value';
pt(42).baseaddr   = '&speed_controllerDec10_P.BTRun_Value';
pt(42).dtname     = 'real_T';



  
pt(43).blockname = 'Sensor Read and Process/GUI/BTmeasureWeight';
pt(43).paramname = 'Value';
pt(43).class     = 'scalar';
pt(43).nrows     = 1;
pt(43).ncols     = 1;
pt(43).subsource = 'SS_DOUBLE';
pt(43).ndims     = '2';
pt(43).size      = '[]';
pt(43).isStruct  = false;
pt(43).symbol     = 'speed_controllerDec10_P.BTmeasureWeight_Value';
pt(43).baseaddr   = '&speed_controllerDec10_P.BTmeasureWeight_Value';
pt(43).dtname     = 'real_T';



  
pt(44).blockname = 'Sensor Read and Process/GUI/BTresetStateVariables';
pt(44).paramname = 'Value';
pt(44).class     = 'scalar';
pt(44).nrows     = 1;
pt(44).ncols     = 1;
pt(44).subsource = 'SS_DOUBLE';
pt(44).ndims     = '2';
pt(44).size      = '[]';
pt(44).isStruct  = false;
pt(44).symbol     = 'speed_controllerDec10_P.BTresetStateVariables_Value';
pt(44).baseaddr   = '&speed_controllerDec10_P.BTresetStateVariables_Value';
pt(44).dtname     = 'real_T';



  
pt(45).blockname = 'Sensor Read and Process/GUI/BTzeroLeft';
pt(45).paramname = 'Value';
pt(45).class     = 'scalar';
pt(45).nrows     = 1;
pt(45).ncols     = 1;
pt(45).subsource = 'SS_DOUBLE';
pt(45).ndims     = '2';
pt(45).size      = '[]';
pt(45).isStruct  = false;
pt(45).symbol     = 'speed_controllerDec10_P.BTzeroLeft_Value';
pt(45).baseaddr   = '&speed_controllerDec10_P.BTzeroLeft_Value';
pt(45).dtname     = 'real_T';



  
pt(46).blockname = 'Sensor Read and Process/GUI/BTzeroRight';
pt(46).paramname = 'Value';
pt(46).class     = 'scalar';
pt(46).nrows     = 1;
pt(46).ncols     = 1;
pt(46).subsource = 'SS_DOUBLE';
pt(46).ndims     = '2';
pt(46).size      = '[]';
pt(46).isStruct  = false;
pt(46).symbol     = 'speed_controllerDec10_P.BTzeroRight_Value';
pt(46).baseaddr   = '&speed_controllerDec10_P.BTzeroRight_Value';
pt(46).dtname     = 'real_T';



  
pt(47).blockname = 'Sensor Read and Process/GUI/LOCK_';
pt(47).paramname = 'Value';
pt(47).class     = 'scalar';
pt(47).nrows     = 1;
pt(47).ncols     = 1;
pt(47).subsource = 'SS_DOUBLE';
pt(47).ndims     = '2';
pt(47).size      = '[]';
pt(47).isStruct  = false;
pt(47).symbol     = 'speed_controllerDec10_P.LOCK_Value';
pt(47).baseaddr   = '&speed_controllerDec10_P.LOCK_Value';
pt(47).dtname     = 'real_T';



  
pt(48).blockname = 'Sensor Read and Process/GUI/NODE1P';
pt(48).paramname = 'Value';
pt(48).class     = 'scalar';
pt(48).nrows     = 1;
pt(48).ncols     = 1;
pt(48).subsource = 'SS_DOUBLE';
pt(48).ndims     = '2';
pt(48).size      = '[]';
pt(48).isStruct  = false;
pt(48).symbol     = 'speed_controllerDec10_P.NODE1P_Value';
pt(48).baseaddr   = '&speed_controllerDec10_P.NODE1P_Value';
pt(48).dtname     = 'real_T';



  
pt(49).blockname = 'Sensor Read and Process/GUI/NODE1S';
pt(49).paramname = 'Value';
pt(49).class     = 'scalar';
pt(49).nrows     = 1;
pt(49).ncols     = 1;
pt(49).subsource = 'SS_DOUBLE';
pt(49).ndims     = '2';
pt(49).size      = '[]';
pt(49).isStruct  = false;
pt(49).symbol     = 'speed_controllerDec10_P.NODE1S_Value';
pt(49).baseaddr   = '&speed_controllerDec10_P.NODE1S_Value';
pt(49).dtname     = 'real_T';



  
pt(50).blockname = 'Sensor Read and Process/GUI/NODE2P';
pt(50).paramname = 'Value';
pt(50).class     = 'scalar';
pt(50).nrows     = 1;
pt(50).ncols     = 1;
pt(50).subsource = 'SS_DOUBLE';
pt(50).ndims     = '2';
pt(50).size      = '[]';
pt(50).isStruct  = false;
pt(50).symbol     = 'speed_controllerDec10_P.NODE2P_Value';
pt(50).baseaddr   = '&speed_controllerDec10_P.NODE2P_Value';
pt(50).dtname     = 'real_T';



  
pt(51).blockname = 'Sensor Read and Process/GUI/NODE2S';
pt(51).paramname = 'Value';
pt(51).class     = 'scalar';
pt(51).nrows     = 1;
pt(51).ncols     = 1;
pt(51).subsource = 'SS_DOUBLE';
pt(51).ndims     = '2';
pt(51).size      = '[]';
pt(51).isStruct  = false;
pt(51).symbol     = 'speed_controllerDec10_P.NODE2S_Value';
pt(51).baseaddr   = '&speed_controllerDec10_P.NODE2S_Value';
pt(51).dtname     = 'real_T';



  
pt(52).blockname = 'Sensor Read and Process/GUI/NODE3P';
pt(52).paramname = 'Value';
pt(52).class     = 'scalar';
pt(52).nrows     = 1;
pt(52).ncols     = 1;
pt(52).subsource = 'SS_DOUBLE';
pt(52).ndims     = '2';
pt(52).size      = '[]';
pt(52).isStruct  = false;
pt(52).symbol     = 'speed_controllerDec10_P.NODE3P_Value';
pt(52).baseaddr   = '&speed_controllerDec10_P.NODE3P_Value';
pt(52).dtname     = 'real_T';



  
pt(53).blockname = 'Sensor Read and Process/GUI/NODE3S';
pt(53).paramname = 'Value';
pt(53).class     = 'scalar';
pt(53).nrows     = 1;
pt(53).ncols     = 1;
pt(53).subsource = 'SS_DOUBLE';
pt(53).ndims     = '2';
pt(53).size      = '[]';
pt(53).isStruct  = false;
pt(53).symbol     = 'speed_controllerDec10_P.NODE3S_Value';
pt(53).baseaddr   = '&speed_controllerDec10_P.NODE3S_Value';
pt(53).dtname     = 'real_T';



  
pt(54).blockname = 'Sensor Read and Process/GUI/NODE4P';
pt(54).paramname = 'Value';
pt(54).class     = 'scalar';
pt(54).nrows     = 1;
pt(54).ncols     = 1;
pt(54).subsource = 'SS_DOUBLE';
pt(54).ndims     = '2';
pt(54).size      = '[]';
pt(54).isStruct  = false;
pt(54).symbol     = 'speed_controllerDec10_P.NODE4P_Value';
pt(54).baseaddr   = '&speed_controllerDec10_P.NODE4P_Value';
pt(54).dtname     = 'real_T';



  
pt(55).blockname = 'Sensor Read and Process/GUI/NODE4S';
pt(55).paramname = 'Value';
pt(55).class     = 'scalar';
pt(55).nrows     = 1;
pt(55).ncols     = 1;
pt(55).subsource = 'SS_DOUBLE';
pt(55).ndims     = '2';
pt(55).size      = '[]';
pt(55).isStruct  = false;
pt(55).symbol     = 'speed_controllerDec10_P.NODE4S_Value';
pt(55).baseaddr   = '&speed_controllerDec10_P.NODE4S_Value';
pt(55).dtname     = 'real_T';



  
pt(56).blockname = 'Sensor Read and Process/GUI/NUMNODES';
pt(56).paramname = 'Value';
pt(56).class     = 'scalar';
pt(56).nrows     = 1;
pt(56).ncols     = 1;
pt(56).subsource = 'SS_DOUBLE';
pt(56).ndims     = '2';
pt(56).size      = '[]';
pt(56).isStruct  = false;
pt(56).symbol     = 'speed_controllerDec10_P.NUMNODES_Value';
pt(56).baseaddr   = '&speed_controllerDec10_P.NUMNODES_Value';
pt(56).dtname     = 'real_T';



  
pt(57).blockname = 'Sensor Read and Process/GUI/REST_';
pt(57).paramname = 'Value';
pt(57).class     = 'scalar';
pt(57).nrows     = 1;
pt(57).ncols     = 1;
pt(57).subsource = 'SS_DOUBLE';
pt(57).ndims     = '2';
pt(57).size      = '[]';
pt(57).isStruct  = false;
pt(57).symbol     = 'speed_controllerDec10_P.REST_Value';
pt(57).baseaddr   = '&speed_controllerDec10_P.REST_Value';
pt(57).dtname     = 'real_T';



  
pt(58).blockname = 'Sensor Read and Process/GUI/RUN_';
pt(58).paramname = 'Value';
pt(58).class     = 'scalar';
pt(58).nrows     = 1;
pt(58).ncols     = 1;
pt(58).subsource = 'SS_DOUBLE';
pt(58).ndims     = '2';
pt(58).size      = '[]';
pt(58).isStruct  = false;
pt(58).symbol     = 'speed_controllerDec10_P.RUN_Value';
pt(58).baseaddr   = '&speed_controllerDec10_P.RUN_Value';
pt(58).dtname     = 'real_T';



  
pt(59).blockname = 'Sensor Read and Process/GUI/SETZERO_';
pt(59).paramname = 'Value';
pt(59).class     = 'scalar';
pt(59).nrows     = 1;
pt(59).ncols     = 1;
pt(59).subsource = 'SS_DOUBLE';
pt(59).ndims     = '2';
pt(59).size      = '[]';
pt(59).isStruct  = false;
pt(59).symbol     = 'speed_controllerDec10_P.SETZERO_Value';
pt(59).baseaddr   = '&speed_controllerDec10_P.SETZERO_Value';
pt(59).dtname     = 'real_T';



  
pt(60).blockname = 'Sensor Read and Process/GUI/STANCE_';
pt(60).paramname = 'Value';
pt(60).class     = 'scalar';
pt(60).nrows     = 1;
pt(60).ncols     = 1;
pt(60).subsource = 'SS_DOUBLE';
pt(60).ndims     = '2';
pt(60).size      = '[]';
pt(60).isStruct  = false;
pt(60).symbol     = 'speed_controllerDec10_P.STANCE_Value';
pt(60).baseaddr   = '&speed_controllerDec10_P.STANCE_Value';
pt(60).dtname     = 'real_T';



  
pt(61).blockname = 'Sensor Read and Process/GUI/SWING_';
pt(61).paramname = 'Value';
pt(61).class     = 'scalar';
pt(61).nrows     = 1;
pt(61).ncols     = 1;
pt(61).subsource = 'SS_DOUBLE';
pt(61).ndims     = '2';
pt(61).size      = '[]';
pt(61).isStruct  = false;
pt(61).symbol     = 'speed_controllerDec10_P.SWING_Value';
pt(61).baseaddr   = '&speed_controllerDec10_P.SWING_Value';
pt(61).dtname     = 'real_T';



  
pt(62).blockname = 'Sensor Read and Process/GUI/UseIterativeLearning';
pt(62).paramname = 'Value';
pt(62).class     = 'scalar';
pt(62).nrows     = 1;
pt(62).ncols     = 1;
pt(62).subsource = 'SS_DOUBLE';
pt(62).ndims     = '2';
pt(62).size      = '[]';
pt(62).isStruct  = false;
pt(62).symbol     = 'speed_controllerDec10_P.UseIterativeLearning_Value';
pt(62).baseaddr   = '&speed_controllerDec10_P.UseIterativeLearning_Value';
pt(62).dtname     = 'real_T';



  
pt(63).blockname = 'Sensor Read and Process/GUI/num_strike';
pt(63).paramname = 'Value';
pt(63).class     = 'scalar';
pt(63).nrows     = 1;
pt(63).ncols     = 1;
pt(63).subsource = 'SS_DOUBLE';
pt(63).ndims     = '2';
pt(63).size      = '[]';
pt(63).isStruct  = false;
pt(63).symbol     = 'speed_controllerDec10_P.num_strike_Value';
pt(63).baseaddr   = '&speed_controllerDec10_P.num_strike_Value';
pt(63).dtname     = 'real_T';



  
pt(64).blockname = 'Sensor Read and Process/GUI/num_swing';
pt(64).paramname = 'Value';
pt(64).class     = 'scalar';
pt(64).nrows     = 1;
pt(64).ncols     = 1;
pt(64).subsource = 'SS_DOUBLE';
pt(64).ndims     = '2';
pt(64).size      = '[]';
pt(64).isStruct  = false;
pt(64).symbol     = 'speed_controllerDec10_P.num_swing_Value';
pt(64).baseaddr   = '&speed_controllerDec10_P.num_swing_Value';
pt(64).dtname     = 'real_T';



  
pt(65).blockname = 'Sensor Read and Process/GUI/pflex_max';
pt(65).paramname = 'Value';
pt(65).class     = 'scalar';
pt(65).nrows     = 1;
pt(65).ncols     = 1;
pt(65).subsource = 'SS_DOUBLE';
pt(65).ndims     = '2';
pt(65).size      = '[]';
pt(65).isStruct  = false;
pt(65).symbol     = 'speed_controllerDec10_P.pflex_max_Value';
pt(65).baseaddr   = '&speed_controllerDec10_P.pflex_max_Value';
pt(65).dtname     = 'real_T';



  
pt(66).blockname = 'Sensor Read and Process/GUI/pflex_sing';
pt(66).paramname = 'Value';
pt(66).class     = 'scalar';
pt(66).nrows     = 1;
pt(66).ncols     = 1;
pt(66).subsource = 'SS_DOUBLE';
pt(66).ndims     = '2';
pt(66).size      = '[]';
pt(66).isStruct  = false;
pt(66).symbol     = 'speed_controllerDec10_P.pflex_sing_Value';
pt(66).baseaddr   = '&speed_controllerDec10_P.pflex_sing_Value';
pt(66).dtname     = 'real_T';



  
pt(67).blockname = 'Sensor Read and Process/GUI/thresh_mid';
pt(67).paramname = 'Value';
pt(67).class     = 'scalar';
pt(67).nrows     = 1;
pt(67).ncols     = 1;
pt(67).subsource = 'SS_DOUBLE';
pt(67).ndims     = '2';
pt(67).size      = '[]';
pt(67).isStruct  = false;
pt(67).symbol     = 'speed_controllerDec10_P.thresh_mid_Value';
pt(67).baseaddr   = '&speed_controllerDec10_P.thresh_mid_Value';
pt(67).dtname     = 'real_T';



  
pt(68).blockname = 'Sensor Read and Process/GUI/thresh_swing';
pt(68).paramname = 'Value';
pt(68).class     = 'scalar';
pt(68).nrows     = 1;
pt(68).ncols     = 1;
pt(68).subsource = 'SS_DOUBLE';
pt(68).ndims     = '2';
pt(68).size      = '[]';
pt(68).isStruct  = false;
pt(68).symbol     = 'speed_controllerDec10_P.thresh_swing_Value';
pt(68).baseaddr   = '&speed_controllerDec10_P.thresh_swing_Value';
pt(68).dtname     = 'real_T';



  
pt(69).blockname = 'Sensor Read and Process/GUI/to_pct';
pt(69).paramname = 'Value';
pt(69).class     = 'scalar';
pt(69).nrows     = 1;
pt(69).ncols     = 1;
pt(69).subsource = 'SS_DOUBLE';
pt(69).ndims     = '2';
pt(69).size      = '[]';
pt(69).isStruct  = false;
pt(69).symbol     = 'speed_controllerDec10_P.to_pct_Value';
pt(69).baseaddr   = '&speed_controllerDec10_P.to_pct_Value';
pt(69).dtname     = 'real_T';



  
pt(70).blockname = 'Sensor Read and Process/GUI/tstance_avg_init';
pt(70).paramname = 'Value';
pt(70).class     = 'scalar';
pt(70).nrows     = 1;
pt(70).ncols     = 1;
pt(70).subsource = 'SS_DOUBLE';
pt(70).ndims     = '2';
pt(70).size      = '[]';
pt(70).isStruct  = false;
pt(70).symbol     = 'speed_controllerDec10_P.tstance_avg_init_Value';
pt(70).baseaddr   = '&speed_controllerDec10_P.tstance_avg_init_Value';
pt(70).dtname     = 'real_T';



  
pt(71).blockname = 'Sensor Read and Process/GUI/tstance_pct';
pt(71).paramname = 'Value';
pt(71).class     = 'scalar';
pt(71).nrows     = 1;
pt(71).ncols     = 1;
pt(71).subsource = 'SS_DOUBLE';
pt(71).ndims     = '2';
pt(71).size      = '[]';
pt(71).isStruct  = false;
pt(71).symbol     = 'speed_controllerDec10_P.tstance_pct_Value';
pt(71).baseaddr   = '&speed_controllerDec10_P.tstance_pct_Value';
pt(71).dtname     = 'real_T';



  
pt(72).blockname = 'Sensor Read and Process/GUI/tstride_avg_init';
pt(72).paramname = 'Value';
pt(72).class     = 'scalar';
pt(72).nrows     = 1;
pt(72).ncols     = 1;
pt(72).subsource = 'SS_DOUBLE';
pt(72).ndims     = '2';
pt(72).size      = '[]';
pt(72).isStruct  = false;
pt(72).symbol     = 'speed_controllerDec10_P.tstride_avg_init_Value';
pt(72).baseaddr   = '&speed_controllerDec10_P.tstride_avg_init_Value';
pt(72).dtname     = 'real_T';



  
pt(73).blockname = 'Sensor Read and Process/GUI/tswing_min';
pt(73).paramname = 'Value';
pt(73).class     = 'scalar';
pt(73).nrows     = 1;
pt(73).ncols     = 1;
pt(73).subsource = 'SS_DOUBLE';
pt(73).ndims     = '2';
pt(73).size      = '[]';
pt(73).isStruct  = false;
pt(73).symbol     = 'speed_controllerDec10_P.tswing_min_Value';
pt(73).baseaddr   = '&speed_controllerDec10_P.tswing_min_Value';
pt(73).dtname     = 'real_T';



  
pt(74).blockname = 'Sensor Read and Process/GUI/LOCK';
pt(74).paramname = 'Gain';
pt(74).class     = 'scalar';
pt(74).nrows     = 1;
pt(74).ncols     = 1;
pt(74).subsource = 'SS_DOUBLE';
pt(74).ndims     = '2';
pt(74).size      = '[]';
pt(74).isStruct  = false;
pt(74).symbol     = 'speed_controllerDec10_P.LOCK_Gain';
pt(74).baseaddr   = '&speed_controllerDec10_P.LOCK_Gain';
pt(74).dtname     = 'real_T';



  
pt(75).blockname = 'Sensor Read and Process/GUI/REST';
pt(75).paramname = 'Gain';
pt(75).class     = 'scalar';
pt(75).nrows     = 1;
pt(75).ncols     = 1;
pt(75).subsource = 'SS_DOUBLE';
pt(75).ndims     = '2';
pt(75).size      = '[]';
pt(75).isStruct  = false;
pt(75).symbol     = 'speed_controllerDec10_P.REST_Gain';
pt(75).baseaddr   = '&speed_controllerDec10_P.REST_Gain';
pt(75).dtname     = 'real_T';



  
pt(76).blockname = 'Sensor Read and Process/GUI/RUN';
pt(76).paramname = 'Gain';
pt(76).class     = 'scalar';
pt(76).nrows     = 1;
pt(76).ncols     = 1;
pt(76).subsource = 'SS_DOUBLE';
pt(76).ndims     = '2';
pt(76).size      = '[]';
pt(76).isStruct  = false;
pt(76).symbol     = 'speed_controllerDec10_P.RUN_Gain';
pt(76).baseaddr   = '&speed_controllerDec10_P.RUN_Gain';
pt(76).dtname     = 'real_T';



  
pt(77).blockname = 'Sensor Read and Process/GUI/SETZERO';
pt(77).paramname = 'Gain';
pt(77).class     = 'scalar';
pt(77).nrows     = 1;
pt(77).ncols     = 1;
pt(77).subsource = 'SS_DOUBLE';
pt(77).ndims     = '2';
pt(77).size      = '[]';
pt(77).isStruct  = false;
pt(77).symbol     = 'speed_controllerDec10_P.SETZERO_Gain';
pt(77).baseaddr   = '&speed_controllerDec10_P.SETZERO_Gain';
pt(77).dtname     = 'real_T';



  
pt(78).blockname = 'Sensor Read and Process/GUI/STANCE';
pt(78).paramname = 'Gain';
pt(78).class     = 'scalar';
pt(78).nrows     = 1;
pt(78).ncols     = 1;
pt(78).subsource = 'SS_DOUBLE';
pt(78).ndims     = '2';
pt(78).size      = '[]';
pt(78).isStruct  = false;
pt(78).symbol     = 'speed_controllerDec10_P.STANCE_Gain';
pt(78).baseaddr   = '&speed_controllerDec10_P.STANCE_Gain';
pt(78).dtname     = 'real_T';



  
pt(79).blockname = 'Sensor Read and Process/GUI/SWING';
pt(79).paramname = 'Gain';
pt(79).class     = 'scalar';
pt(79).nrows     = 1;
pt(79).ncols     = 1;
pt(79).subsource = 'SS_DOUBLE';
pt(79).ndims     = '2';
pt(79).size      = '[]';
pt(79).isStruct  = false;
pt(79).symbol     = 'speed_controllerDec10_P.SWING_Gain';
pt(79).baseaddr   = '&speed_controllerDec10_P.SWING_Gain';
pt(79).dtname     = 'real_T';



  
pt(80).blockname = 'Sensor Read and Process/GUI/degtorad';
pt(80).paramname = 'Gain';
pt(80).class     = 'scalar';
pt(80).nrows     = 1;
pt(80).ncols     = 1;
pt(80).subsource = 'SS_DOUBLE';
pt(80).ndims     = '2';
pt(80).size      = '[]';
pt(80).isStruct  = false;
pt(80).symbol     = 'speed_controllerDec10_P.degtorad_Gain';
pt(80).baseaddr   = '&speed_controllerDec10_P.degtorad_Gain';
pt(80).dtname     = 'real_T';



  
pt(81).blockname = 'Sensor Read and Process/Scopes/Gain1';
pt(81).paramname = 'Gain';
pt(81).class     = 'scalar';
pt(81).nrows     = 1;
pt(81).ncols     = 1;
pt(81).subsource = 'SS_DOUBLE';
pt(81).ndims     = '2';
pt(81).size      = '[]';
pt(81).isStruct  = false;
pt(81).symbol     = 'speed_controllerDec10_P.Gain1_Gain';
pt(81).baseaddr   = '&speed_controllerDec10_P.Gain1_Gain';
pt(81).dtname     = 'real_T';



  
pt(82).blockname = 'Sensor Read and Process/Scopes/Gain2';
pt(82).paramname = 'Gain';
pt(82).class     = 'scalar';
pt(82).nrows     = 1;
pt(82).ncols     = 1;
pt(82).subsource = 'SS_DOUBLE';
pt(82).ndims     = '2';
pt(82).size      = '[]';
pt(82).isStruct  = false;
pt(82).symbol     = 'speed_controllerDec10_P.Gain2_Gain';
pt(82).baseaddr   = '&speed_controllerDec10_P.Gain2_Gain';
pt(82).dtname     = 'real_T';



  
pt(83).blockname = 'Sensor Read and Process/Scopes/Gain5';
pt(83).paramname = 'Gain';
pt(83).class     = 'scalar';
pt(83).nrows     = 1;
pt(83).ncols     = 1;
pt(83).subsource = 'SS_DOUBLE';
pt(83).ndims     = '2';
pt(83).size      = '[]';
pt(83).isStruct  = false;
pt(83).symbol     = 'speed_controllerDec10_P.Gain5_Gain';
pt(83).baseaddr   = '&speed_controllerDec10_P.Gain5_Gain';
pt(83).dtname     = 'real_T';



  
pt(84).blockname = 'Sensor Read and Process/Zero Level Treadmill/calibration';
pt(84).paramname = 'Gain';
pt(84).class     = 'vector';
pt(84).nrows     = 12;
pt(84).ncols     = 1;
pt(84).subsource = 'SS_DOUBLE';
pt(84).ndims     = '2';
pt(84).size      = '[]';
pt(84).isStruct  = false;
pt(84).symbol     = 'speed_controllerDec10_P.calibration_Gain';
pt(84).baseaddr   = '&speed_controllerDec10_P.calibration_Gain[0]';
pt(84).dtname     = 'real_T';


function len = getlenPT
len = 84;

