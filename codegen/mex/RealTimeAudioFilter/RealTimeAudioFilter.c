/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * RealTimeAudioFilter.c
 *
 * Code generation for function 'RealTimeAudioFilter'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RealTimeAudioFilter.h"
#include "audioDeviceReader.h"
#include "audioDeviceWriter.h"
#include "AudioFileWriter.h"
#include "setup.h"
#include "step.h"
#include "amplify.h"
#include "SystemCore.h"
#include "filter.h"
#include "RealTimeAudioFilter_data.h"
#include "HostLib_Audio.h"
#include "HostLib_MMFile.h"
#include "HostLib_Multimedia.h"
#include "HostLib_rtw.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 2, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo b_emlrtRSI = { 3, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo c_emlrtRSI = { 5, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo d_emlrtRSI = { 6, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo e_emlrtRSI = { 34, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo f_emlrtRSI = { 35, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo g_emlrtRSI = { 36, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo h_emlrtRSI = { 37, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo i_emlrtRSI = { 38, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo j_emlrtRSI = { 39, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo k_emlrtRSI = { 40, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo l_emlrtRSI = { 41, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo m_emlrtRSI = { 42, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo n_emlrtRSI = { 43, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo o_emlrtRSI = { 45, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo p_emlrtRSI = { 55, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo q_emlrtRSI = { 56, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo r_emlrtRSI = { 62, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo s_emlrtRSI = { 63, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo t_emlrtRSI = { 64, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo u_emlrtRSI = { 65, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtMCInfo emlrtMCI = { 20, 1, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtMCInfo b_emlrtMCI = { 60, 1, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo fb_emlrtRSI = { 60, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

static emlrtRSInfo gb_emlrtRSI = { 20, "RealTimeAudioFilter",
  "/Users/brittanysweyer/Documents/MATLAB/RealTimeAudioFilter.m" };

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [16]);
static void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[21]);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [16])
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv4[2] = { 1, 16 };

  y = NULL;
  m2 = emlrtCreateCharArray(2, iv4);
  emlrtInitCharArrayR2013a(sp, 16, m2, &u[0]);
  emlrtAssign(&y, m2);
  return y;
}

static void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "disp", true, location);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[21])
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv3[2] = { 1, 21 };

  y = NULL;
  m1 = emlrtCreateCharArray(2, iv3);
  emlrtInitCharArrayR2013a(sp, 21, m1, &u[0]);
  emlrtAssign(&y, m1);
  return y;
}

