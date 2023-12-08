/*
 * speed_controller_2017b.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "speed_controller_2017b".
 *
 * Model version              : 1.26
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Wed Nov 29 14:39:51 2023
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "speed_controller_2017b.h"
#include "speed_controller_2017b_private.h"

const real_T speed_controller_2017b_RGND = 0.0;/* real_T ground */

/* Block signals (auto storage) */
B_speed_controller_2017b_T speed_controller_2017b_B;

/* Block states (auto storage) */
DW_speed_controller_2017b_T speed_controller_2017b_DW;

/* Real-time model */
RT_MODEL_speed_controller_2017b_T speed_controller_2017b_M_;
RT_MODEL_speed_controller_2017b_T *const speed_controller_2017b_M =
  &speed_controller_2017b_M_;

/* Forward declaration for local functions */
static real_T speed_controller_2017b_nanmean(const real_T varargin_1[20]);

/* Function for MATLAB Function: '<S1>/State Determination' */
static real_T speed_controller_2017b_nanmean(const real_T varargin_1[20])
{
  real_T y;
  int32_T c;
  int32_T k;
  y = 0.0;
  c = 0;
  for (k = 0; k < 20; k++) {
    if (!rtIsNaN(varargin_1[k])) {
      y += varargin_1[k];
      c++;
    }
  }

  if (c == 0) {
    y = (rtNaN);
  } else {
    y /= (real_T)c;
  }

  return y;
}

