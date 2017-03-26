/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: audioDeviceWriter.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 26-Mar-2017 15:53:56
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "audioDeviceWriter.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Function Definitions */

/*
 * Arguments    : audioDeviceWriter *obj
 * Return Type  : audioDeviceWriter *
 */
audioDeviceWriter *c_audioDeviceWriter_audioDevice(audioDeviceWriter *obj)
{
  audioDeviceWriter *b_obj;
  audioDeviceWriter *c_obj;
  c_audiointerface_audioDeviceWri *d_obj;
  b_obj = obj;
  b_obj->pInputFrameSize = 0.0;
  c_obj = b_obj;
  c_obj->isInitialized = 0;
  d_obj = &b_obj->pInterface;

  /* System object Constructor function: audiointerface.audioDeviceWriter */
  d_obj->S0_isInitialized = 0;
  return b_obj;
}

/*
 * File trailer for audioDeviceWriter.c
 *
 * [EOF]
 */
