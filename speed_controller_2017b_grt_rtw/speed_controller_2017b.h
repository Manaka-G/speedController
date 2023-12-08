/*
 * speed_controller_2017b.h
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

#ifndef RTW_HEADER_speed_controller_2017b_h_
#define RTW_HEADER_speed_controller_2017b_h_
#include <stddef.h>
#include <string.h>
#include <float.h>
#ifndef speed_controller_2017b_COMMON_INCLUDES_
# define speed_controller_2017b_COMMON_INCLUDES_
#include <xpcimports.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#endif                                 /* speed_controller_2017b_COMMON_INCLUDES_ */

#include "speed_controller_2017b_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T Analoginput3[20];             /* '<S1>/Analog input3' */
  real_T strideStateR;                 /* '<S1>/Gain3' */
  real_T strideStateRight;             /* '<S5>/Gain3' */
  real_T vGRFLeftN;                    /* '<S5>/Gain6' */
  real_T vGRFRightN;                   /* '<S5>/Gain7' */
  real_T tStride_avg;                  /* '<S1>/Gain4' */
  real_T tStance_avg;                  /* '<S1>/Gain5' */
  real_T pctStride;                    /* '<S1>/Gain8' */
  real_T pctStance;                    /* '<S1>/Gain9' */
  real_T Saturation;                   /* '<Root>/Saturation' */
  real_T Constant2;                    /* '<Root>/Constant2' */
  real_T print;                        /* '<Root>/controller' */
  real_T GRF_zero[12];                 /* '<S7>/Zero Level Force Plates' */
  real_T tStride_out;                  /* '<S1>/State Determination' */
} B_speed_controller_2017b_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T urdOrder25HzButterworthFilter1_[36];/* '<S1>/3rd Order, 25 Hz  Butterworth Filter1' */
  real_T UnitDelay1_DSTATE[2];         /* '<S1>/Unit Delay1' */
  real_T urdOrder25HzButterworthFilter_h[12];/* '<S1>/3rd Order, 25 Hz  Butterworth Filter1' */
  real_T subjMass;                     /* '<S1>/subjMass' */
  real_T weight;                       /* '<S1>/measureSubjWeight' */
  real_T voltOff[12];                  /* '<S7>/Zero Level Force Plates' */
  real_T strideStateR;                 /* '<S1>/State Determination' */
  real_T tStride;                      /* '<S1>/State Determination' */
  real_T tStance;                      /* '<S1>/State Determination' */
  real_T tSwing;                       /* '<S1>/State Determination' */
  real_T tStride_array[20];            /* '<S1>/State Determination' */
  real_T tStance_array[20];            /* '<S1>/State Determination' */
  real_T Setup4_RWORK[2];              /* '<S1>/Setup4' */
  real_T Analoginput3_RWORK[2];        /* '<S1>/Analog input3' */
  real_T Analogoutput_RWORK[16];       /* '<Root>/Analog output' */
  int_T Setup1_IWORK;                  /* '<S1>/Setup1' */
  int_T Setup4_IWORK[2];               /* '<S1>/Setup4' */
  int_T Analoginput3_IWORK[2];         /* '<S1>/Analog input3' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S9>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_m;                 /* '<S10>/S-Function' */

  int_T Analogoutput_IWORK[2];         /* '<Root>/Analog output' */
  boolean_T strideStateR_not_empty;    /* '<S1>/State Determination' */
} DW_speed_controller_2017b_T;

