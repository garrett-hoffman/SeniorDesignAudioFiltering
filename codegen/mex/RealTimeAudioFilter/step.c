/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * step.c
 *
 * Code generation for function 'step'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "step.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Function Definitions */
void Destructor(c_audiointerface_audioDeviceRea *obj)
{
  c_audiointerface_audioDeviceRea *b_obj;
  char_T *sErr;

  /* System object Destructor function: audiointerface.audioDeviceReader */
  if (obj->S0_isInitialized == 1) {
    obj->S0_isInitialized = 2;
    b_obj = obj;

    /* System object Terminate function: audiointerface.audioDeviceReader */
    sErr = GetErrorBuffer(&b_obj->W0_AudioDeviceLib[0U]);
    LibTerminate(&b_obj->W0_AudioDeviceLib[0U]);
    if (*sErr != 0) {
      PrintError(sErr);
    }

    LibDestroy(&b_obj->W0_AudioDeviceLib[0U], 0);
    DestroyHostLibrary(&b_obj->W0_AudioDeviceLib[0U]);
  }
}

void Outputs(c_audiointerface_audioDeviceRea *obj, real_T Y0[1024], uint32_T *Y1)
{
  char_T *sErr;
  int32_T i;

  /* System object Outputs function: audiointerface.audioDeviceReader */
  sErr = GetErrorBuffer(&obj->W0_AudioDeviceLib[0U]);
  LibOutputs_Audio(&obj->W0_AudioDeviceLib[0U], &obj->O0_Y0[0U], 5, 1024,
                   &obj->O1_Y1);
  if (*sErr != 0) {
    PrintError(sErr);
  }

  for (i = 0; i < 1024; i++) {
    Y0[i] = obj->O0_Y0[i];
  }

  *Y1 = obj->O1_Y1;
}

void Start(c_audiointerface_audioDeviceRea *obj)
{
  char_T *sErr;

  /* System object Start function: audiointerface.audioDeviceReader */
  sErr = GetErrorBuffer(&obj->W0_AudioDeviceLib[0U]);
  CreateHostLibrary("libmwhostlibaudio.dylib", &obj->W0_AudioDeviceLib[0U]);
  if (*sErr == 0) {
    LibCreate_Audio(&obj->W0_AudioDeviceLib[0U], 0, "Default", 5, 0, 1, 44100.0,
                    3, 1024, 10240, 1024, 5, NULL);
  }

  if (*sErr != 0) {
    DestroyHostLibrary(&obj->W0_AudioDeviceLib[0U]);
    if (*sErr != 0) {
      PrintError(sErr);
    }
  }
}

void b_Start(c_audiointerface_audioDeviceWri *obj)
{
  char_T *sErr;

  /* System object Start function: audiointerface.audioDeviceWriter */
  sErr = GetErrorBuffer(&obj->W0_AudioDeviceLib[0U]);
  CreateHostLibrary("libmwhostlibaudio.dylib", &obj->W0_AudioDeviceLib[0U]);
  if (*sErr == 0) {
    LibCreate_Audio(&obj->W0_AudioDeviceLib[0U], 0, "Default", 5, 1, 1, 44100.0,
                    3, 1024, 10240, 1024, 0, NULL);
  }

  if (*sErr != 0) {
    DestroyHostLibrary(&obj->W0_AudioDeviceLib[0U]);
    if (*sErr != 0) {
      PrintError(sErr);
    }
  }
}

void d_Destructor(c_audiointerface_audioDeviceWri *obj)
{
  c_audiointerface_audioDeviceWri *b_obj;
  char_T *sErr;

  /* System object Destructor function: audiointerface.audioDeviceWriter */
  if (obj->S0_isInitialized == 1) {
    obj->S0_isInitialized = 2;
    b_obj = obj;

    /* System object Terminate function: audiointerface.audioDeviceWriter */
    sErr = GetErrorBuffer(&b_obj->W0_AudioDeviceLib[0U]);
    LibTerminate(&b_obj->W0_AudioDeviceLib[0U]);
    if (*sErr != 0) {
      PrintError(sErr);
    }

    LibDestroy(&b_obj->W0_AudioDeviceLib[0U], 1);
    DestroyHostLibrary(&b_obj->W0_AudioDeviceLib[0U]);
  }
}

/* End of code generation (step.c) */
