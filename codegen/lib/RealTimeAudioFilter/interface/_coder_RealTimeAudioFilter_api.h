/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_RealTimeAudioFilter_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 26-Mar-2017 17:10:00
 */

#ifndef _CODER_REALTIMEAUDIOFILTER_API_H
#define _CODER_REALTIMEAUDIOFILTER_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_RealTimeAudioFilter_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void RealTimeAudioFilter(void);
extern void RealTimeAudioFilter_api(void);
extern void RealTimeAudioFilter_atexit(void);
extern void RealTimeAudioFilter_initialize(void);
extern void RealTimeAudioFilter_terminate(void);
extern void RealTimeAudioFilter_xil_terminate(void);

#endif

/*
 * File trailer for _coder_RealTimeAudioFilter_api.h
 *
 * [EOF]
 */
