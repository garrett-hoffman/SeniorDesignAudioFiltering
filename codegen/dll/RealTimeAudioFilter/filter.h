/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: filter.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 23-Mar-2017 14:36:51
 */

#ifndef FILTER_H
#define FILTER_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "RealTimeAudioFilter_types.h"

/* Function Declarations */
#ifdef __cplusplus

extern "C" {

#endif

  extern void filter(double b[11], double a[11], const double x[1024], const
                     double zi[10], double y[1024], double zf[10]);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for filter.h
 *
 * [EOF]
 */