/* Model step function */
void speed_controller_2017b_step(void)
{
  real_T tStance_avg;
  real_T pctStride;
  real_T pctStance;
  boolean_T y;
  int32_T low_i;
  int32_T low_ip1;
  int32_T high_i;
  int32_T mid_i;
  static const real_T b[16] = { -6.3999999999999986, -6.4000000000000021,
    7.1054273576010019E-15, 3.5527136788005009E-15, 5.6, 0.8000000000000016,
    -4.0000000000000044, -4.0, 1.0, 2.6, 1.8000000000000005,
    -0.20000000000000037, 0.0, 0.5, 1.1, 1.3 };

  real_T rtb_GRFvoltage[12];
  real_T rtb_SWING;
  real_T rtb_STANCE;
  real_T rtb_LOCK;
  real_T rtb_RUN;
  real_T tmp[20];
  real_T rtb_TmpSignalConversionAtSFun_0;
  boolean_T exitg1;

  /* S-Function (sg_IO101_setup_s): '<S1>/Setup1' */

  /* Level2 S-Function Block: '<S1>/Setup1' (sg_IO101_setup_s) */
  {
    SimStruct *rts = speed_controller_2017b_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO106_setup_s): '<S1>/Setup4' */

  /* Level2 S-Function Block: '<S1>/Setup4' (sg_IO106_setup_s) */
  {
    SimStruct *rts = speed_controller_2017b_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO106_ad_s): '<S1>/Analog input3' */

  /* Level2 S-Function Block: '<S1>/Analog input3' (sg_IO106_ad_s) */
  {
    SimStruct *rts = speed_controller_2017b_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  for (low_i = 0; low_i < 12; low_i++) {
    /* DiscreteFilter: '<S1>/3rd Order, 25 Hz  Butterworth Filter1' incorporates:
     *  Gain: '<S7>/calibration'
     */
    low_ip1 = low_i * 3;
    speed_controller_2017b_DW.urdOrder25HzButterworthFilter_h[low_i] =
      (((speed_controller_2017b_B.Analoginput3[low_i] -
         speed_controller_2017b_P.urdOrder25HzButterworthFilter_h[1] *
         speed_controller_2017b_DW.urdOrder25HzButterworthFilter1_[low_ip1]) -
        speed_controller_2017b_DW.urdOrder25HzButterworthFilter1_[low_ip1 + 1] *
        speed_controller_2017b_P.urdOrder25HzButterworthFilter_h[2]) -
       speed_controller_2017b_DW.urdOrder25HzButterworthFilter1_[low_ip1 + 2] *
       speed_controller_2017b_P.urdOrder25HzButterworthFilter_h[3]) /
      speed_controller_2017b_P.urdOrder25HzButterworthFilter_h[0];
    rtb_GRFvoltage[low_i] =
      (((speed_controller_2017b_P.urdOrder25HzButterworthFilter1_[0] *
         speed_controller_2017b_DW.urdOrder25HzButterworthFilter_h[low_i] +
         speed_controller_2017b_P.urdOrder25HzButterworthFilter1_[1] *
         speed_controller_2017b_DW.urdOrder25HzButterworthFilter1_[low_ip1]) +
        speed_controller_2017b_DW.urdOrder25HzButterworthFilter1_[low_ip1 + 1] *
        speed_controller_2017b_P.urdOrder25HzButterworthFilter1_[2]) +
       speed_controller_2017b_DW.urdOrder25HzButterworthFilter1_[low_ip1 + 2] *
       speed_controller_2017b_P.urdOrder25HzButterworthFilter1_[3]) *
      speed_controller_2017b_P.calibration_Gain[low_i];
  }

  /* MATLAB Function: '<S7>/Zero Level Force Plates' incorporates:
   *  Constant: '<S4>/BTzeroLeft'
   *  Constant: '<S4>/BTzeroRight'
   */
  for (low_i = 0; low_i < 6; low_i++) {
    if (speed_controller_2017b_P.BTzeroLeft_Value != 0.0) {
      speed_controller_2017b_DW.voltOff[low_i] = rtb_GRFvoltage[low_i];
    }

    if (speed_controller_2017b_P.BTzeroRight_Value != 0.0) {
      speed_controller_2017b_DW.voltOff[low_i + 6] = rtb_GRFvoltage[low_i + 6];
    }
  }

  for (low_i = 0; low_i < 12; low_i++) {
    speed_controller_2017b_B.GRF_zero[low_i] = rtb_GRFvoltage[low_i] -
      speed_controller_2017b_DW.voltOff[low_i];
  }

  /* End of MATLAB Function: '<S7>/Zero Level Force Plates' */

  /* MATLAB Function: '<S1>/measureSubjWeight' incorporates:
   *  Constant: '<S4>/BTmeasureWeight'
   *  SignalConversion: '<S8>/TmpSignal ConversionAt SFunction Inport2'
   */
  if (speed_controller_2017b_P.BTmeasureWeight_Value != 0.0) {
    speed_controller_2017b_DW.weight = speed_controller_2017b_B.GRF_zero[2];
    speed_controller_2017b_DW.weight += speed_controller_2017b_B.GRF_zero[8];
  }

  /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
   *  MATLAB Function: '<S1>/measureSubjWeight'
   */
  speed_controller_2017b_DW.subjMass = speed_controller_2017b_DW.weight;

  /* S-Function (scblock): '<S9>/S-Function' */
  /* ok to acquire for <S9>/S-Function */
  speed_controller_2017b_DW.SFunction_IWORK.AcquireOK = 1;

  /* S-Function (scblock): '<S10>/S-Function' */
  /* ok to acquire for <S10>/S-Function */
  speed_controller_2017b_DW.SFunction_IWORK_m.AcquireOK = 1;

  /* Gain: '<S4>/SWING' incorporates:
   *  Constant: '<S4>/SWING_'
   */
  rtb_SWING = speed_controller_2017b_P.SWING_Gain *
    speed_controller_2017b_P.SWING_Value;

  /* Gain: '<S4>/STANCE' incorporates:
   *  Constant: '<S4>/STANCE_'
   */
  rtb_STANCE = speed_controller_2017b_P.STANCE_Gain *
    speed_controller_2017b_P.STANCE_Value;

  /* Gain: '<S4>/LOCK' incorporates:
   *  Constant: '<S4>/LOCK_'
   */
  rtb_LOCK = speed_controller_2017b_P.LOCK_Gain *
    speed_controller_2017b_P.LOCK_Value;

  /* Gain: '<S4>/RUN' incorporates:
   *  Constant: '<S4>/RUN_'
   */
  rtb_RUN = speed_controller_2017b_P.RUN_Gain *
    speed_controller_2017b_P.RUN_Value;

  /* MATLAB Function: '<S1>/State Determination' incorporates:
   *  BusCreator: '<S1>/BusConversion_InsertedFor_State Determination_at_inport_1'
   *  Constant: '<S1>/GRF_Threshold_Down'
   *  Constant: '<S1>/GRF_Threshold_Up'
   *  Constant: '<S4>/BTresetStateVariables'
   */
  if (!speed_controller_2017b_DW.strideStateR_not_empty) {
    speed_controller_2017b_DW.strideStateR = rtb_STANCE;
    speed_controller_2017b_DW.strideStateR_not_empty = true;
  }

  if (speed_controller_2017b_P.BTresetStateVariables_Value != 0.0) {
    for (low_i = 0; low_i < 20; low_i++) {
      speed_controller_2017b_DW.tStride_array[low_i] = 1.05;
      speed_controller_2017b_DW.tStance_array[low_i] = 0.65;
    }
  }

  if (rtb_SWING == speed_controller_2017b_DW.strideStateR) {
    low_i = 0;
  } else if (rtb_STANCE == speed_controller_2017b_DW.strideStateR) {
    low_i = 1;
  } else {
    low_i = -1;
  }

  switch (low_i) {
   case 0:
    if ((speed_controller_2017b_B.GRF_zero[8] >
         speed_controller_2017b_P.GRF_Threshold_Up_Value) &&
        (speed_controller_2017b_DW.tSwing > 0.25)) {
      tmp[0] = speed_controller_2017b_DW.tStride;
      memcpy(&tmp[1], &speed_controller_2017b_DW.tStride_array[0], 19U * sizeof
             (real_T));
      memcpy(&speed_controller_2017b_DW.tStride_array[0], &tmp[0], 20U * sizeof
             (real_T));
      speed_controller_2017b_DW.tStride = 0.0;
      speed_controller_2017b_DW.tStance = 0.0;
      speed_controller_2017b_DW.strideStateR = rtb_STANCE;
    }
    break;

   case 1:
    if (speed_controller_2017b_B.GRF_zero[8] <
        speed_controller_2017b_P.GRF_Threshold_Down_Value) {
      tmp[0] = speed_controller_2017b_DW.tStance;
      memcpy(&tmp[1], &speed_controller_2017b_DW.tStance_array[0], 19U * sizeof
             (real_T));
      memcpy(&speed_controller_2017b_DW.tStance_array[0], &tmp[0], 20U * sizeof
             (real_T));
      speed_controller_2017b_DW.tStance = 0.0;
      speed_controller_2017b_DW.tSwing = 0.0;
      speed_controller_2017b_DW.strideStateR = rtb_SWING;
    }
    break;
  }

  rtb_STANCE = speed_controller_2017b_nanmean
    (speed_controller_2017b_DW.tStride_array);
  tStance_avg = speed_controller_2017b_nanmean
    (speed_controller_2017b_DW.tStance_array);
  pctStride = speed_controller_2017b_DW.tStride / rtb_STANCE;
  if (pctStride > 1.0) {
    pctStride = 1.0;
  }

  pctStance = speed_controller_2017b_DW.tStance / tStance_avg;
  if (pctStance > 1.0) {
    pctStance = 1.0;
  }

  speed_controller_2017b_DW.tStride += 0.001;
  speed_controller_2017b_DW.tStance += 0.001;
  speed_controller_2017b_DW.tSwing += 0.001;
  speed_controller_2017b_B.tStride_out = speed_controller_2017b_DW.tStride;

  /* Gain: '<S1>/Gain3' incorporates:
   *  MATLAB Function: '<S1>/State Determination'
   */
  speed_controller_2017b_B.strideStateR = speed_controller_2017b_P.Gain3_Gain *
    speed_controller_2017b_DW.strideStateR;

  /* Gain: '<S5>/Gain3' incorporates:
   *  Sum: '<S5>/Sum'
   */
  speed_controller_2017b_B.strideStateRight =
    (speed_controller_2017b_B.strideStateR - rtb_SWING) *
    speed_controller_2017b_P.Gain3_Gain_b;

  /* Gain: '<S5>/Gain6' */
  speed_controller_2017b_B.vGRFLeftN = speed_controller_2017b_P.Gain6_Gain *
    speed_controller_2017b_B.GRF_zero[2];

  /* Gain: '<S5>/Gain7' */
  speed_controller_2017b_B.vGRFRightN = speed_controller_2017b_P.Gain7_Gain *
    speed_controller_2017b_B.GRF_zero[8];

  /* MATLAB Function: '<S1>/Control modes' incorporates:
   *  BusCreator: '<S1>/BusConversion_InsertedFor_Control modes_at_inport_1'
   *  Constant: '<S4>/BTLock'
   *  Constant: '<S4>/BTRun'
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  y = true;
  low_i = 0;
  exitg1 = false;
  while ((!exitg1) && (low_i < 2)) {
    if (!(speed_controller_2017b_DW.UnitDelay1_DSTATE[low_i] == -1.0)) {
      y = false;
      exitg1 = true;
    } else {
      low_i++;
    }
  }

  if (y) {
    rtb_TmpSignalConversionAtSFun_0 = rtb_LOCK;
  } else {
    rtb_TmpSignalConversionAtSFun_0 =
      speed_controller_2017b_DW.UnitDelay1_DSTATE[1];
  }

  if (speed_controller_2017b_P.BTRun_Value != 0.0) {
    rtb_TmpSignalConversionAtSFun_0 = rtb_RUN;
  } else {
    if (speed_controller_2017b_P.BTLock_Value != 0.0) {
      rtb_TmpSignalConversionAtSFun_0 = rtb_LOCK;
    }
  }

  /* End of MATLAB Function: '<S1>/Control modes' */

  /* Gain: '<S1>/Gain4' incorporates:
   *  MATLAB Function: '<S1>/State Determination'
   */
  speed_controller_2017b_B.tStride_avg = speed_controller_2017b_P.Gain4_Gain *
    rtb_STANCE;

  /* Gain: '<S1>/Gain5' incorporates:
   *  MATLAB Function: '<S1>/State Determination'
   */
  speed_controller_2017b_B.tStance_avg = speed_controller_2017b_P.Gain5_Gain *
    tStance_avg;

  /* Gain: '<S1>/Gain8' incorporates:
   *  MATLAB Function: '<S1>/State Determination'
   */
  speed_controller_2017b_B.pctStride = speed_controller_2017b_P.Gain8_Gain *
    pctStride;

  /* Gain: '<S1>/Gain9' incorporates:
   *  MATLAB Function: '<S1>/State Determination'
   */
  speed_controller_2017b_B.pctStance = speed_controller_2017b_P.Gain9_Gain *
    pctStance;

  /* MATLAB Function: '<Root>/controller' incorporates:
   *  BusCreator: '<Root>/BusConversion_InsertedFor_controller_at_inport_1'
   *  BusCreator: '<Root>/BusConversion_InsertedFor_controller_at_inport_4'
   */
  rtb_SWING = 0.0;
  if (rtb_LOCK == rtb_TmpSignalConversionAtSFun_0) {
    low_i = 0;
  } else if (rtb_RUN == rtb_TmpSignalConversionAtSFun_0) {
    low_i = 1;
  } else {
    low_i = -1;
  }

  switch (low_i) {
   case 0:
    break;

   case 1:
    if (speed_controller_2017b_B.strideStateR == 1.0) {
      if (rtIsNaN(speed_controller_2017b_B.pctStride)) {
        rtb_SWING = speed_controller_2017b_B.pctStride;
      } else {
        low_i = 0;
        low_ip1 = 2;
        high_i = 5;
        while (high_i > low_ip1) {
          mid_i = ((low_i + high_i) + 1) >> 1;
          if (speed_controller_2017b_B.pctStride >= ((real_T)mid_i - 1.0) * 0.25)
          {
            low_i = mid_i - 1;
            low_ip1 = mid_i + 1;
          } else {
            high_i = mid_i;
          }
        }

        rtb_LOCK = speed_controller_2017b_B.pctStride - 0.25 * (real_T)low_i;
        rtb_SWING = ((rtb_LOCK * b[low_i] + b[low_i + 4]) * rtb_LOCK + b[low_i +
                     8]) * rtb_LOCK + b[low_i + 12];
      }
    }
    break;
  }

  speed_controller_2017b_B.print = 0.0;

  /* Saturate: '<Root>/Saturation' */
  if (rtb_SWING > speed_controller_2017b_P.Saturation_UpperSat) {
    speed_controller_2017b_B.Saturation =
      speed_controller_2017b_P.Saturation_UpperSat;
  } else if (rtb_SWING < speed_controller_2017b_P.Saturation_LowerSat) {
    speed_controller_2017b_B.Saturation =
      speed_controller_2017b_P.Saturation_LowerSat;
  } else {
    speed_controller_2017b_B.Saturation = rtb_SWING;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* Constant: '<Root>/Constant2' */
  speed_controller_2017b_B.Constant2 = speed_controller_2017b_P.Constant2_Value;

  /* S-Function (sg_IO101_da_s): '<Root>/Analog output' */

  /* Level2 S-Function Block: '<Root>/Analog output' (sg_IO101_da_s) */
  {
    SimStruct *rts = speed_controller_2017b_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* Update for DiscreteFilter: '<S1>/3rd Order, 25 Hz  Butterworth Filter1' */
  for (low_i = 0; low_i < 12; low_i++) {
    low_ip1 = low_i * 3;
    speed_controller_2017b_DW.urdOrder25HzButterworthFilter1_[low_ip1 + 2] =
      speed_controller_2017b_DW.urdOrder25HzButterworthFilter1_[low_ip1 + 1];
    speed_controller_2017b_DW.urdOrder25HzButterworthFilter1_[low_ip1 + 1] =
      speed_controller_2017b_DW.urdOrder25HzButterworthFilter1_[low_ip1];
    speed_controller_2017b_DW.urdOrder25HzButterworthFilter1_[low_ip1] =
      speed_controller_2017b_DW.urdOrder25HzButterworthFilter_h[low_i];
  }

  /* End of Update for DiscreteFilter: '<S1>/3rd Order, 25 Hz  Butterworth Filter1' */

  /* Update for UnitDelay: '<S1>/Unit Delay1' incorporates:
   *  MATLAB Function: '<Root>/controller'
   */
  speed_controller_2017b_DW.UnitDelay1_DSTATE[0] = rtb_SWING;
  speed_controller_2017b_DW.UnitDelay1_DSTATE[1] = 0.0;

  /* Matfile logging */
  rt_UpdateTXYLogVars(speed_controller_2017b_M->rtwLogInfo,
                      (speed_controller_2017b_M->Timing.t));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.001s, 0.0s] */
    if ((rtmGetTFinal(speed_controller_2017b_M)!=-1) &&
        !((rtmGetTFinal(speed_controller_2017b_M)-
           speed_controller_2017b_M->Timing.t[0]) >
          speed_controller_2017b_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(speed_controller_2017b_M, "Simulation finished");
    }

    if (rtmGetStopRequested(speed_controller_2017b_M)) {
      rtmSetErrorStatus(speed_controller_2017b_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++speed_controller_2017b_M->Timing.clockTick0)) {
    ++speed_controller_2017b_M->Timing.clockTickH0;
  }

  speed_controller_2017b_M->Timing.t[0] =
    speed_controller_2017b_M->Timing.clockTick0 *
    speed_controller_2017b_M->Timing.stepSize0 +
    speed_controller_2017b_M->Timing.clockTickH0 *
    speed_controller_2017b_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void speed_controller_2017b_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)speed_controller_2017b_M, 0,
                sizeof(RT_MODEL_speed_controller_2017b_T));
  rtsiSetSolverName(&speed_controller_2017b_M->solverInfo,"FixedStepDiscrete");
  speed_controller_2017b_M->solverInfoPtr =
    (&speed_controller_2017b_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = speed_controller_2017b_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    speed_controller_2017b_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    speed_controller_2017b_M->Timing.sampleTimes =
      (&speed_controller_2017b_M->Timing.sampleTimesArray[0]);
    speed_controller_2017b_M->Timing.offsetTimes =
      (&speed_controller_2017b_M->Timing.offsetTimesArray[0]);

    /* task periods */
    speed_controller_2017b_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    speed_controller_2017b_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(speed_controller_2017b_M, &speed_controller_2017b_M->Timing.tArray
             [0]);

  {
    int_T *mdlSampleHits = speed_controller_2017b_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    speed_controller_2017b_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(speed_controller_2017b_M, -1);
  speed_controller_2017b_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    speed_controller_2017b_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(speed_controller_2017b_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(speed_controller_2017b_M->rtwLogInfo, (NULL));
    rtliSetLogT(speed_controller_2017b_M->rtwLogInfo, "tout");
    rtliSetLogX(speed_controller_2017b_M->rtwLogInfo, "");
    rtliSetLogXFinal(speed_controller_2017b_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(speed_controller_2017b_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(speed_controller_2017b_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(speed_controller_2017b_M->rtwLogInfo, 0);
    rtliSetLogDecimation(speed_controller_2017b_M->rtwLogInfo, 1);
    rtliSetLogY(speed_controller_2017b_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(speed_controller_2017b_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(speed_controller_2017b_M->rtwLogInfo, (NULL));
  }

  speed_controller_2017b_M->solverInfoPtr =
    (&speed_controller_2017b_M->solverInfo);
  speed_controller_2017b_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&speed_controller_2017b_M->solverInfo, 0.001);
  rtsiSetSolverMode(&speed_controller_2017b_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) memset(((void *) &speed_controller_2017b_B), 0,
                sizeof(B_speed_controller_2017b_T));

  /* states (dwork) */
  (void) memset((void *)&speed_controller_2017b_DW, 0,
                sizeof(DW_speed_controller_2017b_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &speed_controller_2017b_M->NonInlinedSFcns.sfcnInfo;
    speed_controller_2017b_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(speed_controller_2017b_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &speed_controller_2017b_M->Sizes.numSampTimes);
    speed_controller_2017b_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (speed_controller_2017b_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,
                   speed_controller_2017b_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(speed_controller_2017b_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(speed_controller_2017b_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (speed_controller_2017b_M));
    rtssSetStepSizePtr(sfcnInfo, &speed_controller_2017b_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (speed_controller_2017b_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &speed_controller_2017b_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &speed_controller_2017b_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &speed_controller_2017b_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &speed_controller_2017b_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &speed_controller_2017b_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &speed_controller_2017b_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &speed_controller_2017b_M->solverInfoPtr);
  }

  speed_controller_2017b_M->Sizes.numSFcns = (4);

  /* register each child */
  {
    (void) memset((void *)
                  &speed_controller_2017b_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  4*sizeof(SimStruct));
    speed_controller_2017b_M->childSfunctions =
      (&speed_controller_2017b_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    speed_controller_2017b_M->childSfunctions[0] =
      (&speed_controller_2017b_M->NonInlinedSFcns.childSFunctions[0]);
    speed_controller_2017b_M->childSfunctions[1] =
      (&speed_controller_2017b_M->NonInlinedSFcns.childSFunctions[1]);
    speed_controller_2017b_M->childSfunctions[2] =
      (&speed_controller_2017b_M->NonInlinedSFcns.childSFunctions[2]);
    speed_controller_2017b_M->childSfunctions[3] =
      (&speed_controller_2017b_M->NonInlinedSFcns.childSFunctions[3]);

    /* Level2 S-Function Block: speed_controller_2017b/<S1>/Setup1 (sg_IO101_setup_s) */
    {
      SimStruct *rts = speed_controller_2017b_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        speed_controller_2017b_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        speed_controller_2017b_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        speed_controller_2017b_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speed_controller_2017b_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speed_controller_2017b_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speed_controller_2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speed_controller_2017b_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speed_controller_2017b_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speed_controller_2017b_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speed_controller_2017b_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &speed_controller_2017b_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "Setup1");
      ssSetPath(rts, "speed_controller_2017b/Sensor Read and Process/Setup1");
      ssSetRTModel(rts,speed_controller_2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)speed_controller_2017b_P.Setup1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)speed_controller_2017b_P.Setup1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)speed_controller_2017b_P.Setup1_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &speed_controller_2017b_DW.Setup1_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speed_controller_2017b_DW.Setup1_IWORK);
      }

      /* registration */
      sg_IO101_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speed_controller_2017b/<S1>/Setup4 (sg_IO106_setup_s) */
    {
      SimStruct *rts = speed_controller_2017b_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        speed_controller_2017b_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        speed_controller_2017b_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        speed_controller_2017b_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speed_controller_2017b_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speed_controller_2017b_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speed_controller_2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speed_controller_2017b_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speed_controller_2017b_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speed_controller_2017b_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speed_controller_2017b_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &speed_controller_2017b_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* path info */
      ssSetModelName(rts, "Setup4");
      ssSetPath(rts, "speed_controller_2017b/Sensor Read and Process/Setup4");
      ssSetRTModel(rts,speed_controller_2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)speed_controller_2017b_P.Setup4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)speed_controller_2017b_P.Setup4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)speed_controller_2017b_P.Setup4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)speed_controller_2017b_P.Setup4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)speed_controller_2017b_P.Setup4_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)speed_controller_2017b_P.Setup4_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)speed_controller_2017b_P.Setup4_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &speed_controller_2017b_DW.Setup4_RWORK[0]);
      ssSetIWork(rts, (int_T *) &speed_controller_2017b_DW.Setup4_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speed_controller_2017b_DW.Setup4_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speed_controller_2017b_DW.Setup4_IWORK[0]);
      }

      /* registration */
      sg_IO106_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speed_controller_2017b/<S1>/Analog input3 (sg_IO106_ad_s) */
    {
      SimStruct *rts = speed_controller_2017b_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        speed_controller_2017b_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        speed_controller_2017b_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        speed_controller_2017b_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speed_controller_2017b_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speed_controller_2017b_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speed_controller_2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speed_controller_2017b_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speed_controller_2017b_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speed_controller_2017b_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speed_controller_2017b_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &speed_controller_2017b_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 20);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            speed_controller_2017b_B.Analoginput3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Analog input3");
      ssSetPath(rts,
                "speed_controller_2017b/Sensor Read and Process/Analog input3");
      ssSetRTModel(rts,speed_controller_2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speed_controller_2017b_P.Analoginput3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speed_controller_2017b_P.Analoginput3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speed_controller_2017b_P.Analoginput3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speed_controller_2017b_P.Analoginput3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speed_controller_2017b_P.Analoginput3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speed_controller_2017b_P.Analoginput3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speed_controller_2017b_P.Analoginput3_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &speed_controller_2017b_DW.Analoginput3_RWORK[0]);
      ssSetIWork(rts, (int_T *) &speed_controller_2017b_DW.Analoginput3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speed_controller_2017b_DW.Analoginput3_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speed_controller_2017b_DW.Analoginput3_IWORK[0]);
      }

      /* registration */
      sg_IO106_ad_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speed_controller_2017b/<Root>/Analog output (sg_IO101_da_s) */
    {
      SimStruct *rts = speed_controller_2017b_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        speed_controller_2017b_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        speed_controller_2017b_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        speed_controller_2017b_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speed_controller_2017b_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speed_controller_2017b_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speed_controller_2017b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speed_controller_2017b_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speed_controller_2017b_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speed_controller_2017b_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speed_controller_2017b_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &speed_controller_2017b_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 4);
        ssSetPortInfoForInputs(rts,
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &speed_controller_2017b_B.Saturation);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &speed_controller_2017b_B.Constant2);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, (real_T*)&speed_controller_2017b_RGND);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, (real_T*)&speed_controller_2017b_RGND);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Analog output");
      ssSetPath(rts, "speed_controller_2017b/Analog output");
      ssSetRTModel(rts,speed_controller_2017b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speed_controller_2017b_P.Analogoutput_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speed_controller_2017b_P.Analogoutput_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speed_controller_2017b_P.Analogoutput_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speed_controller_2017b_P.Analogoutput_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speed_controller_2017b_P.Analogoutput_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &speed_controller_2017b_DW.Analogoutput_RWORK[0]);
      ssSetIWork(rts, (int_T *) &speed_controller_2017b_DW.Analogoutput_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speed_controller_2017b_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 16);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speed_controller_2017b_DW.Analogoutput_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speed_controller_2017b_DW.Analogoutput_IWORK[0]);
      }

      /* registration */
      sg_IO101_da_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 0);
      _ssSetInputPortConnected(rts, 3, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
    }
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(speed_controller_2017b_M->rtwLogInfo, 0.0,
    rtmGetTFinal(speed_controller_2017b_M),
    speed_controller_2017b_M->Timing.stepSize0, (&rtmGetErrorStatus
    (speed_controller_2017b_M)));

  /* Start for S-Function (sg_IO101_setup_s): '<S1>/Setup1' */
  /* Level2 S-Function Block: '<S1>/Setup1' (sg_IO101_setup_s) */
  {
    SimStruct *rts = speed_controller_2017b_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO106_setup_s): '<S1>/Setup4' */
  /* Level2 S-Function Block: '<S1>/Setup4' (sg_IO106_setup_s) */
  {
    SimStruct *rts = speed_controller_2017b_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO106_ad_s): '<S1>/Analog input3' */
  /* Level2 S-Function Block: '<S1>/Analog input3' (sg_IO106_ad_s) */
  {
    SimStruct *rts = speed_controller_2017b_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scblock): '<S9>/S-Function' */

  /* S-Function Block: <S9>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(9)) == 0) {
      if ((i = rl32eDefScope(9,2)) != 0) {
        printf("Error creating scope 9\n");
      } else {
        rl32eSetScope(9, 4, 6000);
        rl32eSetScope(9, 5, 0);
        rl32eSetScope(9, 6, 1);
        rl32eSetScope(9, 0, 0);
        rl32eSetScope(9, 1, 0.0);
        rl32eSetScope(9, 2, 0);
        rl32eSetScope(9, 9, 0);
        rl32eSetTargetScope(9, 1, 3.0);
        rl32eSetTargetScope(9, 11, 0.0);
        rl32eSetTargetScope(9, 10, 0.0);
        xpceScopeAcqOK(9, &speed_controller_2017b_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(9);
    }
  }

  /* Start for S-Function (scblock): '<S10>/S-Function' */

  /* S-Function Block: <S10>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(5)) == 0) {
      if ((i = rl32eDefScope(5,3)) != 0) {
        printf("Error creating scope 5\n");
      } else {
        rl32eSetScope(5, 4, 300000);
        rl32eSetScope(5, 5, 0);
        rl32eSetScope(5, 6, 2);
        rl32eSetScope(5, 0, 0);
        xpceFSScopeSet(5, "steptest.dat", 0, 512, 0, 536870912);
        rl32eSetScope (5, 10, 0);
        rl32eSetScope(5, 1, 0.0);
        rl32eSetScope(5, 2, 0);
        rl32eSetScope(5, 9, 0);
        xpceScopeAcqOK(5, &speed_controller_2017b_DW.SFunction_IWORK_m.AcquireOK);
      }
    }
  }

  /* Start for DataStoreMemory: '<S1>/subjMass' */
  speed_controller_2017b_DW.subjMass =
    speed_controller_2017b_P.subjMass_InitialValue;

  /* Start for Constant: '<Root>/Constant2' */
  speed_controller_2017b_B.Constant2 = speed_controller_2017b_P.Constant2_Value;

  /* Start for S-Function (sg_IO101_da_s): '<Root>/Analog output' */
  /* Level2 S-Function Block: '<Root>/Analog output' (sg_IO101_da_s) */
  {
    SimStruct *rts = speed_controller_2017b_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  {
    int32_T i;

    /* InitializeConditions for DiscreteFilter: '<S1>/3rd Order, 25 Hz  Butterworth Filter1' */
    for (i = 0; i < 36; i++) {
      speed_controller_2017b_DW.urdOrder25HzButterworthFilter1_[i] =
        speed_controller_2017b_P.urdOrder25HzButterworthFilter_e;
    }

    /* End of InitializeConditions for DiscreteFilter: '<S1>/3rd Order, 25 Hz  Butterworth Filter1' */

    /* InitializeConditions for UnitDelay: '<S1>/Unit Delay1' */
    speed_controller_2017b_DW.UnitDelay1_DSTATE[0] =
      speed_controller_2017b_P.UnitDelay1_InitialCondition[0];
    speed_controller_2017b_DW.UnitDelay1_DSTATE[1] =
      speed_controller_2017b_P.UnitDelay1_InitialCondition[1];

    /* SystemInitialize for MATLAB Function: '<S7>/Zero Level Force Plates' */
    memset(&speed_controller_2017b_DW.voltOff[0], 0, 12U * sizeof(real_T));

    /* SystemInitialize for MATLAB Function: '<S1>/measureSubjWeight' */
    speed_controller_2017b_DW.weight = 0.0;

    /* SystemInitialize for MATLAB Function: '<S1>/State Determination' */
    speed_controller_2017b_DW.strideStateR_not_empty = false;
    speed_controller_2017b_DW.tStride = 0.0;
    speed_controller_2017b_DW.tStance = 0.0;
    speed_controller_2017b_DW.tSwing = 0.0;
    for (i = 0; i < 20; i++) {
      speed_controller_2017b_DW.tStride_array[i] = 1.05;
      speed_controller_2017b_DW.tStance_array[i] = 0.65;
    }

    /* End of SystemInitialize for MATLAB Function: '<S1>/State Determination' */
  }
}

/* Model terminate function */
void speed_controller_2017b_terminate(void)
{
  /* Terminate for S-Function (sg_IO101_setup_s): '<S1>/Setup1' */
  /* Level2 S-Function Block: '<S1>/Setup1' (sg_IO101_setup_s) */
  {
    SimStruct *rts = speed_controller_2017b_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO106_setup_s): '<S1>/Setup4' */
  /* Level2 S-Function Block: '<S1>/Setup4' (sg_IO106_setup_s) */
  {
    SimStruct *rts = speed_controller_2017b_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO106_ad_s): '<S1>/Analog input3' */
  /* Level2 S-Function Block: '<S1>/Analog input3' (sg_IO106_ad_s) */
  {
    SimStruct *rts = speed_controller_2017b_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO101_da_s): '<Root>/Analog output' */
  /* Level2 S-Function Block: '<Root>/Analog output' (sg_IO101_da_s) */
  {
    SimStruct *rts = speed_controller_2017b_M->childSfunctions[3];
    sfcnTerminate(rts);
  }
}
