/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: setup.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 23-Mar-2017 14:36:51
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "setup.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Function Definitions */

/*
 * Arguments    : dsp_AudioFileWriter_2 *obj
 * Return Type  : void
 */
void b_Destructor(dsp_AudioFileWriter_2 *obj)
{
  dsp_AudioFileWriter_2 *b_obj;
  char *sErr;

  /* System object Destructor function: dsp.AudioFileWriter */
  b_obj = obj;

  /* System object Terminate function: dsp.AudioFileWriter */
  sErr = GetErrorBuffer(&b_obj->W0_HostLib[0U]);
  LibTerminate(&b_obj->W0_HostLib[0U]);
  if (*sErr != 0) {
    PrintError(sErr);
  }

  LibDestroy(&b_obj->W0_HostLib[0U], 0);
  DestroyHostLibrary(&b_obj->W0_HostLib[0U]);
}

/*
 * Arguments    : dsp_AudioFileWriter_3 *obj
 * Return Type  : void
 */
void c_Destructor(dsp_AudioFileWriter_3 *obj)
{
  dsp_AudioFileWriter_3 *b_obj;
  char *sErr;

  /* System object Destructor function: dsp.AudioFileWriter */
  b_obj = obj;

  /* System object Terminate function: dsp.AudioFileWriter */
  sErr = GetErrorBuffer(&b_obj->W0_HostLib[0U]);
  LibTerminate(&b_obj->W0_HostLib[0U]);
  if (*sErr != 0) {
    PrintError(sErr);
  }

  LibDestroy(&b_obj->W0_HostLib[0U], 0);
  DestroyHostLibrary(&b_obj->W0_HostLib[0U]);
}

/*
 * File trailer for setup.c
 *
 * [EOF]
 */
