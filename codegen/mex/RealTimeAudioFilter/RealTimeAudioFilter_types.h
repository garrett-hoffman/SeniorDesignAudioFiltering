/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * RealTimeAudioFilter_types.h
 *
 * Code generation for function 'RealTimeAudioFilter'
 *
 */

#ifndef REALTIMEAUDIOFILTER_TYPES_H
#define REALTIMEAUDIOFILTER_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_c_audiointerface_audioDeviceRea
#define struct_c_audiointerface_audioDeviceRea

struct c_audiointerface_audioDeviceRea
{
  int32_T S0_isInitialized;
  uint8_T W0_AudioDeviceLib[1096];
  real_T O0_Y0[1024];
  uint32_T O1_Y1;
};

#endif                                 /*struct_c_audiointerface_audioDeviceRea*/

#ifndef typedef_c_audiointerface_audioDeviceRea
#define typedef_c_audiointerface_audioDeviceRea

typedef struct c_audiointerface_audioDeviceRea c_audiointerface_audioDeviceRea;

#endif                                 /*typedef_c_audiointerface_audioDeviceRea*/

#ifndef typedef_audioDeviceReader
#define typedef_audioDeviceReader

typedef struct {
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  c_audiointerface_audioDeviceRea pInterface;
} audioDeviceReader;

#endif                                 /*typedef_audioDeviceReader*/

#ifndef struct_c_audiointerface_audioDeviceWri
#define struct_c_audiointerface_audioDeviceWri

struct c_audiointerface_audioDeviceWri
{
  int32_T S0_isInitialized;
  uint8_T W0_AudioDeviceLib[1096];
  uint32_T O0_Y0;
};

#endif                                 /*struct_c_audiointerface_audioDeviceWri*/

#ifndef typedef_c_audiointerface_audioDeviceWri
#define typedef_c_audiointerface_audioDeviceWri

typedef struct c_audiointerface_audioDeviceWri c_audiointerface_audioDeviceWri;

#endif                                 /*typedef_c_audiointerface_audioDeviceWri*/

#ifndef typedef_audioDeviceWriter
#define typedef_audioDeviceWriter

typedef struct {
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  uint32_T inputVarSize1[8];
  c_audiointerface_audioDeviceWri pInterface;
  real_T pInputFrameSize;
} audioDeviceWriter;

#endif                                 /*typedef_audioDeviceWriter*/

#ifndef struct_dsp_AudioFileWriter_2
#define struct_dsp_AudioFileWriter_2

struct dsp_AudioFileWriter_2
{
  int32_T S0_isInitialized;
  real_T W0_HostLib[137];
  real_T W1_AudioInfo[5];
  real_T W2_VideoInfo[11];
  uint8_T P0_AV_ASYNCIO_PLUGIN_PATH[115];
  uint8_T P1_AV_ASYNCIO_CONVERTER_PATH[86];
  uint8_T P2_AV_ASYNCIO_FILTER_PATH[90];
};

#endif                                 /*struct_dsp_AudioFileWriter_2*/

#ifndef typedef_dsp_AudioFileWriter_2
#define typedef_dsp_AudioFileWriter_2

typedef struct dsp_AudioFileWriter_2 dsp_AudioFileWriter_2;

#endif                                 /*typedef_dsp_AudioFileWriter_2*/

#ifndef struct_dsp_AudioFileWriter_3
#define struct_dsp_AudioFileWriter_3

struct dsp_AudioFileWriter_3
{
  int32_T S0_isInitialized;
  real_T W0_HostLib[137];
  real_T W1_AudioInfo[5];
  real_T W2_VideoInfo[11];
  uint8_T P0_AV_ASYNCIO_PLUGIN_PATH[115];
  uint8_T P1_AV_ASYNCIO_CONVERTER_PATH[86];
  uint8_T P2_AV_ASYNCIO_FILTER_PATH[90];
};

#endif                                 /*struct_dsp_AudioFileWriter_3*/

#ifndef typedef_dsp_AudioFileWriter_3
#define typedef_dsp_AudioFileWriter_3

typedef struct dsp_AudioFileWriter_3 dsp_AudioFileWriter_3;

#endif                                 /*typedef_dsp_AudioFileWriter_3*/

#ifndef typedef_dspcodegen_AudioFileWriter
#define typedef_dspcodegen_AudioFileWriter

typedef struct {
  int32_T isInitialized;
  dsp_AudioFileWriter_3 cSFunObject;
} dspcodegen_AudioFileWriter;

#endif                                 /*typedef_dspcodegen_AudioFileWriter*/

#ifndef typedef_dspcodegen_AudioFileWriter_1
#define typedef_dspcodegen_AudioFileWriter_1

typedef struct {
  int32_T isInitialized;
  dsp_AudioFileWriter_2 cSFunObject;
} dspcodegen_AudioFileWriter_1;

#endif                                 /*typedef_dspcodegen_AudioFileWriter_1*/
#endif

/* End of code generation (RealTimeAudioFilter_types.h) */
