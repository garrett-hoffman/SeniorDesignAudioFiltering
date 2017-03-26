/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * step.h
 *
 * Code generation for function 'step'
 *
 */

#ifndef STEP_H
#define STEP_H

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
extern void Destructor(c_audiointerface_audioDeviceRea *obj);
extern void Outputs(c_audiointerface_audioDeviceRea *obj, real_T Y0[1024],
                    uint32_T *Y1);
extern void Start(c_audiointerface_audioDeviceRea *obj);
extern void b_Start(c_audiointerface_audioDeviceWri *obj);
extern void d_Destructor(c_audiointerface_audioDeviceWri *obj);

#endif

/* End of code generation (step.h) */
