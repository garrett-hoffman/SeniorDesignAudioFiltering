/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: filter.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 23-Mar-2017 14:36:51
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "filter.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Function Definitions */

/*
 * Arguments    : double b[11]
 *                double a[11]
 *                const double x[1024]
 *                const double zi[10]
 *                double y[1024]
 *                double zf[10]
 * Return Type  : void
 */
void filter(double b[11], double a[11], const double x[1024], const double zi[10],
            double y[1024], double zf[10])
{
  double a1;
  int k;
  double dbuffer[11];
  int j;
  a1 = a[0];
  if ((!((!rtIsInf(a[0])) && (!rtIsNaN(a[0])))) || (a[0] == 0.0) || (!(a[0] !=
        1.0))) {
  } else {
    for (k = 0; k < 11; k++) {
      b[k] /= a1;
    }

    for (k = 0; k < 10; k++) {
      a[k + 1] /= a1;
    }

    a[0] = 1.0;
  }

  memcpy(&dbuffer[1], &zi[0], 10U * sizeof(double));
  for (j = 0; j < 1024; j++) {
    for (k = 0; k < 10; k++) {
      dbuffer[k] = dbuffer[k + 1];
    }

    dbuffer[10] = 0.0;
    for (k = 0; k < 11; k++) {
      dbuffer[k] += x[j] * b[k];
    }

    for (k = 0; k < 10; k++) {
      dbuffer[k + 1] -= dbuffer[0] * a[k + 1];
    }

    y[j] = dbuffer[0];
  }

  memcpy(&zf[0], &dbuffer[1], 10U * sizeof(double));
}

/*
 * File trailer for filter.c
 *
 * [EOF]
 */
