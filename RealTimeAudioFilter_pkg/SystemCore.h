/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: SystemCore.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 26-Mar-2017 14:38:10
 */

#ifndef SYSTEMCORE_H
#define SYSTEMCORE_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "RealTimeAudioFilter_types.h"

/* Function Declarations */
extern void SystemCore_release(audioDeviceReader *obj);
extern void SystemCore_step(audioDeviceReader *obj, double varargout_1[1024]);
extern void b_SystemCore_release(audioDeviceWriter *obj);
extern void b_SystemCore_step(dspcodegen_AudioFileWriter_1 *obj, const double
  varargin_1[1024]);
extern void c_SystemCore_release(dspcodegen_AudioFileWriter_1 *obj);
extern void c_SystemCore_step(dspcodegen_AudioFileWriter *obj, const double
  varargin_1[1024]);
extern void d_SystemCore_release(dspcodegen_AudioFileWriter *obj);
extern void d_SystemCore_step(audioDeviceWriter *obj, const double varargin_1
  [1024]);

#endif

/*
 * File trailer for SystemCore.h
 *
 * [EOF]
 */
