MATLAB="/Applications/MATLAB_R2016a.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/brittanysweyer/.matlab/R2016a"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for RealTimeAudioFilter" > RealTimeAudioFilter_mex.mki
echo "CC=$CC" >> RealTimeAudioFilter_mex.mki
echo "CFLAGS=$CFLAGS" >> RealTimeAudioFilter_mex.mki
echo "CLIBS=$CLIBS" >> RealTimeAudioFilter_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> RealTimeAudioFilter_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> RealTimeAudioFilter_mex.mki
echo "CXX=$CXX" >> RealTimeAudioFilter_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> RealTimeAudioFilter_mex.mki
echo "CXXLIBS=$CXXLIBS" >> RealTimeAudioFilter_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> RealTimeAudioFilter_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> RealTimeAudioFilter_mex.mki
echo "LD=$LD" >> RealTimeAudioFilter_mex.mki
echo "LDFLAGS=$LDFLAGS" >> RealTimeAudioFilter_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> RealTimeAudioFilter_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> RealTimeAudioFilter_mex.mki
echo "Arch=$Arch" >> RealTimeAudioFilter_mex.mki
echo OMPFLAGS= >> RealTimeAudioFilter_mex.mki
echo OMPLINKFLAGS= >> RealTimeAudioFilter_mex.mki
echo "EMC_COMPILER=Xcode with Clang" >> RealTimeAudioFilter_mex.mki
echo "EMC_CONFIG=optim" >> RealTimeAudioFilter_mex.mki
"/Applications/MATLAB_R2016a.app/bin/maci64/gmake" -B -f RealTimeAudioFilter_mex.mk
