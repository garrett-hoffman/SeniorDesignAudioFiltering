/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * amplify.c
 *
 * Code generation for function 'amplify'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "amplify.h"
#include "RealTimeAudioFilter_data.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Function Definitions */
void amplify(const real_T in[1024], real_T amp, real_T x[1024])
{
  int32_T i;
  covrtLogFcn(&emlrtCoverageInstance, 1U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 1U, 0);
  for (i = 0; i < 1024; i++) {
    x[i] = in[i] * amp;
  }
}

/* End of code generation (amplify.c) */
