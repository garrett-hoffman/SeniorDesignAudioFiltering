/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * SystemCore.h
 *
 * Code generation for function 'SystemCore'
 *
 */

#ifndef SYSTEMCORE_H
#define SYSTEMCORE_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "RealTimeAudioFilter_types.h"

/* Function Declarations */
extern void SystemCore_release(const emlrtStack *sp, audioDeviceReader *obj);
extern void SystemCore_step(const emlrtStack *sp, audioDeviceReader *obj, real_T
  varargout_1[1024]);
extern void b_SystemCore_release(const emlrtStack *sp, audioDeviceWriter *obj);
extern void b_SystemCore_step(const emlrtStack *sp, dspcodegen_AudioFileWriter_1
  *obj, const real_T varargin_1[1024]);
extern void c_SystemCore_release(const emlrtStack *sp,
  dspcodegen_AudioFileWriter_1 *obj);
extern void c_SystemCore_step(const emlrtStack *sp, dspcodegen_AudioFileWriter
  *obj, const real_T varargin_1[1024]);
extern void d_SystemCore_release(const emlrtStack *sp,
  dspcodegen_AudioFileWriter *obj);
extern void d_SystemCore_step(const emlrtStack *sp, audioDeviceWriter *obj,
  const real_T varargin_1[1024]);

#endif

/* End of code generation (SystemCore.h) */
