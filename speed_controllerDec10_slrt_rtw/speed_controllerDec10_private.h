/*
 * speed_controllerDec10_private.h
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

#ifndef RTW_HEADER_speed_controllerDec10_private_h_
#define RTW_HEADER_speed_controllerDec10_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
extern void sg_IO101_setup_s(SimStruct *rts);
extern void sg_IO106_setup_s(SimStruct *rts);
extern void sg_IO106_ad_s(SimStruct *rts);
extern void sg_IO101_da_s(SimStruct *rts);

#endif                                 /* RTW_HEADER_speed_controllerDec10_private_h_ */
