/*
 * speed_controllerDec10_types.h
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

#ifndef RTW_HEADER_speed_controllerDec10_types_h_
#define RTW_HEADER_speed_controllerDec10_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#ifndef DEFINED_TYPEDEF_FOR_state_
#define DEFINED_TYPEDEF_FOR_state_

typedef struct {
  real_T strideStateR;
  real_T tStride;
  real_T tStride_avg;
  real_T tStance_avg;
  real_T tSwing_avg;
  real_T pctStride;
  real_T pctStance;
  real_T pctSwing;
} state;

#endif

#ifndef DEFINED_TYPEDEF_FOR_constants_
#define DEFINED_TYPEDEF_FOR_constants_

typedef struct {
  real_T REST;
  real_T SETZERO;
  real_T SWING;
  real_T STANCE;
  real_T LOCK;
  real_T RUN;
} constants;

#endif

#ifndef DEFINED_TYPEDEF_FOR_WalkModeButtons_
#define DEFINED_TYPEDEF_FOR_WalkModeButtons_

typedef struct {
  real_T BTRun;
  real_T BTLock;
} WalkModeButtons;

#endif

#ifndef DEFINED_TYPEDEF_FOR_treadmillButtons_
#define DEFINED_TYPEDEF_FOR_treadmillButtons_

typedef struct {
  real_T BTmeasureWeight;
  real_T BTzeroLeft;
  real_T BTzeroRight;
} treadmillButtons;

#endif

#ifndef DEFINED_TYPEDEF_FOR_nodes_
#define DEFINED_TYPEDEF_FOR_nodes_

typedef struct {
  real_T NUMNODES;
  real_T NODE1P;
  real_T NODE1S;
  real_T NODE2P;
  real_T NODE2S;
  real_T NODE3P;
  real_T NODE3S;
  real_T NODE4P;
  real_T NODE4S;
} nodes;

#endif

/* Parameters (auto storage) */
typedef struct P_speed_controllerDec10_T_ P_speed_controllerDec10_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_speed_controllerDec10_T RT_MODEL_speed_controllerDec10_T;

#endif                                 /* RTW_HEADER_speed_controllerDec10_types_h_ */
