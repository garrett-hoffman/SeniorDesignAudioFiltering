/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: SystemCore.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 23-Mar-2017 14:36:51
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "SystemCore.h"
#include "audioDeviceReader.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Function Definitions */

/*
 * Arguments    : audioDeviceReader *obj
 * Return Type  : void
 */
void SystemCore_release(audioDeviceReader *obj)
{
  audioDeviceReader *b_obj;
  char *sErr;
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
    b_obj = obj;

    /* System object Destructor function: audiointerface.audioDeviceReader */
    if (b_obj->pInterface.S0_isInitialized == 1) {
      b_obj->pInterface.S0_isInitialized = 2;

      /* System object Terminate function: audiointerface.audioDeviceReader */
      sErr = GetErrorBuffer(&b_obj->pInterface.W0_AudioDeviceLib[0U]);
      LibTerminate(&b_obj->pInterface.W0_AudioDeviceLib[0U]);
      if (*sErr != 0) {
        PrintError(sErr);
      }

      LibDestroy(&b_obj->pInterface.W0_AudioDeviceLib[0U], 0);
      DestroyHostLibrary(&b_obj->pInterface.W0_AudioDeviceLib[0U]);
    }
  }
}

/*
 * Arguments    : audioDeviceReader *obj
 *                double varargout_1[1024]
 * Return Type  : void
 */
void SystemCore_step(audioDeviceReader *obj, double varargout_1[1024])
{
  audioDeviceReader *b_obj;
  char *sErr;
  if (obj->isInitialized != 1) {
    b_obj = obj;
    b_obj->isInitialized = 1;
    if (b_obj->pInterface.S0_isInitialized != 1) {
      b_obj->pInterface.S0_isInitialized = 1;

      /* System object Start function: audiointerface.audioDeviceReader */
      sErr = GetErrorBuffer(&b_obj->pInterface.W0_AudioDeviceLib[0U]);
      CreateHostLibrary("libmwhostlibaudio.dylib",
                        &b_obj->pInterface.W0_AudioDeviceLib[0U]);
      if (*sErr == 0) {
        LibCreate_Audio(&b_obj->pInterface.W0_AudioDeviceLib[0U], 0, "Default",
                        5, 0, 1, 44100.0, 3, 1024, 10240, 1024, 5, NULL);
      }

      if (*sErr != 0) {
        DestroyHostLibrary(&b_obj->pInterface.W0_AudioDeviceLib[0U]);
        if (*sErr != 0) {
          PrintError(sErr);
        }
      }
    }

    b_obj->TunablePropsChanged = false;
  }

  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = false;
  }

  audioDeviceReader_stepImpl(obj, varargout_1);
}

/*
 * Arguments    : audioDeviceWriter *obj
 * Return Type  : void
 */
void b_SystemCore_release(audioDeviceWriter *obj)
{
  audioDeviceWriter *b_obj;
  char *sErr;
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
    b_obj = obj;

    /* System object Destructor function: audiointerface.audioDeviceWriter */
    if (b_obj->pInterface.S0_isInitialized == 1) {
      b_obj->pInterface.S0_isInitialized = 2;

      /* System object Terminate function: audiointerface.audioDeviceWriter */
      sErr = GetErrorBuffer(&b_obj->pInterface.W0_AudioDeviceLib[0U]);
      LibTerminate(&b_obj->pInterface.W0_AudioDeviceLib[0U]);
      if (*sErr != 0) {
        PrintError(sErr);
      }

      LibDestroy(&b_obj->pInterface.W0_AudioDeviceLib[0U], 1);
      DestroyHostLibrary(&b_obj->pInterface.W0_AudioDeviceLib[0U]);
    }

    b_obj->pInputFrameSize = 0.0;
  }
}

/*
 * Arguments    : dspcodegen_AudioFileWriter_1 *obj
 *                const double varargin_1[1024]
 * Return Type  : void
 */
