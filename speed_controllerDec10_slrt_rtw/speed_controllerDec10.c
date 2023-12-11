/*
 * speed_controllerDec10.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "speed_controllerDec10".
 *
 * Model version              : 1.6
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Sun Dec 10 16:43:53 2023
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "speed_controllerDec10_capi.h"
#include "speed_controllerDec10.h"
#include "speed_controllerDec10_private.h"

const real_T speed_controllerDec10_RGND = 0.0;/* real_T ground */

/* Block signals (auto storage) */
B_speed_controllerDec10_T speed_controllerDec10_B;

/* Block states (auto storage) */
DW_speed_controllerDec10_T speed_controllerDec10_DW;

/* Real-time model */
RT_MODEL_speed_controllerDec10_T speed_controllerDec10_M_;
RT_MODEL_speed_controllerDec10_T *const speed_controllerDec10_M =
  &speed_controllerDec10_M_;

/* Forward declaration for local functions */
static real_T speed_controllerDec10_nanmean(const real_T varargin_1[20]);
static real_T speed_controllerDec10_pchip(const real_T x_data[], const int32_T
  x_size[2], const real_T y_data[], const int32_T y_size[2], real_T xx);

/* Function for MATLAB Function: '<S1>/State Determination' */
static real_T speed_controllerDec10_nanmean(const real_T varargin_1[20])
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

/* Function for MATLAB Function: '<Root>/controller1' */
static real_T speed_controllerDec10_pchip(const real_T x_data[], const int32_T
  x_size[2], const real_T y_data[], const int32_T y_size[2], real_T xx)
{
  real_T v;
  int32_T nx;
  real_T h_data[3];
  real_T del_data[3];
  real_T slopes_data[4];
  real_T hs3;
  real_T w1;
  real_T pp_breaks_data[4];
  real_T pp_coefs_data[12];
  real_T signd1;
  int32_T low_ip1;
  int32_T high_i;
  int32_T mid_i;
  int32_T pp_breaks_size_idx_1;
  nx = x_size[1] - 1;
  for (low_ip1 = 1; low_ip1 <= nx; low_ip1++) {
    h_data[low_ip1 - 1] = x_data[low_ip1] - x_data[low_ip1 - 1];
  }

  for (low_ip1 = 0; low_ip1 + 1 <= nx; low_ip1++) {
    del_data[low_ip1] = (y_data[low_ip1 + 1] - y_data[low_ip1]) / h_data[low_ip1];
  }

  high_i = (int8_T)y_size[1];
  if (x_size[1] == 2) {
    slopes_data[0] = del_data[0];
    slopes_data[1] = del_data[0];
  } else {
    for (low_ip1 = 1; low_ip1 < nx; low_ip1++) {
      signd1 = h_data[low_ip1 - 1] + h_data[low_ip1];
      hs3 = 3.0 * signd1;
      w1 = (h_data[low_ip1 - 1] + signd1) / hs3;
      signd1 = (h_data[low_ip1] + signd1) / hs3;
      hs3 = 0.0;
      if (del_data[low_ip1 - 1] < 0.0) {
        if (del_data[low_ip1] <= del_data[low_ip1 - 1]) {
          hs3 = del_data[low_ip1 - 1] / (del_data[low_ip1 - 1] /
            del_data[low_ip1] * w1 + signd1);
        } else {
          if (del_data[low_ip1] < 0.0) {
            hs3 = del_data[low_ip1] / (del_data[low_ip1] / del_data[low_ip1 - 1]
              * signd1 + w1);
          }
        }
      } else {
        if (del_data[low_ip1 - 1] > 0.0) {
          if (del_data[low_ip1] >= del_data[low_ip1 - 1]) {
            hs3 = del_data[low_ip1 - 1] / (del_data[low_ip1 - 1] /
              del_data[low_ip1] * w1 + signd1);
          } else {
            if (del_data[low_ip1] > 0.0) {
              hs3 = del_data[low_ip1] / (del_data[low_ip1] / del_data[low_ip1 -
                1] * signd1 + w1);
            }
          }
        }
      }

      slopes_data[low_ip1] = hs3;
    }

    w1 = ((2.0 * h_data[0] + h_data[1]) * del_data[0] - h_data[0] * del_data[1])
      / (h_data[0] + h_data[1]);
    hs3 = del_data[0];
    if (hs3 < 0.0) {
      signd1 = -1.0;
    } else if (hs3 > 0.0) {
      signd1 = 1.0;
    } else if (hs3 == 0.0) {
      signd1 = 0.0;
    } else {
      signd1 = (rtNaN);
    }

    if (w1 < 0.0) {
      hs3 = -1.0;
    } else if (w1 > 0.0) {
      hs3 = 1.0;
    } else if (w1 == 0.0) {
      hs3 = 0.0;
    } else {
      hs3 = (rtNaN);
    }

    if (hs3 != signd1) {
      w1 = 0.0;
    } else {
      hs3 = del_data[1];
      if (hs3 < 0.0) {
        hs3 = -1.0;
      } else if (hs3 > 0.0) {
        hs3 = 1.0;
      } else if (hs3 == 0.0) {
        hs3 = 0.0;
      } else {
        hs3 = (rtNaN);
      }

      if ((signd1 != hs3) && (fabs(w1) > fabs(3.0 * del_data[0]))) {
        w1 = 3.0 * del_data[0];
      }
    }

    slopes_data[0] = w1;
    w1 = ((h_data[x_size[1] - 2] * 2.0 + h_data[x_size[1] - 3]) *
          del_data[x_size[1] - 2] - h_data[x_size[1] - 2] * del_data[x_size[1] -
          3]) / (h_data[x_size[1] - 2] + h_data[x_size[1] - 3]);
    hs3 = del_data[x_size[1] - 2];
    if (hs3 < 0.0) {
      signd1 = -1.0;
    } else if (hs3 > 0.0) {
      signd1 = 1.0;
    } else if (hs3 == 0.0) {
      signd1 = 0.0;
    } else {
      signd1 = (rtNaN);
    }

    if (w1 < 0.0) {
      hs3 = -1.0;
    } else if (w1 > 0.0) {
      hs3 = 1.0;
    } else if (w1 == 0.0) {
      hs3 = 0.0;
    } else {
      hs3 = (rtNaN);
    }

    if (hs3 != signd1) {
      w1 = 0.0;
    } else {
      hs3 = del_data[x_size[1] - 3];
      if (hs3 < 0.0) {
        hs3 = -1.0;
      } else if (hs3 > 0.0) {
        hs3 = 1.0;
      } else if (hs3 == 0.0) {
        hs3 = 0.0;
      } else {
        hs3 = (rtNaN);
      }

      if ((signd1 != hs3) && (fabs(w1) > fabs(del_data[x_size[1] - 2] * 3.0))) {
        w1 = del_data[x_size[1] - 2] * 3.0;
      }
    }

    slopes_data[x_size[1] - 1] = w1;
  }

  pp_breaks_size_idx_1 = x_size[1];
  nx = x_size[1];
  if (0 <= nx - 1) {
    memcpy(&pp_breaks_data[0], &x_data[0], nx * sizeof(real_T));
  }

  nx = high_i - 1;
  for (low_ip1 = 0; low_ip1 + 1 < x_size[1]; low_ip1++) {
    w1 = (del_data[low_ip1] - slopes_data[low_ip1]) / h_data[low_ip1];
    signd1 = (slopes_data[low_ip1 + 1] - del_data[low_ip1]) / h_data[low_ip1];
    pp_coefs_data[low_ip1] = (signd1 - w1) / h_data[low_ip1];
    pp_coefs_data[nx + low_ip1] = 2.0 * w1 - signd1;
    pp_coefs_data[(nx << 1) + low_ip1] = slopes_data[low_ip1];
    pp_coefs_data[3 * nx + low_ip1] = y_data[low_ip1];
  }

  if (rtIsNaN(xx)) {
    v = xx;
  } else {
    nx = 1;
    low_ip1 = 2;
    high_i = pp_breaks_size_idx_1;
    while (high_i > low_ip1) {
      mid_i = (nx >> 1) + (high_i >> 1);
      if (((nx & 1) == 1) && ((high_i & 1) == 1)) {
        mid_i++;
      }

      if (xx >= pp_breaks_data[mid_i - 1]) {
        nx = mid_i;
        low_ip1 = mid_i + 1;
      } else {
        high_i = mid_i;
      }
    }

    w1 = xx - pp_breaks_data[nx - 1];
    v = pp_coefs_data[nx - 1];
    v = pp_coefs_data[(nx + pp_breaks_size_idx_1) - 2] + w1 * v;
    v = pp_coefs_data[(((pp_breaks_size_idx_1 - 1) << 1) + nx) - 1] + w1 * v;
    v = pp_coefs_data[((pp_breaks_size_idx_1 - 1) * 3 + nx) - 1] + w1 * v;
  }

  return v;
}

