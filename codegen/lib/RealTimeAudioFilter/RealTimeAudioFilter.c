/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: RealTimeAudioFilter.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 26-Mar-2017 17:10:00
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "SystemCore.h"
#include "filter.h"
#include "step.h"
#include "setup.h"
#include "AudioFileWriter.h"
#include "audioDeviceWriter.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void RealTimeAudioFilter(void)
{
  audioDeviceReader *obj;
  audioDeviceReader deviceReader;
  audioDeviceWriter deviceWriter;
  dspcodegen_AudioFileWriter_1 cleanWriter;
  dspcodegen_AudioFileWriter filteredWriter;
  double zi2881[10];
  double zi960[10];
  double zi1920[10];
  double zi5760[10];
  double zi3840[10];
  double zi4802[10];
  double zi8643[10];
  int i;
  double mySignal[1024];
  double b_mySignal[1024];
  int b_i;
  double dv0[11];
  double dv1[11];
  static const double dv2[11] = { 0.97242961371174652, -8.9185812783697713,
    37.580633158629851, -95.6894102544553, 162.9221680102263,
    -193.73435704687154, 162.92216801022619, -95.689410254455183,
    37.58063315862978, -8.9185812783697482, 0.97242961371174375 };

  static const double dv3[11] = { 1.0, -9.1203692560891714, 38.216638054921319,
    -96.765612937132886, 163.83369864940676, -193.72812288167793,
    162.00417923323909, -94.616503147364526, 36.950552378228913,
    -8.7197318902572523, 0.94539324933979085 };

  double myLouderSignal[1024];
  double zf2881[10];
  double dv4[11];
  double dv5[11];
  static const double dv6[11] = { 0.955520195996908, -9.4572872016640446,
    42.219099705390562, -111.94478202090872, 195.23582189905719,
    -234.01674515232733, 195.23582189905719, -111.9447820209087,
    42.219099705390541, -9.45728720166404, 0.95552019599690718 };

  static const double dv7[11] = { 1.0, -9.8080486119355879, 43.388394653331105,
    -114.00123285533193, 197.01467131805913, -233.99761543632644,
    193.43775816819465, -109.89916527583699, 41.067622073267053,
    -9.1148214180409717, 0.91243738803644392 };

  double zf960[10];
  double dv8[11];
  double dv9[11];
  static const double dv10[11] = { 0.95971201190140154, -9.2218510819590254,
    40.243569880617812, -105.00541123181841, 181.38651225117468,
    -216.72506085906548, 181.38651225117439, -105.00541123181809,
    40.243569880617635, -9.2218510819589774, 0.95971201190139532 };

  static const double dv11[11] = { 1.0, -9.53041782450255, 41.249519532097985,
    -106.7471842975948, 182.87983185753467, -216.71033834489342,
    179.87822174874492, -103.27176155247734, 39.251446462227662,
    -8.919883467152415, 0.92056868678262915 };

  double zf1920[10];
  double dv12[11];
  double dv13[11];
  static const double dv14[11] = { 0.50083195115041512, -2.8937373742994814,
    9.1717787255571661, -19.232992378734064, 29.395325140599493,
    -33.679323672853918, 29.395325140599518, -19.2329923787341, 9.17177872555719,
    -2.8937373742994916, 0.50083195115041756 };

  static const double dv15[11] = { 1.0, -5.0174365632353144, 13.747440966738697,
    -24.964402838602645, 33.033194106688271, -32.730661788063081,
    24.609118084077757, -13.77495883396546, 5.5468660083752539,
    -1.4453231550546339, 0.19925246873429497 };

  double zf5760[10];
  double dv16[11];
  double dv17[11];
  static const double dv18[11] = { 0.94308402392557344, -8.0477583225711289,
    32.185372197964654, -79.07337851744947, 131.84707189979829,
    -155.70673771116344, 131.84707189979832, -79.0733785174495,
    32.185372197964661, -8.04775832257113, 0.94308402392557411 };

  static const double dv19[11] = { 1.0, -8.4342629600346068, 33.338017363558578,
    -80.948407823766146, 133.39307434608568, -155.68357468925061,
    130.27641997007748, -77.209758416041026, 31.055080668569524,
    -7.6730075021125312, 0.88846389508604484 };

  double zf3840[10];
  double dv20[11];
  double dv21[11];
  static const double dv22[11] = { 0.98826957402020033, -7.6603394939950338,
    28.69227080146732, -67.4612793959959, 109.67554005168958,
    -128.45073848373747, 109.67554005168967, -67.461279395996016,
    28.69227080146738, -7.6603394939950551, 0.98826957402020388 };

  static const double dv23[11] = { 1.0, -7.7330047656362026, 28.896164838526779,
    -67.780434907787992, 109.93438481002397, -128.44993257365155,
    109.41580919931212, -67.142482336127529, 28.4891666462419,
    -7.5881216805159566, 0.97663536024933917 };

  double zf4802[10];
  double dv24[11];
  double dv25[11];
  static const double dv26[11] = { 0.57264894814136869, -2.0287302291818254,
    5.7187802764602464, -10.110724793581689, 14.985669613220342,
    -16.259443903294937, 14.985669613220342, -10.110724793581687,
    5.7187802764602447, -2.0287302291818259, 0.57264894814136891 };

  static const double dv27[11] = { 1.0, -3.165237165121459, 7.91755287359825,
    -12.486032776378458, 16.465873559521228, -15.916427685025052,
    13.018792451100898, -7.7778944623595283, 3.8639938382380294,
    -1.1927618599374619, 0.28798495318550271 };

  double zf8643[10];
  obj = &deviceReader;
  deviceReader.isInitialized = 0;

  /* System object Constructor function: audiointerface.audioDeviceReader */
  obj->pInterface.S0_isInitialized = 0;
  c_audioDeviceWriter_audioDevice(&deviceWriter);
  AudioFileWriter_AudioFileWriter(&cleanWriter);
  b_AudioFileWriter_AudioFileWrit(&filteredWriter);

  /* [a13000,b13000] = ellip(5,1,60,[12500.0 16000.0]/nyq,filtType); */
  memset(&zi2881[0], 0, 10U * sizeof(double));
  memset(&zi960[0], 0, 10U * sizeof(double));
  memset(&zi1920[0], 0, 10U * sizeof(double));
  memset(&zi5760[0], 0, 10U * sizeof(double));
  memset(&zi3840[0], 0, 10U * sizeof(double));
  memset(&zi4802[0], 0, 10U * sizeof(double));
  memset(&zi8643[0], 0, 10U * sizeof(double));

  /* zi13000 = zeros(10,1,'double'); */
  for (i = 0; i < 1000; i++) {
    SystemCore_step(&deviceReader, mySignal);
    for (b_i = 0; b_i < 1024; b_i++) {
      b_mySignal[b_i] = mySignal[b_i] * 4.0;
    }

    b_SystemCore_step(&cleanWriter, b_mySignal);
    memcpy(&dv0[0], &dv2[0], 11U * sizeof(double));
    memcpy(&dv1[0], &dv3[0], 11U * sizeof(double));
    filter(dv0, dv1, mySignal, zi2881, myLouderSignal, zf2881);
    memcpy(&dv4[0], &dv6[0], 11U * sizeof(double));
    memcpy(&dv5[0], &dv7[0], 11U * sizeof(double));
    filter(dv4, dv5, myLouderSignal, zi960, mySignal, zf960);
    memcpy(&dv8[0], &dv10[0], 11U * sizeof(double));
    memcpy(&dv9[0], &dv11[0], 11U * sizeof(double));
    filter(dv8, dv9, mySignal, zi1920, myLouderSignal, zf1920);
    memcpy(&dv12[0], &dv14[0], 11U * sizeof(double));
    memcpy(&dv13[0], &dv15[0], 11U * sizeof(double));
    filter(dv12, dv13, myLouderSignal, zi5760, mySignal, zf5760);
    memcpy(&dv16[0], &dv18[0], 11U * sizeof(double));
    memcpy(&dv17[0], &dv19[0], 11U * sizeof(double));
    filter(dv16, dv17, mySignal, zi3840, myLouderSignal, zf3840);
    memcpy(&dv20[0], &dv22[0], 11U * sizeof(double));
    memcpy(&dv21[0], &dv23[0], 11U * sizeof(double));
    filter(dv20, dv21, myLouderSignal, zi4802, mySignal, zf4802);
    memcpy(&dv24[0], &dv26[0], 11U * sizeof(double));
    memcpy(&dv25[0], &dv27[0], 11U * sizeof(double));
    filter(dv24, dv25, mySignal, zi8643, myLouderSignal, zf8643);

    /* [y13000, zf13000] = filter(a13000,b13000,y2827,zi13000); */
    for (b_i = 0; b_i < 1024; b_i++) {
      myLouderSignal[b_i] *= 4.0;
    }

    memcpy(&zi2881[0], &zf2881[0], 10U * sizeof(double));
    memcpy(&zi960[0], &zf960[0], 10U * sizeof(double));
    memcpy(&zi1920[0], &zf1920[0], 10U * sizeof(double));
    memcpy(&zi5760[0], &zf5760[0], 10U * sizeof(double));
    memcpy(&zi3840[0], &zf3840[0], 10U * sizeof(double));
    memcpy(&zi4802[0], &zf4802[0], 10U * sizeof(double));
    memcpy(&zi8643[0], &zf8643[0], 10U * sizeof(double));

    /* zi13000 = zf13000; */
    c_SystemCore_step(&filteredWriter, myLouderSignal);
    d_SystemCore_step(&deviceWriter, myLouderSignal);
  }

  SystemCore_release(&deviceReader);
  b_SystemCore_release(&deviceWriter);
  c_SystemCore_release(&cleanWriter);
  d_SystemCore_release(&filteredWriter);
  c_Destructor(&filteredWriter.cSFunObject);
  b_Destructor(&cleanWriter.cSFunObject);
  d_Destructor(&deviceWriter.pInterface);
  Destructor(&deviceReader.pInterface);
}

/*
 * File trailer for RealTimeAudioFilter.c
 *
 * [EOF]
 */