void b_SystemCore_step(dspcodegen_AudioFileWriter_1 *obj, const double
  varargin_1[1024])
{
  dspcodegen_AudioFileWriter_1 *b_obj;
  double U0[1024];
  char *sErr;
  void *audio;
  if (obj->isInitialized != 1) {
    b_obj = obj;
    b_obj->isInitialized = 1;

    /* System object Start function: dsp.AudioFileWriter */
    sErr = GetErrorBuffer(&b_obj->cSFunObject.W0_HostLib[0U]);
    CreateHostLibrary("libmwtommfile.dylib", &b_obj->cSFunObject.W0_HostLib[0U]);
    createAudioInfo(&b_obj->cSFunObject.W1_AudioInfo[0U], 1, 0, 44100.0, 16, 1,
                    1024, 0, GetNullPointer());
    createVideoInfo(&b_obj->cSFunObject.W2_VideoInfo[0U], 0, 0.0, 0.0, "", 0, 0,
                    0, 0, 1, 0, 0, GetNullPointer());
    if (*sErr == 0) {
      LibCreate_ToMMFile(&b_obj->cSFunObject.W0_HostLib[0U], 0, (void *)
                         "cleanOutput13.wav", 1, 2,
                         &b_obj->cSFunObject.W1_AudioInfo[0U],
                         &b_obj->cSFunObject.W2_VideoInfo[0U], 0, 0,
                         "/Applications/MATLAB_R2016a.app/toolbox/shared/multimedia/bin/maci64/audio/libmwaudiofilesndfilewriterplugin.dylib",
                         "/Applications/MATLAB_R2016a.app/toolbox/shared/multimedia/bin/maci64/audioslconverter",
                         "/Applications/MATLAB_R2016a.app/toolbox/shared/multimedia/bin/maci64/audiotransformfilter",
                         75U, 10U);
    }

    if (*sErr == 0) {
      LibStart(&b_obj->cSFunObject.W0_HostLib[0U]);
    }

    if (*sErr != 0) {
      DestroyHostLibrary(&b_obj->cSFunObject.W0_HostLib[0U]);
      if (*sErr != 0) {
        PrintError(sErr);
      }
    }
  }

  b_obj = obj;
  memcpy(&U0[0], &varargin_1[0], sizeof(double) << 10);

  /* System object Update function: dsp.AudioFileWriter */
  sErr = GetErrorBuffer(&b_obj->cSFunObject.W0_HostLib[0U]);
  audio = (void *)&U0;
  LibUpdate_ToMMFile(&b_obj->cSFunObject.W0_HostLib[0U], audio, GetNullPointer(),
                     GetNullPointer(), GetNullPointer());
  if (*sErr != 0) {
    PrintWarning(sErr);
  }
}

/*
 * Arguments    : dspcodegen_AudioFileWriter_1 *obj
 * Return Type  : void
 */
void c_SystemCore_release(dspcodegen_AudioFileWriter_1 *obj)
{
  dspcodegen_AudioFileWriter_1 *b_obj;
  char *sErr;
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
    b_obj = obj;

    /* System object Destructor function: dsp.AudioFileWriter */
    /* System object Terminate function: dsp.AudioFileWriter */
    sErr = GetErrorBuffer(&b_obj->cSFunObject.W0_HostLib[0U]);
    LibTerminate(&b_obj->cSFunObject.W0_HostLib[0U]);
    if (*sErr != 0) {
      PrintError(sErr);
    }

    LibDestroy(&b_obj->cSFunObject.W0_HostLib[0U], 0);
    DestroyHostLibrary(&b_obj->cSFunObject.W0_HostLib[0U]);
  }
}

/*
 * Arguments    : dspcodegen_AudioFileWriter *obj
 *                const double varargin_1[1024]
 * Return Type  : void
 */
void c_SystemCore_step(dspcodegen_AudioFileWriter *obj, const double varargin_1
  [1024])
{
  dspcodegen_AudioFileWriter *b_obj;
  double U0[1024];
  char *sErr;
  void *audio;
  if (obj->isInitialized != 1) {
    b_obj = obj;
    b_obj->isInitialized = 1;

    /* System object Start function: dsp.AudioFileWriter */
    sErr = GetErrorBuffer(&b_obj->cSFunObject.W0_HostLib[0U]);
    CreateHostLibrary("libmwtommfile.dylib", &b_obj->cSFunObject.W0_HostLib[0U]);
    createAudioInfo(&b_obj->cSFunObject.W1_AudioInfo[0U], 1, 0, 44100.0, 16, 1,
                    1024, 0, GetNullPointer());
    createVideoInfo(&b_obj->cSFunObject.W2_VideoInfo[0U], 0, 0.0, 0.0, "", 0, 0,
                    0, 0, 1, 0, 0, GetNullPointer());
    if (*sErr == 0) {
      LibCreate_ToMMFile(&b_obj->cSFunObject.W0_HostLib[0U], 0, (void *)
                         "filteredOutput13.wav", 1, 2,
                         &b_obj->cSFunObject.W1_AudioInfo[0U],
                         &b_obj->cSFunObject.W2_VideoInfo[0U], 0, 0,
                         "/Applications/MATLAB_R2016a.app/toolbox/shared/multimedia/bin/maci64/audio/libmwaudiofilesndfilewriterplugin.dylib",
                         "/Applications/MATLAB_R2016a.app/toolbox/shared/multimedia/bin/maci64/audioslconverter",
                         "/Applications/MATLAB_R2016a.app/toolbox/shared/multimedia/bin/maci64/audiotransformfilter",
                         75U, 10U);
    }

    if (*sErr == 0) {
      LibStart(&b_obj->cSFunObject.W0_HostLib[0U]);
    }

    if (*sErr != 0) {
      DestroyHostLibrary(&b_obj->cSFunObject.W0_HostLib[0U]);
      if (*sErr != 0) {
        PrintError(sErr);
      }
    }
  }

  b_obj = obj;
  memcpy(&U0[0], &varargin_1[0], sizeof(double) << 10);

  /* System object Update function: dsp.AudioFileWriter */
  sErr = GetErrorBuffer(&b_obj->cSFunObject.W0_HostLib[0U]);
  audio = (void *)&U0;
  LibUpdate_ToMMFile(&b_obj->cSFunObject.W0_HostLib[0U], audio, GetNullPointer(),
                     GetNullPointer(), GetNullPointer());
  if (*sErr != 0) {
    PrintWarning(sErr);
  }
}

