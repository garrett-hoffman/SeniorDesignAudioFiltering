/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: step.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 23-Mar-2017 14:36:51
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "step.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Function Definitions */

/*
 * Arguments    : c_audiointerface_audioDeviceRea *obj
 * Return Type  : void
 */
void Destructor(c_audiointerface_audioDeviceRea *obj)
{
  c_audiointerface_audioDeviceRea *b_obj;
  char *sErr;

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

/*
 * Arguments    : c_audiointerface_audioDeviceRea *obj
 *                double Y0[1024]
 *                unsigned int *Y1
 * Return Type  : void
 */
void Outputs(c_audiointerface_audioDeviceRea *obj, double Y0[1024], unsigned int
             *Y1)
{
  char *sErr;
  int i;

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

/*
 * Arguments    : c_audiointerface_audioDeviceRea *obj
 * Return Type  : void
 */
void Start(c_audiointerface_audioDeviceRea *obj)
{
  char *sErr;

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

/*
 * Arguments    : c_audiointerface_audioDeviceWri *obj
 * Return Type  : void
 */
void d_Destructor(c_audiointerface_audioDeviceWri *obj)
{
  c_audiointerface_audioDeviceWri *b_obj;
  char *sErr;

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

/*
 * File trailer for step.c
 *
 * [EOF]
 */
