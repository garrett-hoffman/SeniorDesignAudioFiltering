/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "error.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Variable Definitions */
static emlrtRTEInfo e_emlrtRTEI = { 17, 9, "error",
  "/Applications/MATLAB_R2016a.app/toolbox/eml/eml/+coder/+internal/error.m" };

/* Function Definitions */
void b_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
    "Coder:MATLAB:filter_firstElementOfDenominatorFilterZero", 0);
}

void error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
    "Coder:MATLAB:filter_firstElementOfDenominatorFilterNotFinite", 0);
}

/* End of code generation (error.c) */
