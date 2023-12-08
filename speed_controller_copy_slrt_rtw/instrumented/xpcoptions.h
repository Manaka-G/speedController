#ifndef __speed_controller_copy_XPCOPTIONS_H___
#define __speed_controller_copy_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "speed_controller_copy.h"
#define XPCMDSSUPPORT                  0
#define MDSTASKSNUM                    0
#define FULLMULTITHREAD                1
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(P_speed_controller_copy_T))
#define SIMMODE                        0
#define LOGTET                         0
#define LOGBUFSIZE                     100000
#define PROFILINGFLAG                  1
#define EVENTNUMBER                    5000
#define IRQ_NO                         0
#define IO_IRQ                         0
#define WWW_ACCESS_LEVEL               0
#define CPUCLOCK                       0
#define MAXOVERLOAD                    0
#define MAXOVERLOADLEN                 0
#define XPCMODELSTACKSIZEKB            2048
#define XPCSTARTUPFLAG                 1
#define PTLOADPARAMFLAG                0
#define DOUBLEBUFFERING                0
#define SLRTFTZOFFFLAG                 0

/* Change all stepsize using the newBaseRateStepSize */
void speed_controller_copy_ChangeStepSize(real_T newBaseRateStepSize,
  RT_MODEL_speed_controller_copy_T *const speed_controller_copy_M)
{
  real_T ratio = newBaseRateStepSize / 0.001;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  speed_controller_copy_M->Timing.stepSize0 =
    speed_controller_copy_M->Timing.stepSize0 * ratio;
  speed_controller_copy_M->Timing.stepSize =
    speed_controller_copy_M->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  speed_controller_copy_ChangeStepSize(stepSize, speed_controller_copy_M);
}

void XPCCALLCONV SLRTSetErrorStatus(const char * errMsg)
{
  rtmSetErrorStatus(speed_controller_copy_M, errMsg);
}

#endif                                 /* __speed_controller_copy_XPCOPTIONS_H___ */
