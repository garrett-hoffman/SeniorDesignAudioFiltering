/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * audioDeviceWriter.c
 *
 * Code generation for function 'audioDeviceWriter'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "audioDeviceWriter.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Function Definitions */
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

/* End of code generation (audioDeviceWriter.c) */
