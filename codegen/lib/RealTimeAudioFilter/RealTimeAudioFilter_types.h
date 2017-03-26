/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: RealTimeAudioFilter_types.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 26-Mar-2017 17:10:00
 */

#ifndef REALTIMEAUDIOFILTER_TYPES_H
#define REALTIMEAUDIOFILTER_TYPES_H

/* Include Files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_c_audiointerface_audioDeviceRea
#define struct_c_audiointerface_audioDeviceRea

struct c_audiointerface_audioDeviceRea
{
  int S0_isInitialized;
  unsigned char W0_AudioDeviceLib[1096];
  double O0_Y0[1024];
  unsigned int O1_Y1;
};

#endif                                 /*struct_c_audiointerface_audioDeviceRea*/

#ifndef typedef_c_audiointerface_audioDeviceRea
#define typedef_c_audiointerface_audioDeviceRea

typedef struct c_audiointerface_audioDeviceRea c_audiointerface_audioDeviceRea;

#endif                                 /*typedef_c_audiointerface_audioDeviceRea*/

#ifndef typedef_audioDeviceReader
#define typedef_audioDeviceReader

typedef struct {
  int isInitialized;
  boolean_T TunablePropsChanged;
  c_audiointerface_audioDeviceRea pInterface;
} audioDeviceReader;

#endif                                 /*typedef_audioDeviceReader*/

#ifndef struct_c_audiointerface_audioDeviceWri
#define struct_c_audiointerface_audioDeviceWri

struct c_audiointerface_audioDeviceWri
{
  int S0_isInitialized;
  unsigned char W0_AudioDeviceLib[1096];
  unsigned int O0_Y0;
};

#endif                                 /*struct_c_audiointerface_audioDeviceWri*/

#ifndef typedef_c_audiointerface_audioDeviceWri
#define typedef_c_audiointerface_audioDeviceWri

typedef struct c_audiointerface_audioDeviceWri c_audiointerface_audioDeviceWri;

#endif                                 /*typedef_c_audiointerface_audioDeviceWri*/

#ifndef typedef_audioDeviceWriter
#define typedef_audioDeviceWriter

typedef struct {
  int isInitialized;
  boolean_T TunablePropsChanged;
  unsigned int inputVarSize1[8];
  c_audiointerface_audioDeviceWri pInterface;
  double pInputFrameSize;
} audioDeviceWriter;

#endif                                 /*typedef_audioDeviceWriter*/

#ifndef struct_dsp_AudioFileWriter_2
#define struct_dsp_AudioFileWriter_2

struct dsp_AudioFileWriter_2
{
  int S0_isInitialized;
  double W0_HostLib[137];
  double W1_AudioInfo[5];
  double W2_VideoInfo[11];
  unsigned char P0_AV_ASYNCIO_PLUGIN_PATH[115];
  unsigned char P1_AV_ASYNCIO_CONVERTER_PATH[86];
  unsigned char P2_AV_ASYNCIO_FILTER_PATH[90];
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
  int S0_isInitialized;
  double W0_HostLib[137];
  double W1_AudioInfo[5];
  double W2_VideoInfo[11];
  unsigned char P0_AV_ASYNCIO_PLUGIN_PATH[115];
  unsigned char P1_AV_ASYNCIO_CONVERTER_PATH[86];
  unsigned char P2_AV_ASYNCIO_FILTER_PATH[90];
};

#endif                                 /*struct_dsp_AudioFileWriter_3*/

#ifndef typedef_dsp_AudioFileWriter_3
#define typedef_dsp_AudioFileWriter_3

typedef struct dsp_AudioFileWriter_3 dsp_AudioFileWriter_3;

#endif                                 /*typedef_dsp_AudioFileWriter_3*/

#ifndef typedef_dspcodegen_AudioFileWriter
#define typedef_dspcodegen_AudioFileWriter

typedef struct {
  int isInitialized;
  dsp_AudioFileWriter_3 cSFunObject;
} dspcodegen_AudioFileWriter;

#endif                                 /*typedef_dspcodegen_AudioFileWriter*/

#ifndef typedef_dspcodegen_AudioFileWriter_1
#define typedef_dspcodegen_AudioFileWriter_1

typedef struct {
  int isInitialized;
  dsp_AudioFileWriter_2 cSFunObject;
} dspcodegen_AudioFileWriter_1;

#endif                                 /*typedef_dspcodegen_AudioFileWriter_1*/
#endif

/*
 * File trailer for RealTimeAudioFilter_types.h
 *
 * [EOF]
 */
