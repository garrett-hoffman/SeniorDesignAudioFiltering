/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * audioDeviceReader.c
 *
 * Code generation for function 'audioDeviceReader'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "audioDeviceReader.h"
#include "step.h"
#include "RealTimeAudioFilter_data.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Variable Definitions */
static emlrtRTEInfo d_emlrtRTEI = { 50, 5, "step",
  "/Applications/MATLAB_R2016a.app/toolbox/eml/lib/scomp/step.m" };

/* Function Definitions */
void audioDeviceReader_stepImpl(const emlrtStack *sp, audioDeviceReader *obj,
  real_T y[1024])
{
  c_audiointerface_audioDeviceRea *b_obj;
  uint32_T overrun;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &v_emlrtRSI;
  b_obj = &obj->pInterface;
  if (b_obj->S0_isInitialized != 1) {
    if (b_obj->S0_isInitialized == 2) {
      emlrtErrorWithMessageIdR2012b(&st, &d_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    b_obj->S0_isInitialized = 1;
    Start(b_obj);
  }

  Outputs(b_obj, y, &overrun);
}

audioDeviceReader *c_audioDeviceReader_audioDevice(audioDeviceReader *obj)
{
  audioDeviceReader *b_obj;
  audioDeviceReader *c_obj;
  c_audiointerface_audioDeviceRea *d_obj;
  b_obj = obj;
  c_obj = b_obj;
  c_obj->isInitialized = 0;
  d_obj = &b_obj->pInterface;

  /* System object Constructor function: audiointerface.audioDeviceReader */
  d_obj->S0_isInitialized = 0;
  return b_obj;
}

/* End of code generation (audioDeviceReader.c) */
