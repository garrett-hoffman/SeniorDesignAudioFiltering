/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "SystemCore.h"
#include "step.h"
#include "audioDeviceReader.h"
#include "RealTimeAudioFilter_data.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Variable Definitions */
static emlrtRSInfo y_emlrtRSI = { 1, "SystemCore",
  "/Applications/MATLAB_R2016a.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtRSInfo ab_emlrtRSI = { 1, "audioDeviceWriter",
  "/Applications/MATLAB_R2016a.app/toolbox/dsp/dsp/compiled/audioDeviceWriter.p"
};

static emlrtRSInfo cb_emlrtRSI = { 1, "Nondirect",
  "/Applications/MATLAB_R2016a.app/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"
};

static emlrtRTEInfo emlrtRTEI = { 1, 1, "SystemCore",
  "/Applications/MATLAB_R2016a.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtRTEInfo b_emlrtRTEI = { 39, 1, "setup",
  "/Applications/MATLAB_R2016a.app/toolbox/eml/lib/scomp/setup.m" };

static emlrtRTEInfo c_emlrtRTEI = { 15, 1, "reset",
  "/Applications/MATLAB_R2016a.app/toolbox/eml/lib/scomp/reset.m" };

static emlrtRTEInfo f_emlrtRTEI = { 48, 20, "step",
  "/Applications/MATLAB_R2016a.app/toolbox/eml/lib/scomp/step.m" };

static emlrtRTEInfo g_emlrtRTEI = { 1, 1, "audioDeviceWriter",
  "/Applications/MATLAB_R2016a.app/toolbox/dsp/dsp/compiled/audioDeviceWriter.p"
};

static emlrtRTEInfo h_emlrtRTEI = { 15, 1, "release",
  "/Applications/MATLAB_R2016a.app/toolbox/eml/lib/scomp/release.m" };

/* Function Definitions */
void SystemCore_release(const emlrtStack *sp, audioDeviceReader *obj)
{
  audioDeviceReader *b_obj;
  char_T *sErr;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 7, "release");
  }

  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
    st.site = &y_emlrtRSI;
    b_obj = obj;
    b_st.site = &v_emlrtRSI;
    if (b_obj->pInterface.S0_isInitialized == 2) {
      emlrtErrorWithMessageIdR2012b(&b_st, &h_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

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

void SystemCore_step(const emlrtStack *sp, audioDeviceReader *obj, real_T
                     varargout_1[1024])
{
  audioDeviceReader *b_obj;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, "step");
  }

  if (obj->isInitialized != 1) {
    st.site = &y_emlrtRSI;
    b_obj = obj;
    b_st.site = &y_emlrtRSI;
    if (b_obj->isInitialized == 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, "setup");
    }

    b_obj->isInitialized = 1;
    c_st.site = &y_emlrtRSI;
    d_st.site = &v_emlrtRSI;
    if (b_obj->pInterface.S0_isInitialized != 1) {
      if (b_obj->pInterface.S0_isInitialized == 2) {
        emlrtErrorWithMessageIdR2012b(&d_st, &b_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      b_obj->pInterface.S0_isInitialized = 1;
      Start(&b_obj->pInterface);
    } else {
      emlrtErrorWithMessageIdR2012b(&d_st, &b_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    b_obj->TunablePropsChanged = false;
    b_st.site = &y_emlrtRSI;
    c_st.site = &v_emlrtRSI;
    if (b_obj->pInterface.S0_isInitialized == 2) {
      emlrtErrorWithMessageIdR2012b(&c_st, &c_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }
  }

  st.site = &y_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = false;
  }

  st.site = &y_emlrtRSI;
  audioDeviceReader_stepImpl(&st, obj, varargout_1);
}

void b_SystemCore_release(const emlrtStack *sp, audioDeviceWriter *obj)
{
  audioDeviceWriter *b_obj;
  char_T *sErr;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 7, "release");
  }

  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
    st.site = &y_emlrtRSI;
    b_obj = obj;
    b_st.site = &ab_emlrtRSI;
    if (b_obj->pInterface.S0_isInitialized == 2) {
      emlrtErrorWithMessageIdR2012b(&b_st, &h_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

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

void b_SystemCore_step(const emlrtStack *sp, dspcodegen_AudioFileWriter_1 *obj,
  const real_T varargin_1[1024])
{
  dspcodegen_AudioFileWriter_1 *b_obj;
  real_T U0[1024];
  char_T *sErr;
  void *audio;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, "step");
  }

  if (obj->isInitialized != 1) {
    st.site = &y_emlrtRSI;
    b_obj = obj;
    b_st.site = &y_emlrtRSI;
    if (b_obj->isInitialized == 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, "setup");
    }

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

  st.site = &y_emlrtRSI;
  b_obj = obj;
  b_st.site = &cb_emlrtRSI;
  memcpy(&U0[0], &varargin_1[0], sizeof(real_T) << 10);

  /* System object Update function: dsp.AudioFileWriter */
  sErr = GetErrorBuffer(&b_obj->cSFunObject.W0_HostLib[0U]);
  audio = (void *)&U0;
  LibUpdate_ToMMFile(&b_obj->cSFunObject.W0_HostLib[0U], audio, GetNullPointer(),
                     GetNullPointer(), GetNullPointer());
  if (*sErr != 0) {
    PrintWarning(sErr);
  }
}

void c_SystemCore_release(const emlrtStack *sp, dspcodegen_AudioFileWriter_1
  *obj)
{
  dspcodegen_AudioFileWriter_1 *b_obj;
  char_T *sErr;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 7, "release");
  }

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

void c_SystemCore_step(const emlrtStack *sp, dspcodegen_AudioFileWriter *obj,
  const real_T varargin_1[1024])
{
  dspcodegen_AudioFileWriter *b_obj;
  real_T U0[1024];
  char_T *sErr;
  void *audio;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, "step");
  }

  if (obj->isInitialized != 1) {
    st.site = &y_emlrtRSI;
    b_obj = obj;
    b_st.site = &y_emlrtRSI;
    if (b_obj->isInitialized == 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, "setup");
    }

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

  st.site = &y_emlrtRSI;
  b_obj = obj;
  b_st.site = &cb_emlrtRSI;
  memcpy(&U0[0], &varargin_1[0], sizeof(real_T) << 10);

  /* System object Update function: dsp.AudioFileWriter */
  sErr = GetErrorBuffer(&b_obj->cSFunObject.W0_HostLib[0U]);
  audio = (void *)&U0;
  LibUpdate_ToMMFile(&b_obj->cSFunObject.W0_HostLib[0U], audio, GetNullPointer(),
                     GetNullPointer(), GetNullPointer());
  if (*sErr != 0) {
    PrintWarning(sErr);
  }
}

