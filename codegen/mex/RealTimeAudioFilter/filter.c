/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * filter.c
 *
 * Code generation for function 'filter'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "filter.h"
#include "error.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Variable Definitions */
static emlrtRSInfo db_emlrtRSI = { 97, "filter",
  "/Applications/MATLAB_R2016a.app/toolbox/eml/lib/matlab/datafun/filter.m" };

static emlrtRSInfo eb_emlrtRSI = { 99, "filter",
  "/Applications/MATLAB_R2016a.app/toolbox/eml/lib/matlab/datafun/filter.m" };

/* Function Definitions */
void filter(const emlrtStack *sp, real_T b[11], real_T a[11], const real_T x
            [1024], const real_T zi[10], real_T y[1024], real_T zf[10])
{
  real_T a1;
  int32_T k;
  real_T dbuffer[11];
  int32_T j;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  a1 = a[0];
  if (!((!muDoubleScalarIsInf(a[0])) && (!muDoubleScalarIsNaN(a[0])))) {
    st.site = &db_emlrtRSI;
    error(&st);
  } else if (a[0] == 0.0) {
    st.site = &eb_emlrtRSI;
    b_error(&st);
  } else {
    if (a[0] != 1.0) {
      for (k = 0; k < 11; k++) {
        b[k] /= a1;
      }

      for (k = 0; k < 10; k++) {
        a[k + 1] /= a1;
      }

      a[0] = 1.0;
    }
  }

  memcpy(&dbuffer[1], &zi[0], 10U * sizeof(real_T));
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

  memcpy(&zf[0], &dbuffer[1], 10U * sizeof(real_T));
}

/* End of code generation (filter.c) */
