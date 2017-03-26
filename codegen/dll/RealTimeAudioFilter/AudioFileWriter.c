/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: AudioFileWriter.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 23-Mar-2017 14:36:51
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "AudioFileWriter.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Function Definitions */

/*
 * Arguments    : dspcodegen_AudioFileWriter_1 *obj
 * Return Type  : dspcodegen_AudioFileWriter_1 *
 */
dspcodegen_AudioFileWriter_1 *AudioFileWriter_AudioFileWriter
  (dspcodegen_AudioFileWriter_1 *obj)
{
  dspcodegen_AudioFileWriter_1 *b_obj;
  dspcodegen_AudioFileWriter_1 *c_obj;
  dsp_AudioFileWriter_2 *d_obj;
  int i;
  static const unsigned char uv0[115] = { 47U, 65U, 112U, 112U, 108U, 105U, 99U,
    97U, 116U, 105U, 111U, 110U, 115U, 47U, 77U, 65U, 84U, 76U, 65U, 66U, 95U,
    82U, 50U, 48U, 49U, 54U, 97U, 46U, 97U, 112U, 112U, 47U, 116U, 111U, 111U,
    108U, 98U, 111U, 120U, 47U, 115U, 104U, 97U, 114U, 101U, 100U, 47U, 109U,
    117U, 108U, 116U, 105U, 109U, 101U, 100U, 105U, 97U, 47U, 98U, 105U, 110U,
    47U, 109U, 97U, 99U, 105U, 54U, 52U, 47U, 97U, 117U, 100U, 105U, 111U, 47U,
    108U, 105U, 98U, 109U, 119U, 97U, 117U, 100U, 105U, 111U, 102U, 105U, 108U,
    101U, 115U, 110U, 100U, 102U, 105U, 108U, 101U, 119U, 114U, 105U, 116U, 101U,
    114U, 112U, 108U, 117U, 103U, 105U, 110U, 46U, 100U, 121U, 108U, 105U, 98U,
    0U };

  static const unsigned char uv1[86] = { 47U, 65U, 112U, 112U, 108U, 105U, 99U,
    97U, 116U, 105U, 111U, 110U, 115U, 47U, 77U, 65U, 84U, 76U, 65U, 66U, 95U,
    82U, 50U, 48U, 49U, 54U, 97U, 46U, 97U, 112U, 112U, 47U, 116U, 111U, 111U,
    108U, 98U, 111U, 120U, 47U, 115U, 104U, 97U, 114U, 101U, 100U, 47U, 109U,
    117U, 108U, 116U, 105U, 109U, 101U, 100U, 105U, 97U, 47U, 98U, 105U, 110U,
    47U, 109U, 97U, 99U, 105U, 54U, 52U, 47U, 97U, 117U, 100U, 105U, 111U, 115U,
    108U, 99U, 111U, 110U, 118U, 101U, 114U, 116U, 101U, 114U, 0U };

  static const unsigned char uv2[90] = { 47U, 65U, 112U, 112U, 108U, 105U, 99U,
    97U, 116U, 105U, 111U, 110U, 115U, 47U, 77U, 65U, 84U, 76U, 65U, 66U, 95U,
    82U, 50U, 48U, 49U, 54U, 97U, 46U, 97U, 112U, 112U, 47U, 116U, 111U, 111U,
    108U, 98U, 111U, 120U, 47U, 115U, 104U, 97U, 114U, 101U, 100U, 47U, 109U,
    117U, 108U, 116U, 105U, 109U, 101U, 100U, 105U, 97U, 47U, 98U, 105U, 110U,
    47U, 109U, 97U, 99U, 105U, 54U, 52U, 47U, 97U, 117U, 100U, 105U, 111U, 116U,
    114U, 97U, 110U, 115U, 102U, 111U, 114U, 109U, 102U, 105U, 108U, 116U, 101U,
    114U, 0U };

  b_obj = obj;
  c_obj = b_obj;
  c_obj->isInitialized = 0;
  d_obj = &b_obj->cSFunObject;

  /* System object Constructor function: dsp.AudioFileWriter */
  for (i = 0; i < 115; i++) {
    d_obj->P0_AV_ASYNCIO_PLUGIN_PATH[i] = uv0[i];
  }

  for (i = 0; i < 86; i++) {
    d_obj->P1_AV_ASYNCIO_CONVERTER_PATH[i] = uv1[i];
  }

  for (i = 0; i < 90; i++) {
    d_obj->P2_AV_ASYNCIO_FILTER_PATH[i] = uv2[i];
  }

  return b_obj;
}

