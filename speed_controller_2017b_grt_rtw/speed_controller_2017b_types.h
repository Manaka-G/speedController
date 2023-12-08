/*
 * speed_controller_2017b_types.h
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

#ifndef RTW_HEADER_speed_controller_2017b_types_h_
#define RTW_HEADER_speed_controller_2017b_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_state_
#define DEFINED_TYPEDEF_FOR_state_

typedef struct {
  real_T strideStateR;
  real_T tStride;
  real_T tStride_avg;
  real_T tStance_avg;
  real_T pctStride;
  real_T pctStance;
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

/* Custom Type definition for MATLAB Function: '<Root>/controller' */
#ifndef struct_tag_svdAR3tTkTv0t7clXhMJbiG
#define struct_tag_svdAR3tTkTv0t7clXhMJbiG

struct tag_svdAR3tTkTv0t7clXhMJbiG
{
  real_T breaks[5];
  real_T coefs[16];
};

#endif                                 /*struct_tag_svdAR3tTkTv0t7clXhMJbiG*/

#ifndef typedef_svdAR3tTkTv0t7clXhMJbiG_speed_T
#define typedef_svdAR3tTkTv0t7clXhMJbiG_speed_T

typedef struct tag_svdAR3tTkTv0t7clXhMJbiG svdAR3tTkTv0t7clXhMJbiG_speed_T;

#endif                                 /*typedef_svdAR3tTkTv0t7clXhMJbiG_speed_T*/

/* Parameters (auto storage) */
typedef struct P_speed_controller_2017b_T_ P_speed_controller_2017b_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_speed_controller_2017b_T
  RT_MODEL_speed_controller_2017b_T;

#endif                                 /* RTW_HEADER_speed_controller_2017b_types_h_ */
