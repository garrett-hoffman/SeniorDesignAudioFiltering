/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: audioDeviceReader.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 26-Mar-2017 15:53:56
 */

#ifndef AUDIODEVICEREADER_H
#define AUDIODEVICEREADER_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "RealTimeAudioFilter_types.h"

/* Function Declarations */
extern void audioDeviceReader_stepImpl(audioDeviceReader *obj, double y[1024]);

#endif

/*
 * File trailer for audioDeviceReader.h
 *
 * [EOF]
 */
