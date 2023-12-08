/*
 * speed_controller_2017b_data.c
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

/* Block parameters (auto storage) */
P_speed_controller_2017b_T speed_controller_2017b_P = {
  /* Computed Parameter: Setup1_P1_Size
   * Referenced by: '<S1>/Setup1'
   */
  { 1.0, 1.0 },

  /* Expression: pciSlot
   * Referenced by: '<S1>/Setup1'
   */
  -1.0,

  /* Computed Parameter: Setup1_P2_Size
   * Referenced by: '<S1>/Setup1'
   */
  { 1.0, 1.0 },

  /* Expression: lowerDirection
   * Referenced by: '<S1>/Setup1'
   */
  2.0,

  /* Computed Parameter: Setup1_P3_Size
   * Referenced by: '<S1>/Setup1'
   */
  { 1.0, 1.0 },

  /* Expression: upperDirection
   * Referenced by: '<S1>/Setup1'
   */
  2.0,

  /* Computed Parameter: Setup4_P1_Size
   * Referenced by: '<S1>/Setup4'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S1>/Setup4'
   */
  1.0,

  /* Computed Parameter: Setup4_P2_Size
   * Referenced by: '<S1>/Setup4'
   */
  { 1.0, 1.0 },

  /* Expression: cal
   * Referenced by: '<S1>/Setup4'
   */
  1.0,

  /* Computed Parameter: Setup4_P3_Size
   * Referenced by: '<S1>/Setup4'
   */
  { 1.0, 1.0 },

  /* Expression: initiator
   * Referenced by: '<S1>/Setup4'
   */
  1.0,

  /* Computed Parameter: Setup4_P4_Size
   * Referenced by: '<S1>/Setup4'
   */
  { 1.0, 1.0 },

  /* Expression: pciSlot
   * Referenced by: '<S1>/Setup4'
   */
  -1.0,

  /* Computed Parameter: Setup4_P5_Size
   * Referenced by: '<S1>/Setup4'
   */
  { 1.0, 1.0 },

  /* Expression: adChannel
   * Referenced by: '<S1>/Setup4'
   */
  20.0,

  /* Computed Parameter: Setup4_P6_Size
   * Referenced by: '<S1>/Setup4'
   */
  { 1.0, 1.0 },

  /* Expression: adRange
   * Referenced by: '<S1>/Setup4'
   */
  1.0,

  /* Computed Parameter: Setup4_P7_Size
   * Referenced by: '<S1>/Setup4'
   */
  { 1.0, 1.0 },

  /* Expression: adCoupling
   * Referenced by: '<S1>/Setup4'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S4>/BTmeasureWeight'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/BTzeroLeft'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/BTzeroRight'
   */
  0.0,

  /* Computed Parameter: Analoginput3_P1_Size
   * Referenced by: '<S1>/Analog input3'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S1>/Analog input3'
   */
  1.0,

  /* Computed Parameter: Analoginput3_P2_Size
   * Referenced by: '<S1>/Analog input3'
   */
  { 1.0, 1.0 },

  /* Expression: channels
   * Referenced by: '<S1>/Analog input3'
   */
  20.0,

  /* Computed Parameter: Analoginput3_P3_Size
   * Referenced by: '<S1>/Analog input3'
   */
  { 1.0, 1.0 },

  /* Expression: range
   * Referenced by: '<S1>/Analog input3'
   */
  1.0,

  /* Computed Parameter: Analoginput3_P4_Size
   * Referenced by: '<S1>/Analog input3'
   */
  { 1.0, 1.0 },

  /* Expression: coupling
   * Referenced by: '<S1>/Analog input3'
   */
  1.0,

  /* Computed Parameter: Analoginput3_P5_Size
   * Referenced by: '<S1>/Analog input3'
   */
  { 1.0, 1.0 },

  /* Expression: ts
   * Referenced by: '<S1>/Analog input3'
   */
  0.001,

  /* Computed Parameter: Analoginput3_P6_Size
   * Referenced by: '<S1>/Analog input3'
   */
  { 1.0, 1.0 },

  /* Expression: initiator
   * Referenced by: '<S1>/Analog input3'
   */
  1.0,

  /* Computed Parameter: Analoginput3_P7_Size
   * Referenced by: '<S1>/Analog input3'
   */
  { 1.0, 1.0 },

  /* Expression: pciSlot
   * Referenced by: '<S1>/Analog input3'
   */
  -1.0,

  /* Expression: [0.000416546139075769	0.00124963841722731	0.00124963841722731	0.000416546139075769]
   * Referenced by: '<S1>/3rd Order, 25 Hz  Butterworth Filter1'
   */
  { 0.000416546139075769, 0.00124963841722731, 0.00124963841722731,
    0.000416546139075769 },

  /* Expression: [1	-2.68615739654814	2.41965511096647	-0.730165345305723]
   * Referenced by: '<S1>/3rd Order, 25 Hz  Butterworth Filter1'
   */
  { 1.0, -2.68615739654814, 2.41965511096647, -0.730165345305723 },

  /* Expression: 0
   * Referenced by: '<S1>/3rd Order, 25 Hz  Butterworth Filter1'
   */
  0.0,

  /* Expression: [500;500;1000;800;400;400;500;500;1000;800;400;400]
   * Referenced by: '<S7>/calibration'
   */
  { 500.0, 500.0, 1000.0, 800.0, 400.0, 400.0, 500.0, 500.0, 1000.0, 800.0,
    400.0, 400.0 },

  /* Expression: 1
   * Referenced by: '<S4>/REST_'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S4>/REST'
   */
  1.0,

  /* Expression: 2
   * Referenced by: '<S4>/SETZERO_'
   */
  2.0,

  /* Expression: 1
   * Referenced by: '<S4>/SETZERO'
   */
  1.0,

  /* Expression: 3
   * Referenced by: '<S4>/SWING_'
   */
  3.0,

  /* Expression: 1
   * Referenced by: '<S4>/SWING'
   */
  1.0,

  /* Expression: 4
   * Referenced by: '<S4>/STANCE_'
   */
  4.0,

  /* Expression: 1
   * Referenced by: '<S4>/STANCE'
   */
  1.0,

  /* Expression: 5
   * Referenced by: '<S4>/LOCK_'
   */
  5.0,

  /* Expression: 1
   * Referenced by: '<S4>/LOCK'
   */
  1.0,

  /* Expression: 6
   * Referenced by: '<S4>/RUN_'
   */
  6.0,

  /* Expression: 1
   * Referenced by: '<S4>/RUN'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S4>/BTresetStateVariables'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<S1>/GRF_Threshold_Up'
   */
  100.0,

  /* Expression: 50
   * Referenced by: '<S1>/GRF_Threshold_Down'
   */
  50.0,

  /* Expression: 1
   * Referenced by: '<S1>/Gain3'
   */
  1.0,

  /* Expression: 500
   * Referenced by: '<S5>/Gain3'
   */
  500.0,

  /* Expression: 1
   * Referenced by: '<S5>/Gain6'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S5>/Gain7'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S4>/BTRun'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/BTLock'
   */
  0.0,

  /* Expression: [0;5]
   * Referenced by: '<S1>/Unit Delay1'
   */
  { 0.0, 5.0 },

  /* Expression: 1
   * Referenced by: '<S1>/Gain4'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Gain5'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Gain8'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Gain9'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/subjMass'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Saturation'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<Root>/Saturation'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant2'
   */
  0.0,

  /* Computed Parameter: Analogoutput_P1_Size
   * Referenced by: '<Root>/Analog output'
   */
  { 1.0, 4.0 },

  /* Expression: channel
   * Referenced by: '<Root>/Analog output'
   */
  { 1.0, 2.0, 3.0, 4.0 },

  /* Computed Parameter: Analogoutput_P2_Size
   * Referenced by: '<Root>/Analog output'
   */
  { 1.0, 4.0 },

  /* Expression: reset
   * Referenced by: '<Root>/Analog output'
   */
  { 1.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: Analogoutput_P3_Size
   * Referenced by: '<Root>/Analog output'
   */
  { 1.0, 4.0 },

  /* Expression: initValue
   * Referenced by: '<Root>/Analog output'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Computed Parameter: Analogoutput_P4_Size
   * Referenced by: '<Root>/Analog output'
   */
  { 1.0, 1.0 },

  /* Expression: ts
   * Referenced by: '<Root>/Analog output'
   */
  0.001,

  /* Computed Parameter: Analogoutput_P5_Size
   * Referenced by: '<Root>/Analog output'
   */
  { 1.0, 1.0 },

  /* Expression: pciSlot
   * Referenced by: '<Root>/Analog output'
   */
  -1.0
};
