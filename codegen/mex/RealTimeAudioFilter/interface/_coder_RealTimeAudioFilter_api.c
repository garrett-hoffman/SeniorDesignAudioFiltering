/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_RealTimeAudioFilter_api.c
 *
 * Code generation for function '_coder_RealTimeAudioFilter_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "_coder_RealTimeAudioFilter_api.h"
#include "RealTimeAudioFilter_data.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Function Definitions */
void RealTimeAudioFilter_api(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Invoke the target function */
  RealTimeAudioFilter(&st);
}

/* End of code generation (_coder_RealTimeAudioFilter_api.c) */
