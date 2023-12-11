/*
 * speed_controllerDec10_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "speed_controllerDec10".
 *
 * Model version              : 1.5
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Sun Dec 10 16:32:12 2023
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "speed_controllerDec10_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "speed_controllerDec10.h"
#include "speed_controllerDec10_capi.h"
#include "speed_controllerDec10_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 5, TARGET_STRING("controller1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 5, TARGET_STRING("controller1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 2, 5, TARGET_STRING("controller1/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("Constant1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 1, TARGET_STRING("Sensor Read and Process/Control modes"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 6, 2, TARGET_STRING("Sensor Read and Process/State Determination/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 2, TARGET_STRING("Sensor Read and Process/State Determination/p2"),
    TARGET_STRING("tStride"), 1, 0, 0, 0, 0 },

  { 8, 2, TARGET_STRING("Sensor Read and Process/State Determination/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 9, 2, TARGET_STRING("Sensor Read and Process/State Determination/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 10, 2, TARGET_STRING("Sensor Read and Process/State Determination/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 11, 2, TARGET_STRING("Sensor Read and Process/State Determination/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 12, 2, TARGET_STRING("Sensor Read and Process/State Determination/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 13, 2, TARGET_STRING("Sensor Read and Process/State Determination/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 14, 2, TARGET_STRING("Sensor Read and Process/State Determination/p9"),
    TARGET_STRING(""), 8, 0, 0, 0, 0 },

  { 15, 4, TARGET_STRING("Sensor Read and Process/measureSubjWeight"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 0, TARGET_STRING("Sensor Read and Process/Gain10"),
    TARGET_STRING("tStance_out"), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Sensor Read and Process/Gain3"),
    TARGET_STRING("strideStateR"), 0, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Sensor Read and Process/Gain4"),
    TARGET_STRING("tStride_avg"), 0, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Sensor Read and Process/Analog input3"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 20, 0, TARGET_STRING(
    "Sensor Read and Process/3rd Order, 25 Hz  Butterworth Filter1"),
    TARGET_STRING("GRF\nvoltage"), 0, 0, 3, 0, 0 },

  { 21, 0, TARGET_STRING("Sensor Read and Process/Unit Delay1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 22, 0, TARGET_STRING("Sensor Read and Process/GUI/UseIterativeLearning"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Sensor Read and Process/GUI/num_strike"),
    TARGET_STRING("num_strike"), 0, 0, 0, 0, 0 },

  { 24, 0, TARGET_STRING("Sensor Read and Process/GUI/num_swing"),
    TARGET_STRING("num_swing"), 0, 0, 0, 0, 0 },

  { 25, 0, TARGET_STRING("Sensor Read and Process/GUI/thresh_mid"),
    TARGET_STRING("thresh_mid"), 0, 0, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Sensor Read and Process/GUI/thresh_swing"),
    TARGET_STRING("thresh_swing"), 0, 0, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Sensor Read and Process/GUI/to_pct"),
    TARGET_STRING("to_pct"), 0, 0, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Sensor Read and Process/GUI/tstance_avg_init"),
    TARGET_STRING("tstance_avg_init"), 0, 0, 0, 0, 0 },

  { 29, 0, TARGET_STRING("Sensor Read and Process/GUI/tstance_pct"),
    TARGET_STRING("tstance_pct"), 0, 0, 0, 0, 0 },

  { 30, 0, TARGET_STRING("Sensor Read and Process/GUI/tstride_avg_init"),
    TARGET_STRING("tstride_avg_init"), 0, 0, 0, 0, 0 },

  { 31, 0, TARGET_STRING("Sensor Read and Process/GUI/tswing_min"),
    TARGET_STRING("tswing_min"), 0, 0, 0, 0, 0 },

  { 32, 0, TARGET_STRING("Sensor Read and Process/GUI/LOCK"),
    TARGET_STRING("LOCK"), 0, 0, 0, 0, 0 },

  { 33, 0, TARGET_STRING("Sensor Read and Process/GUI/REST"),
    TARGET_STRING("REST"), 0, 0, 0, 0, 0 },

  { 34, 0, TARGET_STRING("Sensor Read and Process/GUI/RUN"),
    TARGET_STRING("RUN"), 0, 0, 0, 0, 0 },

  { 35, 0, TARGET_STRING("Sensor Read and Process/GUI/SETZERO"),
    TARGET_STRING("SETZERO"), 0, 0, 0, 0, 0 },

  { 36, 0, TARGET_STRING("Sensor Read and Process/GUI/STANCE"),
    TARGET_STRING("STANCE"), 0, 0, 0, 0, 0 },

  { 37, 0, TARGET_STRING("Sensor Read and Process/GUI/SWING"),
    TARGET_STRING("SWING"), 0, 0, 0, 0, 0 },

  { 38, 0, TARGET_STRING("Sensor Read and Process/GUI/degtorad"),
    TARGET_STRING("pflex"), 0, 0, 0, 0, 0 },

  { 39, 0, TARGET_STRING("Sensor Read and Process/GUI/MinMax1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 40, 0, TARGET_STRING("Sensor Read and Process/Scopes/Gain1"),
    TARGET_STRING("strideStateRight"), 0, 0, 0, 0, 0 },

  { 41, 0, TARGET_STRING("Sensor Read and Process/Scopes/Gain2"),
    TARGET_STRING("vGRF Left [N]"), 0, 0, 0, 0, 0 },

  { 42, 0, TARGET_STRING("Sensor Read and Process/Scopes/Gain5"),
    TARGET_STRING("vGRF Right [N]"), 0, 0, 0, 0, 0 },

  { 43, 0, TARGET_STRING("Sensor Read and Process/Scopes/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 44, 3, TARGET_STRING(
    "Sensor Read and Process/Zero Level Treadmill/Zero Level Force Plates"),
    TARGET_STRING("GRFzero"), 0, 0, 3, 0, 0 },

  { 45, 0, TARGET_STRING(
    "Sensor Read and Process/Zero Level Treadmill/calibration"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 46, TARGET_STRING("Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 47, TARGET_STRING("Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 48, TARGET_STRING("Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 49, TARGET_STRING("Analog output1"),
    TARGET_STRING("P1"), 0, 4, 0 },

  { 50, TARGET_STRING("Analog output1"),
    TARGET_STRING("P2"), 0, 4, 0 },

  { 51, TARGET_STRING("Analog output1"),
    TARGET_STRING("P3"), 0, 4, 0 },

  { 52, TARGET_STRING("Analog output1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 53, TARGET_STRING("Analog output1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 54, TARGET_STRING("Sensor Read and Process/subjMass"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 55, TARGET_STRING("Sensor Read and Process/GRF_Threshold_Down"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 56, TARGET_STRING("Sensor Read and Process/GRF_Threshold_Up"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 57, TARGET_STRING("Sensor Read and Process/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 58, TARGET_STRING("Sensor Read and Process/Gain10"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 59, TARGET_STRING("Sensor Read and Process/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 60, TARGET_STRING("Sensor Read and Process/Gain3"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 61, TARGET_STRING("Sensor Read and Process/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 62, TARGET_STRING("Sensor Read and Process/Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 63, TARGET_STRING("Sensor Read and Process/Gain8"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 64, TARGET_STRING("Sensor Read and Process/Gain9"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 65, TARGET_STRING("Sensor Read and Process/Analog input3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 66, TARGET_STRING("Sensor Read and Process/Analog input3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 67, TARGET_STRING("Sensor Read and Process/Analog input3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 68, TARGET_STRING("Sensor Read and Process/Analog input3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 69, TARGET_STRING("Sensor Read and Process/Analog input3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 70, TARGET_STRING("Sensor Read and Process/Analog input3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 71, TARGET_STRING("Sensor Read and Process/Analog input3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 72, TARGET_STRING("Sensor Read and Process/Setup1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 73, TARGET_STRING("Sensor Read and Process/Setup1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 74, TARGET_STRING("Sensor Read and Process/Setup1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 75, TARGET_STRING("Sensor Read and Process/Setup4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 76, TARGET_STRING("Sensor Read and Process/Setup4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 77, TARGET_STRING("Sensor Read and Process/Setup4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 78, TARGET_STRING("Sensor Read and Process/Setup4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 79, TARGET_STRING("Sensor Read and Process/Setup4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 80, TARGET_STRING("Sensor Read and Process/Setup4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 81, TARGET_STRING("Sensor Read and Process/Setup4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 82, TARGET_STRING("Sensor Read and Process/3rd Order, 25 Hz  Butterworth Filter1"),
    TARGET_STRING("Numerator"), 0, 4, 0 },

  { 83, TARGET_STRING("Sensor Read and Process/3rd Order, 25 Hz  Butterworth Filter1"),
    TARGET_STRING("Denominator"), 0, 4, 0 },

  { 84, TARGET_STRING("Sensor Read and Process/3rd Order, 25 Hz  Butterworth Filter1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 85, TARGET_STRING("Sensor Read and Process/Unit Delay1"),
    TARGET_STRING("InitialCondition"), 0, 1, 0 },

  { 86, TARGET_STRING("Sensor Read and Process/GUI/BTLock"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 87, TARGET_STRING("Sensor Read and Process/GUI/BTRun"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 88, TARGET_STRING("Sensor Read and Process/GUI/BTmeasureWeight"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 89, TARGET_STRING("Sensor Read and Process/GUI/BTresetStateVariables"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 90, TARGET_STRING("Sensor Read and Process/GUI/BTzeroLeft"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 91, TARGET_STRING("Sensor Read and Process/GUI/BTzeroRight"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 92, TARGET_STRING("Sensor Read and Process/GUI/LOCK_"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 93, TARGET_STRING("Sensor Read and Process/GUI/NODE1P"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 94, TARGET_STRING("Sensor Read and Process/GUI/NODE1S"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 95, TARGET_STRING("Sensor Read and Process/GUI/NODE2P"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 96, TARGET_STRING("Sensor Read and Process/GUI/NODE2S"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 97, TARGET_STRING("Sensor Read and Process/GUI/NODE3P"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 98, TARGET_STRING("Sensor Read and Process/GUI/NODE3S"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 99, TARGET_STRING("Sensor Read and Process/GUI/NODE4P"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 100, TARGET_STRING("Sensor Read and Process/GUI/NODE4S"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 101, TARGET_STRING("Sensor Read and Process/GUI/NUMNODES"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 102, TARGET_STRING("Sensor Read and Process/GUI/REST_"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 103, TARGET_STRING("Sensor Read and Process/GUI/RUN_"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 104, TARGET_STRING("Sensor Read and Process/GUI/SETZERO_"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 105, TARGET_STRING("Sensor Read and Process/GUI/STANCE_"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 106, TARGET_STRING("Sensor Read and Process/GUI/SWING_"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 107, TARGET_STRING("Sensor Read and Process/GUI/UseIterativeLearning"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 108, TARGET_STRING("Sensor Read and Process/GUI/num_strike"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 109, TARGET_STRING("Sensor Read and Process/GUI/num_swing"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 110, TARGET_STRING("Sensor Read and Process/GUI/pflex_max"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 111, TARGET_STRING("Sensor Read and Process/GUI/pflex_sing"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 112, TARGET_STRING("Sensor Read and Process/GUI/thresh_mid"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 113, TARGET_STRING("Sensor Read and Process/GUI/thresh_swing"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 114, TARGET_STRING("Sensor Read and Process/GUI/to_pct"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 115, TARGET_STRING("Sensor Read and Process/GUI/tstance_avg_init"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 116, TARGET_STRING("Sensor Read and Process/GUI/tstance_pct"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 117, TARGET_STRING("Sensor Read and Process/GUI/tstride_avg_init"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 118, TARGET_STRING("Sensor Read and Process/GUI/tswing_min"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 119, TARGET_STRING("Sensor Read and Process/GUI/LOCK"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 120, TARGET_STRING("Sensor Read and Process/GUI/REST"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 121, TARGET_STRING("Sensor Read and Process/GUI/RUN"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 122, TARGET_STRING("Sensor Read and Process/GUI/SETZERO"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 123, TARGET_STRING("Sensor Read and Process/GUI/STANCE"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 124, TARGET_STRING("Sensor Read and Process/GUI/SWING"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 125, TARGET_STRING("Sensor Read and Process/GUI/degtorad"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 126, TARGET_STRING("Sensor Read and Process/Scopes/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 127, TARGET_STRING("Sensor Read and Process/Scopes/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 128, TARGET_STRING("Sensor Read and Process/Scopes/Gain5"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 129, TARGET_STRING("Sensor Read and Process/Zero Level Treadmill/calibration"),
    TARGET_STRING("Gain"), 0, 3, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &speed_controllerDec10_B.desiredSpeed,/* 0: Signal */
  &speed_controllerDec10_B.walkMode_out,/* 1: Signal */
  &speed_controllerDec10_B.print,      /* 2: Signal */
  &speed_controllerDec10_B.Constant1,  /* 3: Signal */
  &speed_controllerDec10_B.Saturation1,/* 4: Signal */
  &speed_controllerDec10_B.walkMode[0],/* 5: Signal */
  &speed_controllerDec10_B.strideStateR_out,/* 6: Signal */
  &speed_controllerDec10_B.tStride_out,/* 7: Signal */
  &speed_controllerDec10_B.tStride_avg_out,/* 8: Signal */
  &speed_controllerDec10_B.tStance_avg_out,/* 9: Signal */
  &speed_controllerDec10_B.tSwing_avg_out,/* 10: Signal */
  &speed_controllerDec10_B.pctStride_out,/* 11: Signal */
  &speed_controllerDec10_B.pctStance_out,/* 12: Signal */
  &speed_controllerDec10_B.pctSwing_out,/* 13: Signal */
  &speed_controllerDec10_B.tStance_out_p,/* 14: Signal */
  &speed_controllerDec10_B.weight_out, /* 15: Signal */
  &speed_controllerDec10_B.tStance_out,/* 16: Signal */
  &speed_controllerDec10_B.strideStateR,/* 17: Signal */
  &speed_controllerDec10_B.tStride_avg,/* 18: Signal */
  &speed_controllerDec10_B.Analoginput3[0],/* 19: Signal */
  &speed_controllerDec10_B.GRFvoltage[0],/* 20: Signal */
  &speed_controllerDec10_B.UnitDelay1[0],/* 21: Signal */
  &speed_controllerDec10_B.UseIterativeLearning,/* 22: Signal */
  &speed_controllerDec10_B.num_strike, /* 23: Signal */
  &speed_controllerDec10_B.num_swing,  /* 24: Signal */
  &speed_controllerDec10_B.thresh_mid, /* 25: Signal */
  &speed_controllerDec10_B.thresh_swing,/* 26: Signal */
  &speed_controllerDec10_B.to_pct,     /* 27: Signal */
  &speed_controllerDec10_B.tstance_avg_init,/* 28: Signal */
  &speed_controllerDec10_B.tstance_pct,/* 29: Signal */
  &speed_controllerDec10_B.tstride_avg_init,/* 30: Signal */
  &speed_controllerDec10_B.tswing_min, /* 31: Signal */
  &speed_controllerDec10_B.LOCK,       /* 32: Signal */
  &speed_controllerDec10_B.REST,       /* 33: Signal */
  &speed_controllerDec10_B.RUN,        /* 34: Signal */
  &speed_controllerDec10_B.SETZERO,    /* 35: Signal */
  &speed_controllerDec10_B.STANCE,     /* 36: Signal */
  &speed_controllerDec10_B.SWING,      /* 37: Signal */
  &speed_controllerDec10_B.pflex,      /* 38: Signal */
  &speed_controllerDec10_B.MinMax1,    /* 39: Signal */
  &speed_controllerDec10_B.strideStateRight,/* 40: Signal */
  &speed_controllerDec10_B.vGRFLeftN,  /* 41: Signal */
  &speed_controllerDec10_B.vGRFRightN, /* 42: Signal */
  &speed_controllerDec10_B.Sum1,       /* 43: Signal */
  &speed_controllerDec10_B.GRF_zero[0],/* 44: Signal */
  &speed_controllerDec10_B.calibration[0],/* 45: Signal */
  &speed_controllerDec10_P.Constant1_Value,/* 46: Block Parameter */
  &speed_controllerDec10_P.Saturation1_UpperSat,/* 47: Block Parameter */
  &speed_controllerDec10_P.Saturation1_LowerSat,/* 48: Block Parameter */
  &speed_controllerDec10_P.Analogoutput1_P1[0],/* 49: Block Parameter */
  &speed_controllerDec10_P.Analogoutput1_P2[0],/* 50: Block Parameter */
  &speed_controllerDec10_P.Analogoutput1_P3[0],/* 51: Block Parameter */
  &speed_controllerDec10_P.Analogoutput1_P4,/* 52: Block Parameter */
  &speed_controllerDec10_P.Analogoutput1_P5,/* 53: Block Parameter */
  &speed_controllerDec10_P.subjMass_InitialValue,/* 54: Block Parameter */
  &speed_controllerDec10_P.GRF_Threshold_Down_Value,/* 55: Block Parameter */
  &speed_controllerDec10_P.GRF_Threshold_Up_Value,/* 56: Block Parameter */
  &speed_controllerDec10_P.Gain1_Gain_p,/* 57: Block Parameter */
  &speed_controllerDec10_P.Gain10_Gain,/* 58: Block Parameter */
  &speed_controllerDec10_P.Gain2_Gain_c,/* 59: Block Parameter */
  &speed_controllerDec10_P.Gain3_Gain, /* 60: Block Parameter */
  &speed_controllerDec10_P.Gain4_Gain, /* 61: Block Parameter */
  &speed_controllerDec10_P.Gain5_Gain_e,/* 62: Block Parameter */
  &speed_controllerDec10_P.Gain8_Gain, /* 63: Block Parameter */
  &speed_controllerDec10_P.Gain9_Gain, /* 64: Block Parameter */
  &speed_controllerDec10_P.Analoginput3_P1,/* 65: Block Parameter */
  &speed_controllerDec10_P.Analoginput3_P2,/* 66: Block Parameter */
  &speed_controllerDec10_P.Analoginput3_P3,/* 67: Block Parameter */
  &speed_controllerDec10_P.Analoginput3_P4,/* 68: Block Parameter */
  &speed_controllerDec10_P.Analoginput3_P5,/* 69: Block Parameter */
  &speed_controllerDec10_P.Analoginput3_P6,/* 70: Block Parameter */
  &speed_controllerDec10_P.Analoginput3_P7,/* 71: Block Parameter */
  &speed_controllerDec10_P.Setup1_P1,  /* 72: Block Parameter */
  &speed_controllerDec10_P.Setup1_P2,  /* 73: Block Parameter */
  &speed_controllerDec10_P.Setup1_P3,  /* 74: Block Parameter */
  &speed_controllerDec10_P.Setup4_P1,  /* 75: Block Parameter */
  &speed_controllerDec10_P.Setup4_P2,  /* 76: Block Parameter */
  &speed_controllerDec10_P.Setup4_P3,  /* 77: Block Parameter */
  &speed_controllerDec10_P.Setup4_P4,  /* 78: Block Parameter */
  &speed_controllerDec10_P.Setup4_P5,  /* 79: Block Parameter */
  &speed_controllerDec10_P.Setup4_P6,  /* 80: Block Parameter */
  &speed_controllerDec10_P.Setup4_P7,  /* 81: Block Parameter */
  &speed_controllerDec10_P.urdOrder25HzButterworthFilter1_[0],/* 82: Block Parameter */
  &speed_controllerDec10_P.urdOrder25HzButterworthFilter_m[0],/* 83: Block Parameter */
  &speed_controllerDec10_P.urdOrder25HzButterworthFilter_f,/* 84: Block Parameter */
  &speed_controllerDec10_P.UnitDelay1_InitialCondition[0],/* 85: Block Parameter */
  &speed_controllerDec10_P.BTLock_Value,/* 86: Block Parameter */
  &speed_controllerDec10_P.BTRun_Value,/* 87: Block Parameter */
  &speed_controllerDec10_P.BTmeasureWeight_Value,/* 88: Block Parameter */
  &speed_controllerDec10_P.BTresetStateVariables_Value,/* 89: Block Parameter */
  &speed_controllerDec10_P.BTzeroLeft_Value,/* 90: Block Parameter */
  &speed_controllerDec10_P.BTzeroRight_Value,/* 91: Block Parameter */
  &speed_controllerDec10_P.LOCK_Value, /* 92: Block Parameter */
  &speed_controllerDec10_P.NODE1P_Value,/* 93: Block Parameter */
  &speed_controllerDec10_P.NODE1S_Value,/* 94: Block Parameter */
  &speed_controllerDec10_P.NODE2P_Value,/* 95: Block Parameter */
  &speed_controllerDec10_P.NODE2S_Value,/* 96: Block Parameter */
  &speed_controllerDec10_P.NODE3P_Value,/* 97: Block Parameter */
  &speed_controllerDec10_P.NODE3S_Value,/* 98: Block Parameter */
  &speed_controllerDec10_P.NODE4P_Value,/* 99: Block Parameter */
  &speed_controllerDec10_P.NODE4S_Value,/* 100: Block Parameter */
  &speed_controllerDec10_P.NUMNODES_Value,/* 101: Block Parameter */
  &speed_controllerDec10_P.REST_Value, /* 102: Block Parameter */
  &speed_controllerDec10_P.RUN_Value,  /* 103: Block Parameter */
  &speed_controllerDec10_P.SETZERO_Value,/* 104: Block Parameter */
  &speed_controllerDec10_P.STANCE_Value,/* 105: Block Parameter */
  &speed_controllerDec10_P.SWING_Value,/* 106: Block Parameter */
  &speed_controllerDec10_P.UseIterativeLearning_Value,/* 107: Block Parameter */
  &speed_controllerDec10_P.num_strike_Value,/* 108: Block Parameter */
  &speed_controllerDec10_P.num_swing_Value,/* 109: Block Parameter */
  &speed_controllerDec10_P.pflex_max_Value,/* 110: Block Parameter */
  &speed_controllerDec10_P.pflex_sing_Value,/* 111: Block Parameter */
  &speed_controllerDec10_P.thresh_mid_Value,/* 112: Block Parameter */
  &speed_controllerDec10_P.thresh_swing_Value,/* 113: Block Parameter */
  &speed_controllerDec10_P.to_pct_Value,/* 114: Block Parameter */
  &speed_controllerDec10_P.tstance_avg_init_Value,/* 115: Block Parameter */
  &speed_controllerDec10_P.tstance_pct_Value,/* 116: Block Parameter */
  &speed_controllerDec10_P.tstride_avg_init_Value,/* 117: Block Parameter */
  &speed_controllerDec10_P.tswing_min_Value,/* 118: Block Parameter */
  &speed_controllerDec10_P.LOCK_Gain,  /* 119: Block Parameter */
  &speed_controllerDec10_P.REST_Gain,  /* 120: Block Parameter */
  &speed_controllerDec10_P.RUN_Gain,   /* 121: Block Parameter */
  &speed_controllerDec10_P.SETZERO_Gain,/* 122: Block Parameter */
  &speed_controllerDec10_P.STANCE_Gain,/* 123: Block Parameter */
  &speed_controllerDec10_P.SWING_Gain, /* 124: Block Parameter */
  &speed_controllerDec10_P.degtorad_Gain,/* 125: Block Parameter */
  &speed_controllerDec10_P.Gain1_Gain, /* 126: Block Parameter */
  &speed_controllerDec10_P.Gain2_Gain, /* 127: Block Parameter */
  &speed_controllerDec10_P.Gain5_Gain, /* 128: Block Parameter */
  &speed_controllerDec10_P.calibration_Gain[0],/* 129: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  2,                                   /* 2 */
  1,                                   /* 3 */
  20,                                  /* 4 */
  1,                                   /* 5 */
  12,                                  /* 6 */
  1,                                   /* 7 */
  1,                                   /* 8 */
  4                                    /* 9 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.001, 0.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    0, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 46,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 84,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2866456278U,
    1129515206U,
    798124976U,
    1487545494U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  speed_controllerDec10_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void speed_controllerDec10_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(speed_controllerDec10_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(speed_controllerDec10_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(speed_controllerDec10_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(speed_controllerDec10_M->DataMapInfo.mmi,
    rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(speed_controllerDec10_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  speed_controllerDec10_M->DataMapInfo.mmi.InstanceMap.rtpAddress =
    rtmGetDefaultParam(speed_controllerDec10_M);
  speed_controllerDec10_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_speed_controllerDec10_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(speed_controllerDec10_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(speed_controllerDec10_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(speed_controllerDec10_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void speed_controllerDec10_host_InitializeDataMapInfo
    (speed_controllerDec10_host_DataMapInfo_T *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: speed_controllerDec10_capi.c */