/* Parameters (auto storage) */
struct P_speed_controller_2017b_T_ {
  real_T Setup1_P1_Size[2];            /* Computed Parameter: Setup1_P1_Size
                                        * Referenced by: '<S1>/Setup1'
                                        */
  real_T Setup1_P1;                    /* Expression: pciSlot
                                        * Referenced by: '<S1>/Setup1'
                                        */
  real_T Setup1_P2_Size[2];            /* Computed Parameter: Setup1_P2_Size
                                        * Referenced by: '<S1>/Setup1'
                                        */
  real_T Setup1_P2;                    /* Expression: lowerDirection
                                        * Referenced by: '<S1>/Setup1'
                                        */
  real_T Setup1_P3_Size[2];            /* Computed Parameter: Setup1_P3_Size
                                        * Referenced by: '<S1>/Setup1'
                                        */
  real_T Setup1_P3;                    /* Expression: upperDirection
                                        * Referenced by: '<S1>/Setup1'
                                        */
  real_T Setup4_P1_Size[2];            /* Computed Parameter: Setup4_P1_Size
                                        * Referenced by: '<S1>/Setup4'
                                        */
  real_T Setup4_P1;                    /* Expression: id
                                        * Referenced by: '<S1>/Setup4'
                                        */
  real_T Setup4_P2_Size[2];            /* Computed Parameter: Setup4_P2_Size
                                        * Referenced by: '<S1>/Setup4'
                                        */
  real_T Setup4_P2;                    /* Expression: cal
                                        * Referenced by: '<S1>/Setup4'
                                        */
  real_T Setup4_P3_Size[2];            /* Computed Parameter: Setup4_P3_Size
                                        * Referenced by: '<S1>/Setup4'
                                        */
  real_T Setup4_P3;                    /* Expression: initiator
                                        * Referenced by: '<S1>/Setup4'
                                        */
  real_T Setup4_P4_Size[2];            /* Computed Parameter: Setup4_P4_Size
                                        * Referenced by: '<S1>/Setup4'
                                        */
  real_T Setup4_P4;                    /* Expression: pciSlot
                                        * Referenced by: '<S1>/Setup4'
                                        */
  real_T Setup4_P5_Size[2];            /* Computed Parameter: Setup4_P5_Size
                                        * Referenced by: '<S1>/Setup4'
                                        */
  real_T Setup4_P5;                    /* Expression: adChannel
                                        * Referenced by: '<S1>/Setup4'
                                        */
  real_T Setup4_P6_Size[2];            /* Computed Parameter: Setup4_P6_Size
                                        * Referenced by: '<S1>/Setup4'
                                        */
  real_T Setup4_P6;                    /* Expression: adRange
                                        * Referenced by: '<S1>/Setup4'
                                        */
  real_T Setup4_P7_Size[2];            /* Computed Parameter: Setup4_P7_Size
                                        * Referenced by: '<S1>/Setup4'
                                        */
  real_T Setup4_P7;                    /* Expression: adCoupling
                                        * Referenced by: '<S1>/Setup4'
                                        */
  real_T BTmeasureWeight_Value;        /* Expression: 0
                                        * Referenced by: '<S4>/BTmeasureWeight'
                                        */
  real_T BTzeroLeft_Value;             /* Expression: 0
                                        * Referenced by: '<S4>/BTzeroLeft'
                                        */
  real_T BTzeroRight_Value;            /* Expression: 0
                                        * Referenced by: '<S4>/BTzeroRight'
                                        */
  real_T Analoginput3_P1_Size[2];      /* Computed Parameter: Analoginput3_P1_Size
                                        * Referenced by: '<S1>/Analog input3'
                                        */
  real_T Analoginput3_P1;              /* Expression: id
                                        * Referenced by: '<S1>/Analog input3'
                                        */
  real_T Analoginput3_P2_Size[2];      /* Computed Parameter: Analoginput3_P2_Size
                                        * Referenced by: '<S1>/Analog input3'
                                        */
  real_T Analoginput3_P2;              /* Expression: channels
                                        * Referenced by: '<S1>/Analog input3'
                                        */
  real_T Analoginput3_P3_Size[2];      /* Computed Parameter: Analoginput3_P3_Size
                                        * Referenced by: '<S1>/Analog input3'
                                        */
  real_T Analoginput3_P3;              /* Expression: range
                                        * Referenced by: '<S1>/Analog input3'
                                        */
  real_T Analoginput3_P4_Size[2];      /* Computed Parameter: Analoginput3_P4_Size
                                        * Referenced by: '<S1>/Analog input3'
                                        */
  real_T Analoginput3_P4;              /* Expression: coupling
                                        * Referenced by: '<S1>/Analog input3'
                                        */
  real_T Analoginput3_P5_Size[2];      /* Computed Parameter: Analoginput3_P5_Size
                                        * Referenced by: '<S1>/Analog input3'
                                        */
  real_T Analoginput3_P5;              /* Expression: ts
                                        * Referenced by: '<S1>/Analog input3'
                                        */
  real_T Analoginput3_P6_Size[2];      /* Computed Parameter: Analoginput3_P6_Size
                                        * Referenced by: '<S1>/Analog input3'
                                        */
  real_T Analoginput3_P6;              /* Expression: initiator
                                        * Referenced by: '<S1>/Analog input3'
                                        */
  real_T Analoginput3_P7_Size[2];      /* Computed Parameter: Analoginput3_P7_Size
                                        * Referenced by: '<S1>/Analog input3'
                                        */
  real_T Analoginput3_P7;              /* Expression: pciSlot
                                        * Referenced by: '<S1>/Analog input3'
                                        */
  real_T urdOrder25HzButterworthFilter1_[4];/* Expression: [0.000416546139075769	0.00124963841722731	0.00124963841722731	0.000416546139075769]
                                             * Referenced by: '<S1>/3rd Order, 25 Hz  Butterworth Filter1'
                                             */
  real_T urdOrder25HzButterworthFilter_h[4];/* Expression: [1	-2.68615739654814	2.41965511096647	-0.730165345305723]
                                             * Referenced by: '<S1>/3rd Order, 25 Hz  Butterworth Filter1'
                                             */
  real_T urdOrder25HzButterworthFilter_e;/* Expression: 0
                                          * Referenced by: '<S1>/3rd Order, 25 Hz  Butterworth Filter1'
                                          */
  real_T calibration_Gain[12];         /* Expression: [500;500;1000;800;400;400;500;500;1000;800;400;400]
                                        * Referenced by: '<S7>/calibration'
                                        */
  real_T REST_Value;                   /* Expression: 1
                                        * Referenced by: '<S4>/REST_'
                                        */
  real_T REST_Gain;                    /* Expression: 1
                                        * Referenced by: '<S4>/REST'
                                        */
  real_T SETZERO_Value;                /* Expression: 2
                                        * Referenced by: '<S4>/SETZERO_'
                                        */
  real_T SETZERO_Gain;                 /* Expression: 1
                                        * Referenced by: '<S4>/SETZERO'
                                        */
  real_T SWING_Value;                  /* Expression: 3
                                        * Referenced by: '<S4>/SWING_'
                                        */
  real_T SWING_Gain;                   /* Expression: 1
                                        * Referenced by: '<S4>/SWING'
                                        */
  real_T STANCE_Value;                 /* Expression: 4
                                        * Referenced by: '<S4>/STANCE_'
                                        */
  real_T STANCE_Gain;                  /* Expression: 1
                                        * Referenced by: '<S4>/STANCE'
                                        */
  real_T LOCK_Value;                   /* Expression: 5
                                        * Referenced by: '<S4>/LOCK_'
                                        */
  real_T LOCK_Gain;                    /* Expression: 1
                                        * Referenced by: '<S4>/LOCK'
                                        */
  real_T RUN_Value;                    /* Expression: 6
                                        * Referenced by: '<S4>/RUN_'
                                        */
  real_T RUN_Gain;                     /* Expression: 1
                                        * Referenced by: '<S4>/RUN'
                                        */
  real_T BTresetStateVariables_Value;  /* Expression: 0
                                        * Referenced by: '<S4>/BTresetStateVariables'
                                        */
  real_T GRF_Threshold_Up_Value;       /* Expression: 100
                                        * Referenced by: '<S1>/GRF_Threshold_Up'
                                        */
  real_T GRF_Threshold_Down_Value;     /* Expression: 50
                                        * Referenced by: '<S1>/GRF_Threshold_Down'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1
                                        * Referenced by: '<S1>/Gain3'
                                        */
  real_T Gain3_Gain_b;                 /* Expression: 500
                                        * Referenced by: '<S5>/Gain3'
                                        */
  real_T Gain6_Gain;                   /* Expression: 1
                                        * Referenced by: '<S5>/Gain6'
                                        */
  real_T Gain7_Gain;                   /* Expression: 1
                                        * Referenced by: '<S5>/Gain7'
                                        */
  real_T BTRun_Value;                  /* Expression: 0
                                        * Referenced by: '<S4>/BTRun'
                                        */
  real_T BTLock_Value;                 /* Expression: 0
                                        * Referenced by: '<S4>/BTLock'
                                        */
  real_T UnitDelay1_InitialCondition[2];/* Expression: [0;5]
                                         * Referenced by: '<S1>/Unit Delay1'
                                         */
  real_T Gain4_Gain;                   /* Expression: 1
                                        * Referenced by: '<S1>/Gain4'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1
                                        * Referenced by: '<S1>/Gain5'
                                        */
  real_T Gain8_Gain;                   /* Expression: 1
                                        * Referenced by: '<S1>/Gain8'
                                        */
  real_T Gain9_Gain;                   /* Expression: 1
                                        * Referenced by: '<S1>/Gain9'
                                        */
  real_T subjMass_InitialValue;        /* Expression: 0
                                        * Referenced by: '<S1>/subjMass'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -1
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Analogoutput_P1_Size[2];      /* Computed Parameter: Analogoutput_P1_Size
                                        * Referenced by: '<Root>/Analog output'
                                        */
  real_T Analogoutput_P1[4];           /* Expression: channel
                                        * Referenced by: '<Root>/Analog output'
                                        */
  real_T Analogoutput_P2_Size[2];      /* Computed Parameter: Analogoutput_P2_Size
                                        * Referenced by: '<Root>/Analog output'
                                        */
  real_T Analogoutput_P2[4];           /* Expression: reset
                                        * Referenced by: '<Root>/Analog output'
                                        */
  real_T Analogoutput_P3_Size[2];      /* Computed Parameter: Analogoutput_P3_Size
                                        * Referenced by: '<Root>/Analog output'
                                        */
  real_T Analogoutput_P3[4];           /* Expression: initValue
                                        * Referenced by: '<Root>/Analog output'
                                        */
  real_T Analogoutput_P4_Size[2];      /* Computed Parameter: Analogoutput_P4_Size
                                        * Referenced by: '<Root>/Analog output'
                                        */
  real_T Analogoutput_P4;              /* Expression: ts
                                        * Referenced by: '<Root>/Analog output'
                                        */
  real_T Analogoutput_P5_Size[2];      /* Computed Parameter: Analogoutput_P5_Size
                                        * Referenced by: '<Root>/Analog output'
                                        */
  real_T Analogoutput_P5;              /* Expression: pciSlot
                                        * Referenced by: '<Root>/Analog output'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_speed_controller_2017b_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[1];
    SimStruct childSFunctions[4];
    SimStruct *childSFunctionPtrs[4];
    struct _ssBlkInfo2 blkInfo2[4];
    struct _ssSFcnModelMethods2 methods2[4];
    struct _ssSFcnModelMethods3 methods3[4];
    struct _ssSFcnModelMethods4 methods4[4];
    struct _ssStatesInfo2 statesInfo2[4];
    ssPeriodicStatesInfo periodicStatesInfo[4];
    struct _ssPortInfo2 inputOutputPortInfo2[4];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[4];
      struct _ssInPortUnit inputPortUnits[4];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn3;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_speed_controller_2017b_T speed_controller_2017b_P;

/* Block signals (auto storage) */
extern B_speed_controller_2017b_T speed_controller_2017b_B;

/* Block states (auto storage) */
extern DW_speed_controller_2017b_T speed_controller_2017b_DW;

/* External data declarations for dependent source files */
extern const real_T speed_controller_2017b_RGND;/* real_T ground */

/* Model entry point functions */
extern void speed_controller_2017b_initialize(void);
extern void speed_controller_2017b_step(void);
extern void speed_controller_2017b_terminate(void);

/* Real-time Model object */
extern RT_MODEL_speed_controller_2017b_T *const speed_controller_2017b_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'speed_controller_2017b'
 * '<S1>'   : 'speed_controller_2017b/Sensor Read and Process'
 * '<S2>'   : 'speed_controller_2017b/controller'
 * '<S3>'   : 'speed_controller_2017b/Sensor Read and Process/Control modes'
 * '<S4>'   : 'speed_controller_2017b/Sensor Read and Process/GUI'
 * '<S5>'   : 'speed_controller_2017b/Sensor Read and Process/Scopes'
 * '<S6>'   : 'speed_controller_2017b/Sensor Read and Process/State Determination'
 * '<S7>'   : 'speed_controller_2017b/Sensor Read and Process/Zero Level Treadmill'
 * '<S8>'   : 'speed_controller_2017b/Sensor Read and Process/measureSubjWeight'
 * '<S9>'   : 'speed_controller_2017b/Sensor Read and Process/Scopes/Scope 4'
 * '<S10>'  : 'speed_controller_2017b/Sensor Read and Process/Scopes/Scope 6'
 * '<S11>'  : 'speed_controller_2017b/Sensor Read and Process/Zero Level Treadmill/Zero Level Force Plates'
 */
#endif                                 /* RTW_HEADER_speed_controller_2017b_h_ */