/*
 * Arguments    : dspcodegen_AudioFileWriter *obj
 * Return Type  : dspcodegen_AudioFileWriter *
 */
dspcodegen_AudioFileWriter *b_AudioFileWriter_AudioFileWrit
  (dspcodegen_AudioFileWriter *obj)
{
  dspcodegen_AudioFileWriter *b_obj;
  dspcodegen_AudioFileWriter *c_obj;
  dsp_AudioFileWriter_3 *d_obj;
  int i;
  static const unsigned char uv3[115] = { 47U, 65U, 112U, 112U, 108U, 105U, 99U,
    97U, 116U, 105U, 111U, 110U, 115U, 47U, 77U, 65U, 84U, 76U, 65U, 66U, 95U,
    82U, 50U, 48U, 49U, 54U, 97U, 46U, 97U, 112U, 112U, 47U, 116U, 111U, 111U,
    108U, 98U, 111U, 120U, 47U, 115U, 104U, 97U, 114U, 101U, 100U, 47U, 109U,
    117U, 108U, 116U, 105U, 109U, 101U, 100U, 105U, 97U, 47U, 98U, 105U, 110U,
    47U, 109U, 97U, 99U, 105U, 54U, 52U, 47U, 97U, 117U, 100U, 105U, 111U, 47U,
    108U, 105U, 98U, 109U, 119U, 97U, 117U, 100U, 105U, 111U, 102U, 105U, 108U,
    101U, 115U, 110U, 100U, 102U, 105U, 108U, 101U, 119U, 114U, 105U, 116U, 101U,
    114U, 112U, 108U, 117U, 103U, 105U, 110U, 46U, 100U, 121U, 108U, 105U, 98U,
    0U };

  static const unsigned char uv4[86] = { 47U, 65U, 112U, 112U, 108U, 105U, 99U,
    97U, 116U, 105U, 111U, 110U, 115U, 47U, 77U, 65U, 84U, 76U, 65U, 66U, 95U,
    82U, 50U, 48U, 49U, 54U, 97U, 46U, 97U, 112U, 112U, 47U, 116U, 111U, 111U,
    108U, 98U, 111U, 120U, 47U, 115U, 104U, 97U, 114U, 101U, 100U, 47U, 109U,
    117U, 108U, 116U, 105U, 109U, 101U, 100U, 105U, 97U, 47U, 98U, 105U, 110U,
    47U, 109U, 97U, 99U, 105U, 54U, 52U, 47U, 97U, 117U, 100U, 105U, 111U, 115U,
    108U, 99U, 111U, 110U, 118U, 101U, 114U, 116U, 101U, 114U, 0U };

  static const unsigned char uv5[90] = { 47U, 65U, 112U, 112U, 108U, 105U, 99U,
    97U, 116U, 105U, 111U, 110U, 115U, 47U, 77U, 65U, 84U, 76U, 65U, 66U, 95U,
    82U, 50U, 48U, 49U, 54U, 97U, 46U, 97U, 112U, 112U, 47U, 116U, 111U, 111U,
    108U, 98U, 111U, 120U, 47U, 115U, 104U, 97U, 114U, 101U, 100U, 47U, 109U,
    117U, 108U, 116U, 105U, 109U, 101U, 100U, 105U, 97U, 47U, 98U, 105U, 110U,
    47U, 109U, 97U, 99U, 105U, 54U, 52U, 47U, 97U, 117U, 100U, 105U, 111U, 116U,
    114U, 97U, 110U, 115U, 102U, 111U, 114U, 109U, 102U, 105U, 108U, 116U, 101U,
    114U, 0U };

  b_obj = obj;
  c_obj = b_obj;
  c_obj->isInitialized = 0;
  d_obj = &b_obj->cSFunObject;

  /* System object Constructor function: dsp.AudioFileWriter */
  for (i = 0; i < 115; i++) {
    d_obj->P0_AV_ASYNCIO_PLUGIN_PATH[i] = uv3[i];
  }

  for (i = 0; i < 86; i++) {
    d_obj->P1_AV_ASYNCIO_CONVERTER_PATH[i] = uv4[i];
  }

  for (i = 0; i < 90; i++) {
    d_obj->P2_AV_ASYNCIO_FILTER_PATH[i] = uv5[i];
  }

  return b_obj;
}

/*
 * File trailer for AudioFileWriter.c
 *
 * [EOF]
 */