void d_SystemCore_release(const emlrtStack *sp, dspcodegen_AudioFileWriter *obj)
{
  dspcodegen_AudioFileWriter *b_obj;
  char_T *sErr;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 7, "release");
  }

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

void d_SystemCore_step(const emlrtStack *sp, audioDeviceWriter *obj, const
  real_T varargin_1[1024])
{
  audioDeviceWriter *b_obj;
  int32_T k;
  boolean_T anyInputSizeChanged;
  static const int16_T inputSize[8] = { 1024, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv2[8] = { 1024, 1, 1, 1, 1, 1, 1, 1 };

  real_T U0[1024];
  char_T *sErr;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, "step");
  }

  if (obj->isInitialized != 1) {
    st.site = &y_emlrtRSI;
    b_obj = obj;
    b_st.site = &y_emlrtRSI;
    if (b_obj->isInitialized == 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, "setup");
    }

    b_obj->isInitialized = 1;
    c_st.site = &y_emlrtRSI;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
    }

    c_st.site = &y_emlrtRSI;
    if ((b_obj->pInputFrameSize != 0.0) && (1024.0 != b_obj->pInputFrameSize)) {
      emlrtErrorWithMessageIdR2012b(&c_st, &g_emlrtRTEI,
        "dsp:audioDeviceIO:inputFrameSizeChanged", 0);
    }

    c_st.site = &y_emlrtRSI;
    b_obj->pInputFrameSize = 1024.0;
    d_st.site = &ab_emlrtRSI;
    if (b_obj->pInterface.S0_isInitialized != 1) {
      if (b_obj->pInterface.S0_isInitialized == 2) {
        emlrtErrorWithMessageIdR2012b(&d_st, &b_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      b_obj->pInterface.S0_isInitialized = 1;
      b_Start(&b_obj->pInterface);
    } else {
      emlrtErrorWithMessageIdR2012b(&d_st, &b_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    b_obj->TunablePropsChanged = false;
    b_st.site = &y_emlrtRSI;
    c_st.site = &ab_emlrtRSI;
    if (b_obj->pInterface.S0_isInitialized == 2) {
      emlrtErrorWithMessageIdR2012b(&c_st, &c_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }
  }

  st.site = &y_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = false;
  }

  st.site = &y_emlrtRSI;
  b_obj = obj;
  anyInputSizeChanged = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv2[k]) {
      anyInputSizeChanged = true;
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  if (anyInputSizeChanged) {
    st.site = &y_emlrtRSI;
    b_obj = obj;
    if ((b_obj->pInputFrameSize != 0.0) && (1024.0 != b_obj->pInputFrameSize)) {
      emlrtErrorWithMessageIdR2012b(&st, &g_emlrtRTEI,
        "dsp:audioDeviceIO:inputFrameSizeChanged", 0);
    }
  }

  st.site = &y_emlrtRSI;
  b_obj = obj;
  b_st.site = &ab_emlrtRSI;
  if (b_obj->pInterface.S0_isInitialized != 1) {
    if (b_obj->pInterface.S0_isInitialized == 2) {
      emlrtErrorWithMessageIdR2012b(&b_st, &f_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    b_obj->pInterface.S0_isInitialized = 1;
    c_st.site = NULL;
    b_Start(&b_obj->pInterface);
  }

  c_st.site = NULL;
  memcpy(&U0[0], &varargin_1[0], sizeof(real_T) << 10);

  /* System object Outputs function: audiointerface.audioDeviceWriter */
  sErr = GetErrorBuffer(&b_obj->pInterface.W0_AudioDeviceLib[0U]);
  LibUpdate_Audio(&b_obj->pInterface.W0_AudioDeviceLib[0U], &U0[0U], 0, 1024,
                  &b_obj->pInterface.O0_Y0);
  if (*sErr != 0) {
    PrintError(sErr);
  }
}

/* End of code generation (SystemCore.c) */
