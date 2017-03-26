/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: step.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 26-Mar-2017 14:38:10
 */

#ifndef STEP_H
#define STEP_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "RealTimeAudioFilter_types.h"

/* Function Declarations */
extern void Destructor(c_audiointerface_audioDeviceRea *obj);
extern void Outputs(c_audiointerface_audioDeviceRea *obj, double Y0[1024],
                    unsigned int *Y1);
extern void Start(c_audiointerface_audioDeviceRea *obj);
extern void d_Destructor(c_audiointerface_audioDeviceWri *obj);

#endif

/*
 * File trailer for step.h
 *
 * [EOF]
 */
