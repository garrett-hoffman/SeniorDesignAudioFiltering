/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_RealTimeAudioFilter_mex.c
 *
 * Code generation for function '_coder_RealTimeAudioFilter_mex'
 *
 */

/* Include files */
#include "RealTimeAudioFilter.h"
#include "_coder_RealTimeAudioFilter_mex.h"
#include "RealTimeAudioFilter_terminate.h"
#include "_coder_RealTimeAudioFilter_api.h"
#include "RealTimeAudioFilter_initialize.h"
#include "RealTimeAudioFilter_data.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Function Declarations */
static void RealTimeAudioFilter_mexFunction(int32_T nlhs, int32_T nrhs);

/* Function Definitions */
static void RealTimeAudioFilter_mexFunction(int32_T nlhs, int32_T nrhs)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4,
                        19, "RealTimeAudioFilter");
  }

  if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 19,
                        "RealTimeAudioFilter");
  }

  /* Call the function. */
  RealTimeAudioFilter_api();

  /* Module termination. */
  RealTimeAudioFilter_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  (void)plhs;
  (void)prhs;
  mexAtExit(RealTimeAudioFilter_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  RealTimeAudioFilter_initialize();

  /* Dispatch the entry-point. */
  RealTimeAudioFilter_mexFunction(nlhs, nrhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_RealTimeAudioFilter_mex.c) */