/*
 * Arguments    : dspcodegen_AudioFileWriter *obj
 * Return Type  : void
 */
void d_SystemCore_release(dspcodegen_AudioFileWriter *obj)
{
  dspcodegen_AudioFileWriter *b_obj;
  char *sErr;
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
    b_obj = obj;

    /* System object Destructor function: dsp.AudioFileWriter */
    /* System object Terminate function: dsp.AudioFileWriter */
    sErr = GetErrorBuffer(&b_obj->cSFunObject.W0_HostLib[0U]);
    LibTerminate(&b_obj->cSFunObject.W0_HostLib[0U]);
    if (*sErr != 0) {
      PrintError(sErr);
    }

    LibDestroy(&b_obj->cSFunObject.W0_HostLib[0U], 0);
    DestroyHostLibrary(&b_obj->cSFunObject.W0_HostLib[0U]);
  }
}

/*
 * Arguments    : audioDeviceWriter *obj
 *                const double varargin_1[1024]
 * Return Type  : void
 */
void d_SystemCore_step(audioDeviceWriter *obj, const double varargin_1[1024])
{
  audioDeviceWriter *b_obj;
  int k;
  static const short inputSize[8] = { 1024, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  char *sErr;
  static const short iv0[8] = { 1024, 1, 1, 1, 1, 1, 1, 1 };

  double U0[1024];
  if (obj->isInitialized != 1) {
    b_obj = obj;
    b_obj->isInitialized = 1;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (unsigned int)inputSize[k];
    }

    b_obj->pInputFrameSize = 1024.0;
    if (b_obj->pInterface.S0_isInitialized != 1) {
      b_obj->pInterface.S0_isInitialized = 1;

      /* System object Start function: audiointerface.audioDeviceWriter */
      sErr = GetErrorBuffer(&b_obj->pInterface.W0_AudioDeviceLib[0U]);
      CreateHostLibrary("libmwhostlibaudio.dylib",
                        &b_obj->pInterface.W0_AudioDeviceLib[0U]);
      if (*sErr == 0) {
        LibCreate_Audio(&b_obj->pInterface.W0_AudioDeviceLib[0U], 0, "Default",
                        5, 1, 1, 44100.0, 3, 1024, 10240, 1024, 0, NULL);
      }

      if (*sErr != 0) {
        DestroyHostLibrary(&b_obj->pInterface.W0_AudioDeviceLib[0U]);
        if (*sErr != 0) {
          PrintError(sErr);
        }
      }
    }

    b_obj->TunablePropsChanged = false;
  }

  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = false;
  }

  b_obj = obj;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (unsigned int)iv0[k]) {
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (unsigned int)inputSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  b_obj = obj;
  if (b_obj->pInterface.S0_isInitialized != 1) {
    b_obj->pInterface.S0_isInitialized = 1;

    /* System object Start function: audiointerface.audioDeviceWriter */
    sErr = GetErrorBuffer(&b_obj->pInterface.W0_AudioDeviceLib[0U]);
    CreateHostLibrary("libmwhostlibaudio.dylib",
                      &b_obj->pInterface.W0_AudioDeviceLib[0U]);
    if (*sErr == 0) {
      LibCreate_Audio(&b_obj->pInterface.W0_AudioDeviceLib[0U], 0, "Default", 5,
                      1, 1, 44100.0, 3, 1024, 10240, 1024, 0, NULL);
    }

    if (*sErr != 0) {
      DestroyHostLibrary(&b_obj->pInterface.W0_AudioDeviceLib[0U]);
      if (*sErr != 0) {
        PrintError(sErr);
      }
    }
  }

  memcpy(&U0[0], &varargin_1[0], sizeof(double) << 10);

  /* System object Outputs function: audiointerface.audioDeviceWriter */
  sErr = GetErrorBuffer(&b_obj->pInterface.W0_AudioDeviceLib[0U]);
  LibUpdate_Audio(&b_obj->pInterface.W0_AudioDeviceLib[0U], &U0[0U], 0, 1024,
                  &b_obj->pInterface.O0_Y0);
  if (*sErr != 0) {
    PrintError(sErr);
  }
}

/*
 * File trailer for SystemCore.c
 *
 * [EOF]
 */