void RealTimeAudioFilter(const emlrtStack *sp)
{
  audioDeviceReader deviceReader;
  audioDeviceWriter deviceWriter;
  dspcodegen_AudioFileWriter_1 cleanWriter;
  dspcodegen_AudioFileWriter filteredWriter;
  static const char_T cv0[21] = { 'B', 'e', 'g', 'i', 'n', ' ', 'S', 'i', 'g',
    'n', 'a', 'l', ' ', 'I', 'n', 'p', 'u', 't', '.', '.', '.' };

  int32_T i;
  real_T zi2881[10];
  real_T zi960[10];
  real_T zi1920[10];
  real_T zi5760[10];
  real_T zi3840[10];
  real_T zi4802[10];
  real_T zi8643[10];
  real_T zi2827[10];
  static const char_T cv1[16] = { 'E', 'n', 'd', ' ', 'S', 'i', 'g', 'n', 'a',
    'l', ' ', 'I', 'n', 'p', 'u', 't' };

  real_T mySignal[1024];
  real_T myLouderSignal[1024];
  real_T dv0[11];
  real_T dv1[11];
  static const real_T dv2[11] = { 0.97242961371174652, -8.9185812783697713,
    37.580633158629851, -95.6894102544553, 162.9221680102263,
    -193.73435704687154, 162.92216801022619, -95.689410254455183,
    37.58063315862978, -8.9185812783697482, 0.97242961371174375 };

  static const real_T dv3[11] = { 1.0, -9.1203692560891714, 38.216638054921319,
    -96.765612937132886, 163.83369864940676, -193.72812288167793,
    162.00417923323909, -94.616503147364526, 36.950552378228913,
    -8.7197318902572523, 0.94539324933979085 };

  real_T zf2881[10];
  real_T dv4[11];
  real_T dv5[11];
  static const real_T dv6[11] = { 0.955520195996908, -9.4572872016640446,
    42.219099705390562, -111.94478202090872, 195.23582189905719,
    -234.01674515232733, 195.23582189905719, -111.9447820209087,
    42.219099705390541, -9.45728720166404, 0.95552019599690718 };

  static const real_T dv7[11] = { 1.0, -9.8080486119355879, 43.388394653331105,
    -114.00123285533193, 197.01467131805913, -233.99761543632644,
    193.43775816819465, -109.89916527583699, 41.067622073267053,
    -9.1148214180409717, 0.91243738803644392 };

  real_T zf960[10];
  real_T dv8[11];
  real_T dv9[11];
  static const real_T dv10[11] = { 0.95971201190140154, -9.2218510819590254,
    40.243569880617812, -105.00541123181841, 181.38651225117468,
    -216.72506085906548, 181.38651225117439, -105.00541123181809,
    40.243569880617635, -9.2218510819589774, 0.95971201190139532 };

  static const real_T dv11[11] = { 1.0, -9.53041782450255, 41.249519532097985,
    -106.7471842975948, 182.87983185753467, -216.71033834489342,
    179.87822174874492, -103.27176155247734, 39.251446462227662,
    -8.919883467152415, 0.92056868678262915 };

  real_T zf1920[10];
  real_T dv12[11];
  real_T dv13[11];
  static const real_T dv14[11] = { 0.50083195115041512, -2.8937373742994814,
    9.1717787255571661, -19.232992378734064, 29.395325140599493,
    -33.679323672853918, 29.395325140599518, -19.2329923787341, 9.17177872555719,
    -2.8937373742994916, 0.50083195115041756 };

  static const real_T dv15[11] = { 1.0, -5.0174365632353144, 13.747440966738697,
    -24.964402838602645, 33.033194106688271, -32.730661788063081,
    24.609118084077757, -13.77495883396546, 5.5468660083752539,
    -1.4453231550546339, 0.19925246873429497 };

  real_T zf5760[10];
  real_T dv16[11];
  real_T dv17[11];
  static const real_T dv18[11] = { 0.94308402392557344, -8.0477583225711289,
    32.185372197964654, -79.07337851744947, 131.84707189979829,
    -155.70673771116344, 131.84707189979832, -79.0733785174495,
    32.185372197964661, -8.04775832257113, 0.94308402392557411 };

  static const real_T dv19[11] = { 1.0, -8.4342629600346068, 33.338017363558578,
    -80.948407823766146, 133.39307434608568, -155.68357468925061,
    130.27641997007748, -77.209758416041026, 31.055080668569524,
    -7.6730075021125312, 0.88846389508604484 };

  real_T zf3840[10];
  real_T dv20[11];
  real_T dv21[11];
  static const real_T dv22[11] = { 0.98826957402020033, -7.6603394939950338,
    28.69227080146732, -67.4612793959959, 109.67554005168958,
    -128.45073848373747, 109.67554005168967, -67.461279395996016,
    28.69227080146738, -7.6603394939950551, 0.98826957402020388 };

  static const real_T dv23[11] = { 1.0, -7.7330047656362026, 28.896164838526779,
    -67.780434907787992, 109.93438481002397, -128.44993257365155,
    109.41580919931212, -67.142482336127529, 28.4891666462419,
    -7.5881216805159566, 0.97663536024933917 };

  real_T zf4802[10];
  real_T dv24[11];
  real_T dv25[11];
  static const real_T dv26[11] = { 0.57264894814136869, -2.0287302291818254,
    5.7187802764602464, -10.110724793581689, 14.985669613220342,
    -16.259443903294937, 14.985669613220342, -10.110724793581687,
    5.7187802764602447, -2.0287302291818259, 0.57264894814136891 };

  static const real_T dv27[11] = { 1.0, -3.165237165121459, 7.91755287359825,
    -12.486032776378458, 16.465873559521228, -15.916427685025052,
    13.018792451100898, -7.7778944623595283, 3.8639938382380294,
    -1.1927618599374619, 0.28798495318550271 };

  real_T y8643[1024];
  real_T zf8643[10];
  real_T dv28[11];
  real_T dv29[11];
  static const real_T dv30[11] = { 0.75194303700527065, -6.8537589849836653,
    28.746563610916184, -72.960265562984645, 123.98713850612477,
    -147.34311702619971, 123.98713850612474, -72.9602655629846,
    28.746563610916155, -6.8537589849836547, 0.7519430370052691 };

  static const real_T dv31[11] = { 1.0, -8.6109342839909537, 34.106963473995748,
    -81.714574585187819, 131.018983569983, -146.81540515300821,
    116.40669298137598, -64.482558487626, 23.888742346455622,
    -5.3476936123240479, 0.54990793628276824 };

  real_T zf2827[10];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0);
  st.site = &emlrtRSI;
  c_audioDeviceReader_audioDevice(&deviceReader);
  st.site = &b_emlrtRSI;
  c_audioDeviceWriter_audioDevice(&deviceWriter);
  st.site = &c_emlrtRSI;
  AudioFileWriter_AudioFileWriter(&cleanWriter);
  st.site = &d_emlrtRSI;
  b_AudioFileWriter_AudioFileWrit(&filteredWriter);

  /* [a13000,b13000] = ellip(5,1,60,[12500.0 16000.0]/nyq,filtType); */
  st.site = &gb_emlrtRSI;
  disp(&st, emlrt_marshallOut(&st, cv0), &emlrtMCI);
  i = 0;
  memset(&zi2881[0], 0, 10U * sizeof(real_T));
  memset(&zi960[0], 0, 10U * sizeof(real_T));
  memset(&zi1920[0], 0, 10U * sizeof(real_T));
  memset(&zi5760[0], 0, 10U * sizeof(real_T));
  memset(&zi3840[0], 0, 10U * sizeof(real_T));
  memset(&zi4802[0], 0, 10U * sizeof(real_T));
  memset(&zi8643[0], 0, 10U * sizeof(real_T));
  memset(&zi2827[0], 0, 10U * sizeof(real_T));

  /* zi13000 = zeros(10,1,'double'); */
  while (covrtLogWhile(&emlrtCoverageInstance, 0U, 0U, 0, i < 1000)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1);
    st.site = &e_emlrtRSI;
    SystemCore_step(&st, &deviceReader, mySignal);
    st.site = &f_emlrtRSI;
    amplify(mySignal, 4.0, myLouderSignal);
    st.site = &f_emlrtRSI;
    b_SystemCore_step(&st, &cleanWriter, myLouderSignal);
    memcpy(&dv0[0], &dv2[0], 11U * sizeof(real_T));
    memcpy(&dv1[0], &dv3[0], 11U * sizeof(real_T));
    st.site = &g_emlrtRSI;
    filter(&st, dv0, dv1, mySignal, zi2881, myLouderSignal, zf2881);
    memcpy(&dv4[0], &dv6[0], 11U * sizeof(real_T));
    memcpy(&dv5[0], &dv7[0], 11U * sizeof(real_T));
    st.site = &h_emlrtRSI;
    filter(&st, dv4, dv5, myLouderSignal, zi960, mySignal, zf960);
    memcpy(&dv8[0], &dv10[0], 11U * sizeof(real_T));
    memcpy(&dv9[0], &dv11[0], 11U * sizeof(real_T));
    st.site = &i_emlrtRSI;
    filter(&st, dv8, dv9, mySignal, zi1920, myLouderSignal, zf1920);
    memcpy(&dv12[0], &dv14[0], 11U * sizeof(real_T));
    memcpy(&dv13[0], &dv15[0], 11U * sizeof(real_T));
    st.site = &j_emlrtRSI;
    filter(&st, dv12, dv13, myLouderSignal, zi5760, mySignal, zf5760);
    memcpy(&dv16[0], &dv18[0], 11U * sizeof(real_T));
    memcpy(&dv17[0], &dv19[0], 11U * sizeof(real_T));
    st.site = &k_emlrtRSI;
    filter(&st, dv16, dv17, mySignal, zi3840, myLouderSignal, zf3840);
    memcpy(&dv20[0], &dv22[0], 11U * sizeof(real_T));
    memcpy(&dv21[0], &dv23[0], 11U * sizeof(real_T));
    st.site = &l_emlrtRSI;
    filter(&st, dv20, dv21, myLouderSignal, zi4802, mySignal, zf4802);
    memcpy(&dv24[0], &dv26[0], 11U * sizeof(real_T));
    memcpy(&dv25[0], &dv27[0], 11U * sizeof(real_T));
    st.site = &m_emlrtRSI;
    filter(&st, dv24, dv25, mySignal, zi8643, y8643, zf8643);
    memcpy(&dv28[0], &dv30[0], 11U * sizeof(real_T));
    memcpy(&dv29[0], &dv31[0], 11U * sizeof(real_T));
    st.site = &n_emlrtRSI;
    filter(&st, dv28, dv29, y8643, zi2827, myLouderSignal, zf2827);

    /* [y13000, zf13000] = filter(a13000,b13000,y2827,zi13000); */
    st.site = &o_emlrtRSI;
    amplify(y8643, 4.0, myLouderSignal);
    memcpy(&zi2881[0], &zf2881[0], 10U * sizeof(real_T));
    memcpy(&zi960[0], &zf960[0], 10U * sizeof(real_T));
    memcpy(&zi1920[0], &zf1920[0], 10U * sizeof(real_T));
    memcpy(&zi5760[0], &zf5760[0], 10U * sizeof(real_T));
    memcpy(&zi3840[0], &zf3840[0], 10U * sizeof(real_T));
    memcpy(&zi4802[0], &zf4802[0], 10U * sizeof(real_T));
    memcpy(&zi8643[0], &zf8643[0], 10U * sizeof(real_T));
    memcpy(&zi2827[0], &zf2827[0], 10U * sizeof(real_T));

    /* zi13000 = zf13000; */
    st.site = &p_emlrtRSI;
    c_SystemCore_step(&st, &filteredWriter, myLouderSignal);
    st.site = &q_emlrtRSI;
    d_SystemCore_step(&st, &deviceWriter, myLouderSignal);
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  st.site = &fb_emlrtRSI;
  disp(&st, b_emlrt_marshallOut(&st, cv1), &b_emlrtMCI);
  st.site = &r_emlrtRSI;
  SystemCore_release(&st, &deviceReader);
  st.site = &s_emlrtRSI;
  b_SystemCore_release(&st, &deviceWriter);
  st.site = &t_emlrtRSI;
  c_SystemCore_release(&st, &cleanWriter);
  st.site = &u_emlrtRSI;
  d_SystemCore_release(&st, &filteredWriter);
  st.site = NULL;
  c_Destructor(&filteredWriter.cSFunObject);
  st.site = NULL;
  b_Destructor(&cleanWriter.cSFunObject);
  st.site = NULL;
  d_Destructor(&deviceWriter.pInterface);
  st.site = NULL;
  Destructor(&deviceReader.pInterface);
}

/* End of code generation (RealTimeAudioFilter.c) */
