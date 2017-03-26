/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: audioDeviceReader.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 26-Mar-2017 15:53:56
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "audioDeviceReader.h"
#include "step.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Function Definitions */

/*
 * Arguments    : audioDeviceReader *obj
 *                double y[1024]
 * Return Type  : void
 */
void audioDeviceReader_stepImpl(audioDeviceReader *obj, double y[1024])
{
  c_audiointerface_audioDeviceRea *b_obj;
  unsigned int overrun;
  b_obj = &obj->pInterface;
  if (b_obj->S0_isInitialized != 1) {
    b_obj->S0_isInitialized = 1;
    Start(b_obj);
  }

  Outputs(b_obj, y, &overrun);
}

/*
 * File trailer for audioDeviceReader.c
 *
 * [EOF]
 */