/* Model output function */
static void speed_controllerDec10_output(void)
{
  int32_T memOffset;
  boolean_T result;
  real_T tStride_avg;
  real_T tStance_avg;
  real_T tSwing_avg;
  real_T pctSwing;
  real_T pctStride;
  real_T pctStance;
  real_T NodeSpeed_data[4];
  real_T NodePercent_data[4];
  int32_T i;
  real_T tmp[20];
  int32_T NodeSpeed_size[2];
  int32_T NodePercent_size[2];
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  boolean_T exitg1;

  /* S-Function (sg_IO101_setup_s): '<S1>/Setup1' */

  /* Level2 S-Function Block: '<S1>/Setup1' (sg_IO101_setup_s) */
  {
    SimStruct *rts = speed_controllerDec10_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO106_setup_s): '<S1>/Setup4' */

  /* Level2 S-Function Block: '<S1>/Setup4' (sg_IO106_setup_s) */
  {
    SimStruct *rts = speed_controllerDec10_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* BusCreator: '<S1>/BusConversion_InsertedFor_measureSubjWeight_at_inport_0' incorporates:
   *  Constant: '<S4>/BTmeasureWeight'
   *  Constant: '<S4>/BTzeroLeft'
   *  Constant: '<S4>/BTzeroRight'
   */
  speed_controllerDec10_B.BusConversion_InsertedFor_measu.BTmeasureWeight =
    speed_controllerDec10_P.BTmeasureWeight_Value;
  speed_controllerDec10_B.BusConversion_InsertedFor_measu.BTzeroLeft =
    speed_controllerDec10_P.BTzeroLeft_Value;
  speed_controllerDec10_B.BusConversion_InsertedFor_measu.BTzeroRight =
    speed_controllerDec10_P.BTzeroRight_Value;

  /* BusCreator: '<S7>/BusConversion_InsertedFor_Zero Level Force Plates_at_inport_0' incorporates:
   *  Constant: '<S4>/BTmeasureWeight'
   *  Constant: '<S4>/BTzeroLeft'
   *  Constant: '<S4>/BTzeroRight'
   */
  speed_controllerDec10_B.BusConversion_InsertedFor_ZeroL.BTmeasureWeight =
    speed_controllerDec10_P.BTmeasureWeight_Value;
  speed_controllerDec10_B.BusConversion_InsertedFor_ZeroL.BTzeroLeft =
    speed_controllerDec10_P.BTzeroLeft_Value;
  speed_controllerDec10_B.BusConversion_InsertedFor_ZeroL.BTzeroRight =
    speed_controllerDec10_P.BTzeroRight_Value;

  /* S-Function (sg_IO106_ad_s): '<S1>/Analog input3' */

  /* Level2 S-Function Block: '<S1>/Analog input3' (sg_IO106_ad_s) */
  {
    SimStruct *rts = speed_controllerDec10_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* DiscreteFilter: '<S1>/3rd Order, 25 Hz  Butterworth Filter1' */
  for (i = 0; i < 12; i++) {
    memOffset = i * 3;
    tStride_avg = speed_controllerDec10_B.Analoginput3[i];
    tStride_avg -= speed_controllerDec10_P.urdOrder25HzButterworthFilter_m[1] *
      speed_controllerDec10_DW.urdOrder25HzButterworthFilter1_[memOffset];
    tStride_avg -=
      speed_controllerDec10_DW.urdOrder25HzButterworthFilter1_[memOffset + 1] *
      speed_controllerDec10_P.urdOrder25HzButterworthFilter_m[2];
    tStride_avg -=
      speed_controllerDec10_DW.urdOrder25HzButterworthFilter1_[memOffset + 2] *
      speed_controllerDec10_P.urdOrder25HzButterworthFilter_m[3];
    tStride_avg /= speed_controllerDec10_P.urdOrder25HzButterworthFilter_m[0];
    speed_controllerDec10_DW.urdOrder25HzButterworthFilter_g[i] = tStride_avg;
    tStride_avg = speed_controllerDec10_P.urdOrder25HzButterworthFilter1_[0] *
      speed_controllerDec10_DW.urdOrder25HzButterworthFilter_g[i];
    tStride_avg += speed_controllerDec10_P.urdOrder25HzButterworthFilter1_[1] *
      speed_controllerDec10_DW.urdOrder25HzButterworthFilter1_[memOffset];
    tStride_avg +=
      speed_controllerDec10_DW.urdOrder25HzButterworthFilter1_[memOffset + 1] *
      speed_controllerDec10_P.urdOrder25HzButterworthFilter1_[2];
    tStride_avg +=
      speed_controllerDec10_DW.urdOrder25HzButterworthFilter1_[memOffset + 2] *
      speed_controllerDec10_P.urdOrder25HzButterworthFilter1_[3];
    speed_controllerDec10_B.GRFvoltage[i] = tStride_avg;
  }

  /* End of DiscreteFilter: '<S1>/3rd Order, 25 Hz  Butterworth Filter1' */

  /* Gain: '<S7>/calibration' */
  for (i = 0; i < 12; i++) {
    speed_controllerDec10_B.calibration[i] =
      speed_controllerDec10_P.calibration_Gain[i] *
      speed_controllerDec10_B.GRFvoltage[i];
  }

  /* End of Gain: '<S7>/calibration' */

  /* MATLAB Function: '<S7>/Zero Level Force Plates' */
  if (speed_controllerDec10_B.BusConversion_InsertedFor_ZeroL.BTzeroLeft != 0.0)
  {
    for (i = 0; i < 6; i++) {
      speed_controllerDec10_DW.voltOff[i] =
        speed_controllerDec10_B.calibration[i];
    }
  }

  if (speed_controllerDec10_B.BusConversion_InsertedFor_ZeroL.BTzeroRight != 0.0)
  {
    for (i = 0; i < 6; i++) {
      speed_controllerDec10_DW.voltOff[i + 6] =
        speed_controllerDec10_B.calibration[i + 6];
    }
  }

  for (i = 0; i < 12; i++) {
    speed_controllerDec10_B.GRF_zero[i] = speed_controllerDec10_B.calibration[i]
      - speed_controllerDec10_DW.voltOff[i];
  }

  /* End of MATLAB Function: '<S7>/Zero Level Force Plates' */

  /* SignalConversion: '<S8>/TmpSignal ConversionAt SFunction Inport2' incorporates:
   *  MATLAB Function: '<S1>/measureSubjWeight'
   */
  speed_controllerDec10_B.TmpSignalConversionAtSFunctionI[0] =
    speed_controllerDec10_B.GRF_zero[2];
  speed_controllerDec10_B.TmpSignalConversionAtSFunctionI[1] =
    speed_controllerDec10_B.GRF_zero[8];

  /* MATLAB Function: '<S1>/measureSubjWeight' */
  if (speed_controllerDec10_B.BusConversion_InsertedFor_measu.BTmeasureWeight !=
      0.0) {
    speed_controllerDec10_DW.weight =
      speed_controllerDec10_B.TmpSignalConversionAtSFunctionI[0];
    speed_controllerDec10_DW.weight +=
      speed_controllerDec10_B.TmpSignalConversionAtSFunctionI[1];
  }

  speed_controllerDec10_B.weight_out = speed_controllerDec10_DW.weight;

  /* DataStoreWrite: '<S1>/Data Store Write' */
  speed_controllerDec10_DW.subjMass = speed_controllerDec10_B.weight_out;

  /* S-Function (scblock): '<S9>/S-Function' */
  /* ok to acquire for <S9>/S-Function */
  speed_controllerDec10_DW.SFunction_IWORK.AcquireOK = 1;

  /* Gain: '<S4>/REST' incorporates:
   *  Constant: '<S4>/REST_'
   */
  speed_controllerDec10_B.REST = speed_controllerDec10_P.REST_Gain *
    speed_controllerDec10_P.REST_Value;

  /* Gain: '<S4>/SETZERO' incorporates:
   *  Constant: '<S4>/SETZERO_'
   */
  speed_controllerDec10_B.SETZERO = speed_controllerDec10_P.SETZERO_Gain *
    speed_controllerDec10_P.SETZERO_Value;

  /* Gain: '<S4>/SWING' incorporates:
   *  Constant: '<S4>/SWING_'
   */
  speed_controllerDec10_B.SWING = speed_controllerDec10_P.SWING_Gain *
    speed_controllerDec10_P.SWING_Value;

  /* Gain: '<S4>/STANCE' incorporates:
   *  Constant: '<S4>/STANCE_'
   */
  speed_controllerDec10_B.STANCE = speed_controllerDec10_P.STANCE_Gain *
    speed_controllerDec10_P.STANCE_Value;

  /* Gain: '<S4>/LOCK' incorporates:
   *  Constant: '<S4>/LOCK_'
   */
  speed_controllerDec10_B.LOCK = speed_controllerDec10_P.LOCK_Gain *
    speed_controllerDec10_P.LOCK_Value;

  /* Gain: '<S4>/RUN' incorporates:
   *  Constant: '<S4>/RUN_'
   */
  speed_controllerDec10_B.RUN = speed_controllerDec10_P.RUN_Gain *
    speed_controllerDec10_P.RUN_Value;

  /* BusCreator: '<S1>/BusConversion_InsertedFor_State Determination_at_inport_1' */
  speed_controllerDec10_B.BusConversion_InsertedFor_State.REST =
    speed_controllerDec10_B.REST;
  speed_controllerDec10_B.BusConversion_InsertedFor_State.SETZERO =
    speed_controllerDec10_B.SETZERO;
  speed_controllerDec10_B.BusConversion_InsertedFor_State.SWING =
    speed_controllerDec10_B.SWING;
  speed_controllerDec10_B.BusConversion_InsertedFor_State.STANCE =
    speed_controllerDec10_B.STANCE;
  speed_controllerDec10_B.BusConversion_InsertedFor_State.LOCK =
    speed_controllerDec10_B.LOCK;
  speed_controllerDec10_B.BusConversion_InsertedFor_State.RUN =
    speed_controllerDec10_B.RUN;

  /* SignalConversion: '<S6>/TmpSignal ConversionAt SFunction Inport4' incorporates:
   *  Constant: '<S1>/GRF_Threshold_Down'
   *  Constant: '<S1>/GRF_Threshold_Up'
   *  MATLAB Function: '<S1>/State Determination'
   */
  speed_controllerDec10_B.TmpSignalConversionAtSFunctio_f[0] =
    speed_controllerDec10_P.GRF_Threshold_Up_Value;
  speed_controllerDec10_B.TmpSignalConversionAtSFunctio_f[1] =
    speed_controllerDec10_P.GRF_Threshold_Down_Value;

  /* MATLAB Function: '<S1>/State Determination' incorporates:
   *  Constant: '<S4>/BTresetStateVariables'
   */
  if (!speed_controllerDec10_DW.strideStateR_not_empty) {
    speed_controllerDec10_DW.strideStateR =
      speed_controllerDec10_B.BusConversion_InsertedFor_State.STANCE;
    speed_controllerDec10_DW.strideStateR_not_empty = true;
  }

  if (speed_controllerDec10_P.BTresetStateVariables_Value != 0.0) {
    for (i = 0; i < 20; i++) {
      speed_controllerDec10_DW.tStride_array[i] = 1.05;
      speed_controllerDec10_DW.tStance_array[i] = 0.65;
    }
  }

  result = (speed_controllerDec10_B.BusConversion_InsertedFor_State.SWING ==
            speed_controllerDec10_DW.strideStateR);
  if (result) {
    i = 0;
  } else {
    result = (speed_controllerDec10_B.BusConversion_InsertedFor_State.STANCE ==
              speed_controllerDec10_DW.strideStateR);
    if (result) {
      i = 1;
    } else {
      i = -1;
    }
  }

  switch (i) {
   case 0:
    if ((speed_controllerDec10_B.GRF_zero[8] >
         speed_controllerDec10_B.TmpSignalConversionAtSFunctio_f[0]) &&
        (speed_controllerDec10_DW.tSwing > 0.25)) {
      tmp[0] = speed_controllerDec10_DW.tStride;
      memcpy(&tmp[1], &speed_controllerDec10_DW.tStride_array[0], 19U * sizeof
             (real_T));
      memcpy(&speed_controllerDec10_DW.tStride_array[0], &tmp[0], 20U * sizeof
             (real_T));
      speed_controllerDec10_DW.tStride = 0.0;
      speed_controllerDec10_DW.tStance = 0.0;
      speed_controllerDec10_DW.strideStateR =
        speed_controllerDec10_B.BusConversion_InsertedFor_State.STANCE;
    }
    break;

   case 1:
    if (speed_controllerDec10_B.GRF_zero[8] <
        speed_controllerDec10_B.TmpSignalConversionAtSFunctio_f[1]) {
      tmp[0] = speed_controllerDec10_DW.tStance;
      memcpy(&tmp[1], &speed_controllerDec10_DW.tStance_array[0], 19U * sizeof
             (real_T));
      memcpy(&speed_controllerDec10_DW.tStance_array[0], &tmp[0], 20U * sizeof
             (real_T));
      speed_controllerDec10_DW.tSwing = 0.0;
      speed_controllerDec10_DW.strideStateR =
        speed_controllerDec10_B.BusConversion_InsertedFor_State.SWING;
    }
    break;
  }

  tStride_avg = speed_controllerDec10_nanmean
    (speed_controllerDec10_DW.tStride_array);
  tStance_avg = speed_controllerDec10_nanmean
    (speed_controllerDec10_DW.tStance_array);
  tSwing_avg = tStride_avg - tStance_avg;
  pctStride = speed_controllerDec10_DW.tStride / tStride_avg;
  if (pctStride > 1.0) {
    pctStride = 1.0;
  }

  pctStance = speed_controllerDec10_DW.tStance / tStance_avg;
  if (pctStance > 1.0) {
    pctStance = 1.0;
  }

  pctSwing = speed_controllerDec10_DW.tSwing / tSwing_avg;
  if (pctSwing > 1.0) {
    pctSwing = 1.0;
  }

  speed_controllerDec10_DW.tStride += 0.001;
  speed_controllerDec10_DW.tStance += 0.001;
  speed_controllerDec10_DW.tSwing += 0.001;
  speed_controllerDec10_B.strideStateR_out =
    speed_controllerDec10_DW.strideStateR;
  speed_controllerDec10_B.tStride_out = speed_controllerDec10_DW.tStride;
  speed_controllerDec10_B.tStride_avg_out = tStride_avg;
  speed_controllerDec10_B.tStance_avg_out = tStance_avg;
  speed_controllerDec10_B.tSwing_avg_out = tSwing_avg;
  speed_controllerDec10_B.pctStride_out = pctStride;
  speed_controllerDec10_B.pctStance_out = pctStance;
  speed_controllerDec10_B.pctSwing_out = pctSwing;
  speed_controllerDec10_B.tStance_out_p = speed_controllerDec10_DW.tStance;

  /* Gain: '<S1>/Gain3' */
  speed_controllerDec10_B.strideStateR = speed_controllerDec10_P.Gain3_Gain *
    speed_controllerDec10_B.strideStateR_out;

  /* Sum: '<S5>/Sum1' */
  speed_controllerDec10_B.Sum1 = speed_controllerDec10_B.strideStateR -
    speed_controllerDec10_B.SWING;

  /* Gain: '<S5>/Gain1' */
  speed_controllerDec10_B.strideStateRight = speed_controllerDec10_P.Gain1_Gain *
    speed_controllerDec10_B.Sum1;

  /* Gain: '<S5>/Gain2' */
  speed_controllerDec10_B.vGRFLeftN = speed_controllerDec10_P.Gain2_Gain *
    speed_controllerDec10_B.GRF_zero[2];

  /* Gain: '<S5>/Gain5' */
  speed_controllerDec10_B.vGRFRightN = speed_controllerDec10_P.Gain5_Gain *
    speed_controllerDec10_B.GRF_zero[8];

  /* BusCreator: '<S1>/BusConversion_InsertedFor_Control modes_at_inport_0' incorporates:
   *  Constant: '<S4>/BTLock'
   *  Constant: '<S4>/BTRun'
   */
  speed_controllerDec10_B.BusConversion_InsertedFor_Con_h.BTRun =
    speed_controllerDec10_P.BTRun_Value;
  speed_controllerDec10_B.BusConversion_InsertedFor_Con_h.BTLock =
    speed_controllerDec10_P.BTLock_Value;

  /* BusCreator: '<S1>/BusConversion_InsertedFor_Control modes_at_inport_1' */
  speed_controllerDec10_B.BusConversion_InsertedFor_Contr.REST =
    speed_controllerDec10_B.REST;
  speed_controllerDec10_B.BusConversion_InsertedFor_Contr.SETZERO =
    speed_controllerDec10_B.SETZERO;
  speed_controllerDec10_B.BusConversion_InsertedFor_Contr.SWING =
    speed_controllerDec10_B.SWING;
  speed_controllerDec10_B.BusConversion_InsertedFor_Contr.STANCE =
    speed_controllerDec10_B.STANCE;
  speed_controllerDec10_B.BusConversion_InsertedFor_Contr.LOCK =
    speed_controllerDec10_B.LOCK;
  speed_controllerDec10_B.BusConversion_InsertedFor_Contr.RUN =
    speed_controllerDec10_B.RUN;

  /* UnitDelay: '<S1>/Unit Delay1' */
  speed_controllerDec10_B.UnitDelay1[0] =
    speed_controllerDec10_DW.UnitDelay1_DSTATE[0];
  speed_controllerDec10_B.UnitDelay1[1] =
    speed_controllerDec10_DW.UnitDelay1_DSTATE[1];

  /* MATLAB Function: '<S1>/Control modes' */
  result = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 2)) {
    if (!(speed_controllerDec10_B.UnitDelay1[i] == -1.0)) {
      result = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  if (result) {
    speed_controllerDec10_B.walkMode[0] = 0.0;
    speed_controllerDec10_B.walkMode[1] =
      speed_controllerDec10_B.BusConversion_InsertedFor_Contr.LOCK;
  } else {
    speed_controllerDec10_B.walkMode[0] = speed_controllerDec10_B.UnitDelay1[0];
    speed_controllerDec10_B.walkMode[1] = speed_controllerDec10_B.UnitDelay1[1];
  }

  if (speed_controllerDec10_B.BusConversion_InsertedFor_Con_h.BTRun != 0.0) {
    speed_controllerDec10_B.walkMode[1] =
      speed_controllerDec10_B.BusConversion_InsertedFor_Contr.RUN;
  } else {
    if (speed_controllerDec10_B.BusConversion_InsertedFor_Con_h.BTLock != 0.0) {
      speed_controllerDec10_B.walkMode[1] =
        speed_controllerDec10_B.BusConversion_InsertedFor_Contr.LOCK;
    }
  }

  /* End of MATLAB Function: '<S1>/Control modes' */

  /* MinMax: '<S4>/MinMax1' incorporates:
   *  Constant: '<S4>/pflex_max'
   *  Constant: '<S4>/pflex_sing'
   */
  tStance_avg = speed_controllerDec10_P.pflex_max_Value;
  tStride_avg = speed_controllerDec10_P.pflex_sing_Value;
  if ((tStance_avg < tStride_avg) || rtIsNaN(tStride_avg)) {
    tStride_avg = tStance_avg;
  }

  speed_controllerDec10_B.MinMax1 = tStride_avg;

  /* End of MinMax: '<S4>/MinMax1' */

  /* Gain: '<S4>/degtorad' */
  speed_controllerDec10_B.pflex = speed_controllerDec10_P.degtorad_Gain *
    speed_controllerDec10_B.MinMax1;

  /* Constant: '<S4>/num_strike' */
  speed_controllerDec10_B.num_strike = speed_controllerDec10_P.num_strike_Value;

  /* Constant: '<S4>/num_swing' */
  speed_controllerDec10_B.num_swing = speed_controllerDec10_P.num_swing_Value;

  /* Constant: '<S4>/thresh_mid' */
  speed_controllerDec10_B.thresh_mid = speed_controllerDec10_P.thresh_mid_Value;

  /* Constant: '<S4>/thresh_swing' */
  speed_controllerDec10_B.thresh_swing =
    speed_controllerDec10_P.thresh_swing_Value;

  /* Constant: '<S4>/to_pct' */
  speed_controllerDec10_B.to_pct = speed_controllerDec10_P.to_pct_Value;

  /* Constant: '<S4>/tstance_avg_init' */
  speed_controllerDec10_B.tstance_avg_init =
    speed_controllerDec10_P.tstance_avg_init_Value;

  /* Constant: '<S4>/tstance_pct' */
  speed_controllerDec10_B.tstance_pct =
    speed_controllerDec10_P.tstance_pct_Value;

  /* Constant: '<S4>/tstride_avg_init' */
  speed_controllerDec10_B.tstride_avg_init =
    speed_controllerDec10_P.tstride_avg_init_Value;

  /* Constant: '<S4>/tswing_min' */
  speed_controllerDec10_B.tswing_min = speed_controllerDec10_P.tswing_min_Value;

  /* Constant: '<S4>/UseIterativeLearning' */
  speed_controllerDec10_B.UseIterativeLearning =
    speed_controllerDec10_P.UseIterativeLearning_Value;

  /* Gain: '<S1>/Gain1' */
  speed_controllerDec10_B.BusConversion_InsertedFor_con_p.tSwing_avg =
    speed_controllerDec10_P.Gain1_Gain_p *
    speed_controllerDec10_B.tSwing_avg_out;

  /* Gain: '<S1>/Gain10' */
  speed_controllerDec10_B.tStance_out = speed_controllerDec10_P.Gain10_Gain *
    speed_controllerDec10_B.tStance_out_p;

  /* Gain: '<S1>/Gain2' */
  speed_controllerDec10_B.BusConversion_InsertedFor_con_p.pctSwing =
    speed_controllerDec10_P.Gain2_Gain_c * speed_controllerDec10_B.pctSwing_out;

  /* Gain: '<S1>/Gain4' */
  speed_controllerDec10_B.tStride_avg = speed_controllerDec10_P.Gain4_Gain *
    speed_controllerDec10_B.tStride_avg_out;

  /* Gain: '<S1>/Gain5' */
  speed_controllerDec10_B.BusConversion_InsertedFor_con_p.tStance_avg =
    speed_controllerDec10_P.Gain5_Gain_e *
    speed_controllerDec10_B.tStance_avg_out;

  /* Gain: '<S1>/Gain8' */
  speed_controllerDec10_B.BusConversion_InsertedFor_con_p.pctStride =
    speed_controllerDec10_P.Gain8_Gain * speed_controllerDec10_B.pctStride_out;

  /* Gain: '<S1>/Gain9' */
  speed_controllerDec10_B.BusConversion_InsertedFor_con_p.pctStance =
    speed_controllerDec10_P.Gain9_Gain * speed_controllerDec10_B.pctStance_out;

  /* BusCreator: '<Root>/BusConversion_InsertedFor_controller1_at_inport_1' */
  speed_controllerDec10_B.BusConversion_InsertedFor_con_p.strideStateR =
    speed_controllerDec10_B.strideStateR;
  speed_controllerDec10_B.BusConversion_InsertedFor_con_p.tStride =
    speed_controllerDec10_B.tStride_out;
  speed_controllerDec10_B.BusConversion_InsertedFor_con_p.tStride_avg =
    speed_controllerDec10_B.tStride_avg;

  /* BusCreator: '<Root>/BusConversion_InsertedFor_controller1_at_inport_3' incorporates:
   *  Constant: '<S4>/BTmeasureWeight'
   *  Constant: '<S4>/BTzeroLeft'
   *  Constant: '<S4>/BTzeroRight'
   */
  speed_controllerDec10_B.BusConversion_InsertedFor_con_j.BTmeasureWeight =
    speed_controllerDec10_P.BTmeasureWeight_Value;
  speed_controllerDec10_B.BusConversion_InsertedFor_con_j.BTzeroLeft =
    speed_controllerDec10_P.BTzeroLeft_Value;
  speed_controllerDec10_B.BusConversion_InsertedFor_con_j.BTzeroRight =
    speed_controllerDec10_P.BTzeroRight_Value;

  /* BusCreator: '<Root>/BusConversion_InsertedFor_controller1_at_inport_4' */
  speed_controllerDec10_B.BusConversion_InsertedFor_con_g.REST =
    speed_controllerDec10_B.REST;
  speed_controllerDec10_B.BusConversion_InsertedFor_con_g.SETZERO =
    speed_controllerDec10_B.SETZERO;
  speed_controllerDec10_B.BusConversion_InsertedFor_con_g.SWING =
    speed_controllerDec10_B.SWING;
  speed_controllerDec10_B.BusConversion_InsertedFor_con_g.STANCE =
    speed_controllerDec10_B.STANCE;
  speed_controllerDec10_B.BusConversion_InsertedFor_con_g.LOCK =
    speed_controllerDec10_B.LOCK;
  speed_controllerDec10_B.BusConversion_InsertedFor_con_g.RUN =
    speed_controllerDec10_B.RUN;

  /* BusCreator: '<Root>/BusConversion_InsertedFor_controller1_at_inport_5' incorporates:
   *  Constant: '<S4>/NODE1P'
   *  Constant: '<S4>/NODE1S'
   *  Constant: '<S4>/NODE2P'
   *  Constant: '<S4>/NODE2S'
   *  Constant: '<S4>/NODE3P'
   *  Constant: '<S4>/NODE3S'
   *  Constant: '<S4>/NODE4P'
   *  Constant: '<S4>/NODE4S'
   *  Constant: '<S4>/NUMNODES'
   */
  speed_controllerDec10_B.BusConversion_InsertedFor_contr.NUMNODES =
    speed_controllerDec10_P.NUMNODES_Value;
  speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE1P =
    speed_controllerDec10_P.NODE1P_Value;
  speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE1S =
    speed_controllerDec10_P.NODE1S_Value;
  speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE2P =
    speed_controllerDec10_P.NODE2P_Value;
  speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE2S =
    speed_controllerDec10_P.NODE2S_Value;
  speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE3P =
    speed_controllerDec10_P.NODE3P_Value;
  speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE3S =
    speed_controllerDec10_P.NODE3S_Value;
  speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE4P =
    speed_controllerDec10_P.NODE4P_Value;
  speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE4S =
    speed_controllerDec10_P.NODE4S_Value;

  /* MATLAB Function: '<Root>/controller1' */
  tStride_avg = 0.0;
  NodeSpeed_size[0] = 1;
  NodeSpeed_size[1] = 1;
  NodeSpeed_data[0] =
    speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE1S;
  NodePercent_size[0] = 1;
  NodePercent_size[1] = 1;
  NodePercent_data[0] =
    speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE1P;
  switch ((int32_T)
          speed_controllerDec10_B.BusConversion_InsertedFor_contr.NUMNODES) {
   case 1:
    break;

   case 2:
    tStance_avg = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE1S;
    tSwing_avg = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE2S;
    NodeSpeed_size[0] = 1;
    NodeSpeed_size[1] = 2;
    pctStride = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE1P;
    pctStance = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE2P;
    NodePercent_size[0] = 1;
    NodePercent_size[1] = 2;
    NodeSpeed_data[0] = tStance_avg;
    NodePercent_data[0] = pctStride;
    NodeSpeed_data[1] = tSwing_avg;
    NodePercent_data[1] = pctStance;
    break;

   case 3:
    tStance_avg = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE1S;
    tSwing_avg = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE2S;
    pctSwing = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE3S;
    NodeSpeed_size[0] = 1;
    NodeSpeed_size[1] = 3;
    pctStride = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE1P;
    pctStance = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE2P;
    tmp_0 = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE3P;
    NodePercent_size[0] = 1;
    NodePercent_size[1] = 3;
    NodeSpeed_data[0] = tStance_avg;
    NodePercent_data[0] = pctStride;
    NodeSpeed_data[1] = tSwing_avg;
    NodePercent_data[1] = pctStance;
    NodeSpeed_data[2] = pctSwing;
    NodePercent_data[2] = tmp_0;
    break;

   case 4:
    tStance_avg = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE1S;
    tSwing_avg = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE2S;
    pctSwing = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE3S;
    tmp_1 = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE4S;
    NodeSpeed_size[0] = 1;
    NodeSpeed_size[1] = 4;
    pctStride = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE1P;
    pctStance = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE2P;
    tmp_0 = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE3P;
    tmp_2 = speed_controllerDec10_B.BusConversion_InsertedFor_contr.NODE4P;
    NodePercent_size[0] = 1;
    NodePercent_size[1] = 4;
    NodeSpeed_data[0] = tStance_avg;
    NodePercent_data[0] = pctStride;
    NodeSpeed_data[1] = tSwing_avg;
    NodePercent_data[1] = pctStance;
    NodeSpeed_data[2] = pctSwing;
    NodePercent_data[2] = tmp_0;
    NodeSpeed_data[3] = tmp_1;
    NodePercent_data[3] = tmp_2;
    break;
  }

  pctStride = NodeSpeed_data[0];
  result = (speed_controllerDec10_B.BusConversion_InsertedFor_con_g.LOCK ==
            speed_controllerDec10_B.walkMode[1]);
  if (result) {
    i = 0;
  } else {
    result = (speed_controllerDec10_B.BusConversion_InsertedFor_con_g.RUN ==
              speed_controllerDec10_B.walkMode[1]);
    if (result) {
      i = 1;
    } else {
      i = -1;
    }
  }

  switch (i) {
   case 0:
    break;

   case 1:
    if (speed_controllerDec10_B.BusConversion_InsertedFor_con_p.strideStateR ==
        1.0) {
      tStride_avg = speed_controllerDec10_pchip(NodePercent_data,
        NodePercent_size, NodeSpeed_data, NodeSpeed_size,
        speed_controllerDec10_B.BusConversion_InsertedFor_con_p.pctStride);
    } else {
      if (speed_controllerDec10_B.BusConversion_InsertedFor_con_p.strideStateR ==
          0.0) {
        tStance_avg = 0.5 / pctStride;
        tSwing_avg = tStance_avg;
        tStride_avg = (tStance_avg - tSwing_avg) / pctStride;
        tStance_avg = (tStance_avg - tStance_avg) / pctStride;
        pctStride = (tStance_avg - tStride_avg) / pctStride;
        tStance_avg = 2.0 * tStride_avg - tStance_avg;
        if (rtIsNaN
            (speed_controllerDec10_B.BusConversion_InsertedFor_con_p.pctSwing))
        {
          tStride_avg =
            speed_controllerDec10_B.BusConversion_InsertedFor_con_p.pctSwing;
        } else {
          tStride_avg = pctStride;
          tStride_avg =
            speed_controllerDec10_B.BusConversion_InsertedFor_con_p.pctSwing *
            tStride_avg + tStance_avg;
          tStride_avg =
            speed_controllerDec10_B.BusConversion_InsertedFor_con_p.pctSwing *
            tStride_avg + tSwing_avg;
          tStride_avg *=
            speed_controllerDec10_B.BusConversion_InsertedFor_con_p.pctSwing;
        }
      }
    }
    break;
  }

  speed_controllerDec10_B.desiredSpeed = tStride_avg;
  speed_controllerDec10_B.walkMode_out = 0.0;
  speed_controllerDec10_B.print = 0.0;

  /* End of MATLAB Function: '<Root>/controller1' */

  /* Saturate: '<Root>/Saturation1' */
  tStance_avg = speed_controllerDec10_B.desiredSpeed;
  tStride_avg = speed_controllerDec10_P.Saturation1_LowerSat;
  tSwing_avg = speed_controllerDec10_P.Saturation1_UpperSat;
  if (tStance_avg > tSwing_avg) {
    speed_controllerDec10_B.Saturation1 = tSwing_avg;
  } else if (tStance_avg < tStride_avg) {
    speed_controllerDec10_B.Saturation1 = tStride_avg;
  } else {
    speed_controllerDec10_B.Saturation1 = tStance_avg;
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* Constant: '<Root>/Constant1' */
  speed_controllerDec10_B.Constant1 = speed_controllerDec10_P.Constant1_Value;

  /* S-Function (sg_IO101_da_s): '<Root>/Analog output1' */

  /* Level2 S-Function Block: '<Root>/Analog output1' (sg_IO101_da_s) */
  {
    SimStruct *rts = speed_controllerDec10_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }
}

/* Model update function */
static void speed_controllerDec10_update(void)
{
  int32_T k;
  int32_T memOffset;

  /* Update for DiscreteFilter: '<S1>/3rd Order, 25 Hz  Butterworth Filter1' */
  for (k = 0; k < 12; k++) {
    memOffset = k * 3;
    speed_controllerDec10_DW.urdOrder25HzButterworthFilter1_[memOffset + 2] =
      speed_controllerDec10_DW.urdOrder25HzButterworthFilter1_[memOffset + 1];
    speed_controllerDec10_DW.urdOrder25HzButterworthFilter1_[memOffset + 1] =
      speed_controllerDec10_DW.urdOrder25HzButterworthFilter1_[memOffset];
    speed_controllerDec10_DW.urdOrder25HzButterworthFilter1_[memOffset] =
      speed_controllerDec10_DW.urdOrder25HzButterworthFilter_g[k];
  }

  /* End of Update for DiscreteFilter: '<S1>/3rd Order, 25 Hz  Butterworth Filter1' */

  /* Update for UnitDelay: '<S1>/Unit Delay1' */
  speed_controllerDec10_DW.UnitDelay1_DSTATE[0] =
    speed_controllerDec10_B.desiredSpeed;
  speed_controllerDec10_DW.UnitDelay1_DSTATE[1] =
    speed_controllerDec10_B.walkMode_out;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++speed_controllerDec10_M->Timing.clockTick0)) {
    ++speed_controllerDec10_M->Timing.clockTickH0;
  }

  speed_controllerDec10_M->Timing.t[0] =
    speed_controllerDec10_M->Timing.clockTick0 *
    speed_controllerDec10_M->Timing.stepSize0 +
    speed_controllerDec10_M->Timing.clockTickH0 *
    speed_controllerDec10_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void speed_controllerDec10_initialize(void)
{
  /* Start for S-Function (sg_IO101_setup_s): '<S1>/Setup1' */
  /* Level2 S-Function Block: '<S1>/Setup1' (sg_IO101_setup_s) */
  {
    SimStruct *rts = speed_controllerDec10_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO106_setup_s): '<S1>/Setup4' */
  /* Level2 S-Function Block: '<S1>/Setup4' (sg_IO106_setup_s) */
  {
    SimStruct *rts = speed_controllerDec10_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO106_ad_s): '<S1>/Analog input3' */
  /* Level2 S-Function Block: '<S1>/Analog input3' (sg_IO106_ad_s) */
  {
    SimStruct *rts = speed_controllerDec10_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scblock): '<S9>/S-Function' */

  /* S-Function Block: <S9>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo(
          "Sensor Read and Process/Scopes/Gain2"));
        rl32eAddSignal(1, rl32eGetSignalNo(
          "Sensor Read and Process/Scopes/Gain5"));
        rl32eAddSignal(1, rl32eGetSignalNo(
          "Sensor Read and Process/Scopes/Gain1"));
        rl32eSetScope(1, 4, 6000);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo(
          "Sensor Read and Process/Scopes/Gain2"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 9, 0);
        rl32eSetTargetScope(1, 1, 3.0);
        rl32eSetTargetScope(1, 11, 0.0);
        rl32eSetTargetScope(1, 10, 0.0);
        xpceScopeAcqOK(1, &speed_controllerDec10_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* Start for DataStoreMemory: '<S1>/subjMass' */
  speed_controllerDec10_DW.subjMass =
    speed_controllerDec10_P.subjMass_InitialValue;

  /* Start for Constant: '<Root>/Constant1' */
  speed_controllerDec10_B.Constant1 = speed_controllerDec10_P.Constant1_Value;

  /* Start for S-Function (sg_IO101_da_s): '<Root>/Analog output1' */
  /* Level2 S-Function Block: '<Root>/Analog output1' (sg_IO101_da_s) */
  {
    SimStruct *rts = speed_controllerDec10_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  {
    int32_T i;

    /* InitializeConditions for DiscreteFilter: '<S1>/3rd Order, 25 Hz  Butterworth Filter1' */
    for (i = 0; i < 36; i++) {
      speed_controllerDec10_DW.urdOrder25HzButterworthFilter1_[i] =
        speed_controllerDec10_P.urdOrder25HzButterworthFilter_f;
    }

    /* End of InitializeConditions for DiscreteFilter: '<S1>/3rd Order, 25 Hz  Butterworth Filter1' */

    /* InitializeConditions for UnitDelay: '<S1>/Unit Delay1' */
    speed_controllerDec10_DW.UnitDelay1_DSTATE[0] =
      speed_controllerDec10_P.UnitDelay1_InitialCondition[0];
    speed_controllerDec10_DW.UnitDelay1_DSTATE[1] =
      speed_controllerDec10_P.UnitDelay1_InitialCondition[1];

    /* SystemInitialize for MATLAB Function: '<S7>/Zero Level Force Plates' */
    memset(&speed_controllerDec10_DW.voltOff[0], 0, 12U * sizeof(real_T));

    /* SystemInitialize for MATLAB Function: '<S1>/measureSubjWeight' */
    speed_controllerDec10_DW.weight = 0.0;

    /* SystemInitialize for MATLAB Function: '<S1>/State Determination' */
    speed_controllerDec10_DW.strideStateR_not_empty = false;
    speed_controllerDec10_DW.tStride = 0.0;
    speed_controllerDec10_DW.tStance = 0.0;
    speed_controllerDec10_DW.tSwing = 0.0;
    for (i = 0; i < 20; i++) {
      speed_controllerDec10_DW.tStride_array[i] = 1.05;
      speed_controllerDec10_DW.tStance_array[i] = 0.65;
    }

    /* End of SystemInitialize for MATLAB Function: '<S1>/State Determination' */
  }
}

/* Model terminate function */
static void speed_controllerDec10_terminate(void)
{
  /* Terminate for S-Function (sg_IO101_setup_s): '<S1>/Setup1' */
  /* Level2 S-Function Block: '<S1>/Setup1' (sg_IO101_setup_s) */
  {
    SimStruct *rts = speed_controllerDec10_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO106_setup_s): '<S1>/Setup4' */
  /* Level2 S-Function Block: '<S1>/Setup4' (sg_IO106_setup_s) */
  {
    SimStruct *rts = speed_controllerDec10_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO106_ad_s): '<S1>/Analog input3' */
  /* Level2 S-Function Block: '<S1>/Analog input3' (sg_IO106_ad_s) */
  {
    SimStruct *rts = speed_controllerDec10_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO101_da_s): '<Root>/Analog output1' */
  /* Level2 S-Function Block: '<Root>/Analog output1' (sg_IO101_da_s) */
  {
    SimStruct *rts = speed_controllerDec10_M->childSfunctions[3];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  speed_controllerDec10_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  speed_controllerDec10_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  speed_controllerDec10_initialize();
}

void MdlTerminate(void)
{
  speed_controllerDec10_terminate();
}

/* Registration function */
RT_MODEL_speed_controllerDec10_T *speed_controllerDec10(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)speed_controllerDec10_M, 0,
                sizeof(RT_MODEL_speed_controllerDec10_T));
  rtsiSetSolverName(&speed_controllerDec10_M->solverInfo,"FixedStepDiscrete");
  speed_controllerDec10_M->solverInfoPtr = (&speed_controllerDec10_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = speed_controllerDec10_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    speed_controllerDec10_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    speed_controllerDec10_M->Timing.sampleTimes =
      (&speed_controllerDec10_M->Timing.sampleTimesArray[0]);
    speed_controllerDec10_M->Timing.offsetTimes =
      (&speed_controllerDec10_M->Timing.offsetTimesArray[0]);

    /* task periods */
    speed_controllerDec10_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    speed_controllerDec10_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(speed_controllerDec10_M, &speed_controllerDec10_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = speed_controllerDec10_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    speed_controllerDec10_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(speed_controllerDec10_M, -1);
  speed_controllerDec10_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    speed_controllerDec10_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(speed_controllerDec10_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(speed_controllerDec10_M->rtwLogInfo, (NULL));
    rtliSetLogT(speed_controllerDec10_M->rtwLogInfo, "tout");
    rtliSetLogX(speed_controllerDec10_M->rtwLogInfo, "");
    rtliSetLogXFinal(speed_controllerDec10_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(speed_controllerDec10_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(speed_controllerDec10_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(speed_controllerDec10_M->rtwLogInfo, 0);
    rtliSetLogDecimation(speed_controllerDec10_M->rtwLogInfo, 1);
    rtliSetLogY(speed_controllerDec10_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(speed_controllerDec10_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(speed_controllerDec10_M->rtwLogInfo, (NULL));
  }

  speed_controllerDec10_M->solverInfoPtr = (&speed_controllerDec10_M->solverInfo);
  speed_controllerDec10_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&speed_controllerDec10_M->solverInfo, 0.001);
  rtsiSetSolverMode(&speed_controllerDec10_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  speed_controllerDec10_M->blockIO = ((void *) &speed_controllerDec10_B);
  (void) memset(((void *) &speed_controllerDec10_B), 0,
                sizeof(B_speed_controllerDec10_T));

  /* parameters */
  speed_controllerDec10_M->defaultParam = ((real_T *)&speed_controllerDec10_P);

  /* states (dwork) */
  speed_controllerDec10_M->dwork = ((void *) &speed_controllerDec10_DW);
  (void) memset((void *)&speed_controllerDec10_DW, 0,
                sizeof(DW_speed_controllerDec10_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  speed_controllerDec10_InitializeDataMapInfo();

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &speed_controllerDec10_M->NonInlinedSFcns.sfcnInfo;
    speed_controllerDec10_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(speed_controllerDec10_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &speed_controllerDec10_M->Sizes.numSampTimes);
    speed_controllerDec10_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (speed_controllerDec10_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,
                   speed_controllerDec10_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(speed_controllerDec10_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(speed_controllerDec10_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (speed_controllerDec10_M));
    rtssSetStepSizePtr(sfcnInfo, &speed_controllerDec10_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (speed_controllerDec10_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &speed_controllerDec10_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &speed_controllerDec10_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &speed_controllerDec10_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &speed_controllerDec10_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &speed_controllerDec10_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &speed_controllerDec10_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &speed_controllerDec10_M->solverInfoPtr);
  }

  speed_controllerDec10_M->Sizes.numSFcns = (4);

  /* register each child */
  {
    (void) memset((void *)
                  &speed_controllerDec10_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  4*sizeof(SimStruct));
    speed_controllerDec10_M->childSfunctions =
      (&speed_controllerDec10_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    speed_controllerDec10_M->childSfunctions[0] =
      (&speed_controllerDec10_M->NonInlinedSFcns.childSFunctions[0]);
    speed_controllerDec10_M->childSfunctions[1] =
      (&speed_controllerDec10_M->NonInlinedSFcns.childSFunctions[1]);
    speed_controllerDec10_M->childSfunctions[2] =
      (&speed_controllerDec10_M->NonInlinedSFcns.childSFunctions[2]);
    speed_controllerDec10_M->childSfunctions[3] =
      (&speed_controllerDec10_M->NonInlinedSFcns.childSFunctions[3]);

    /* Level2 S-Function Block: speed_controllerDec10/<S1>/Setup1 (sg_IO101_setup_s) */
    {
      SimStruct *rts = speed_controllerDec10_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        speed_controllerDec10_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        speed_controllerDec10_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        speed_controllerDec10_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &speed_controllerDec10_M->
                         NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speed_controllerDec10_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speed_controllerDec10_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speed_controllerDec10_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speed_controllerDec10_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speed_controllerDec10_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speed_controllerDec10_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &speed_controllerDec10_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "Setup1");
      ssSetPath(rts, "speed_controllerDec10/Sensor Read and Process/Setup1");
      ssSetRTModel(rts,speed_controllerDec10_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)speed_controllerDec10_P.Setup1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)speed_controllerDec10_P.Setup1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)speed_controllerDec10_P.Setup1_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &speed_controllerDec10_DW.Setup1_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speed_controllerDec10_DW.Setup1_IWORK);
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

    /* Level2 S-Function Block: speed_controllerDec10/<S1>/Setup4 (sg_IO106_setup_s) */
    {
      SimStruct *rts = speed_controllerDec10_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        speed_controllerDec10_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        speed_controllerDec10_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        speed_controllerDec10_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &speed_controllerDec10_M->
                         NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speed_controllerDec10_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speed_controllerDec10_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speed_controllerDec10_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speed_controllerDec10_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speed_controllerDec10_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speed_controllerDec10_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &speed_controllerDec10_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* path info */
      ssSetModelName(rts, "Setup4");
      ssSetPath(rts, "speed_controllerDec10/Sensor Read and Process/Setup4");
      ssSetRTModel(rts,speed_controllerDec10_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)speed_controllerDec10_P.Setup4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)speed_controllerDec10_P.Setup4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)speed_controllerDec10_P.Setup4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)speed_controllerDec10_P.Setup4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)speed_controllerDec10_P.Setup4_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)speed_controllerDec10_P.Setup4_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)speed_controllerDec10_P.Setup4_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &speed_controllerDec10_DW.Setup4_RWORK[0]);
      ssSetIWork(rts, (int_T *) &speed_controllerDec10_DW.Setup4_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speed_controllerDec10_DW.Setup4_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speed_controllerDec10_DW.Setup4_IWORK[0]);
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

    /* Level2 S-Function Block: speed_controllerDec10/<S1>/Analog input3 (sg_IO106_ad_s) */
    {
      SimStruct *rts = speed_controllerDec10_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        speed_controllerDec10_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        speed_controllerDec10_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        speed_controllerDec10_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &speed_controllerDec10_M->
                         NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speed_controllerDec10_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speed_controllerDec10_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speed_controllerDec10_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speed_controllerDec10_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speed_controllerDec10_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speed_controllerDec10_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &speed_controllerDec10_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 20);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            speed_controllerDec10_B.Analoginput3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Analog input3");
      ssSetPath(rts,
                "speed_controllerDec10/Sensor Read and Process/Analog input3");
      ssSetRTModel(rts,speed_controllerDec10_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speed_controllerDec10_P.Analoginput3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speed_controllerDec10_P.Analoginput3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speed_controllerDec10_P.Analoginput3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speed_controllerDec10_P.Analoginput3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speed_controllerDec10_P.Analoginput3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speed_controllerDec10_P.Analoginput3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speed_controllerDec10_P.Analoginput3_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &speed_controllerDec10_DW.Analoginput3_RWORK[0]);
      ssSetIWork(rts, (int_T *) &speed_controllerDec10_DW.Analoginput3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speed_controllerDec10_DW.Analoginput3_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speed_controllerDec10_DW.Analoginput3_IWORK[0]);
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

    /* Level2 S-Function Block: speed_controllerDec10/<Root>/Analog output1 (sg_IO101_da_s) */
    {
      SimStruct *rts = speed_controllerDec10_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        speed_controllerDec10_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        speed_controllerDec10_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        speed_controllerDec10_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &speed_controllerDec10_M->
                         NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speed_controllerDec10_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speed_controllerDec10_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speed_controllerDec10_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speed_controllerDec10_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speed_controllerDec10_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speed_controllerDec10_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &speed_controllerDec10_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 4);
        ssSetPortInfoForInputs(rts,
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &speed_controllerDec10_B.Saturation1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &speed_controllerDec10_B.Constant1);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, (real_T*)&speed_controllerDec10_RGND);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, (real_T*)&speed_controllerDec10_RGND);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Analog output1");
      ssSetPath(rts, "speed_controllerDec10/Analog output1");
      ssSetRTModel(rts,speed_controllerDec10_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speed_controllerDec10_P.Analogoutput1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speed_controllerDec10_P.Analogoutput1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speed_controllerDec10_P.Analogoutput1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speed_controllerDec10_P.Analogoutput1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speed_controllerDec10_P.Analogoutput1_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &speed_controllerDec10_DW.Analogoutput1_RWORK[0]);
      ssSetIWork(rts, (int_T *) &speed_controllerDec10_DW.Analogoutput1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speed_controllerDec10_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 16);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speed_controllerDec10_DW.Analogoutput1_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speed_controllerDec10_DW.Analogoutput1_IWORK[0]);
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

  /* Initialize Sizes */
  speed_controllerDec10_M->Sizes.numContStates = (0);/* Number of continuous states */
  speed_controllerDec10_M->Sizes.numY = (0);/* Number of model outputs */
  speed_controllerDec10_M->Sizes.numU = (0);/* Number of model inputs */
  speed_controllerDec10_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  speed_controllerDec10_M->Sizes.numSampTimes = (1);/* Number of sample times */
  speed_controllerDec10_M->Sizes.numBlocks = (88);/* Number of blocks */
  speed_controllerDec10_M->Sizes.numBlockIO = (62);/* Number of block outputs */
  speed_controllerDec10_M->Sizes.numBlockPrms = (155);/* Sum of parameter "widths" */
  return speed_controllerDec10_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
