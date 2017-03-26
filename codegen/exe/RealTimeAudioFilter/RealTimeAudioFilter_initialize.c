/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: RealTimeAudioFilter_initialize.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 26-Mar-2017 15:53:56
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "RealTimeAudioFilter_initialize.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void RealTimeAudioFilter_initialize(void)
{
  rt_InitInfAndNaN(8U);
}

/*
 * File trailer for RealTimeAudioFilter_initialize.c
 *
 * [EOF]
 */
