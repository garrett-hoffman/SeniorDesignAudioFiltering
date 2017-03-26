/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * audioDeviceReader.h
 *
 * Code generation for function 'audioDeviceReader'
 *
 */

#ifndef AUDIODEVICEREADER_H
#define AUDIODEVICEREADER_H

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
extern void audioDeviceReader_stepImpl(const emlrtStack *sp, audioDeviceReader
  *obj, real_T y[1024]);
extern audioDeviceReader *c_audioDeviceReader_audioDevice(audioDeviceReader *obj);

#endif

/* End of code generation (audioDeviceReader.h) */
