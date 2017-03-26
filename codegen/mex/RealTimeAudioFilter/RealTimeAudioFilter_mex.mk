START_DIR = /Users/brittanysweyer/Documents/MATLAB

MATLAB_ROOT = /Applications/MATLAB_R2016a.app
MAKEFILE = RealTimeAudioFilter_mex.mk

include RealTimeAudioFilter_mex.mki


SRC_FILES =  \
	RealTimeAudioFilter_data.c \
	RealTimeAudioFilter_initialize.c \
	RealTimeAudioFilter_terminate.c \
	RealTimeAudioFilter.c \
	audioDeviceReader.c \
	SystemCore.c \
	audioDeviceWriter.c \
	AudioFileWriter.c \
	setup.c \
	step.c \
	amplify.c \
	filter.c \
	error.c \
	_coder_RealTimeAudioFilter_info.c \
	_coder_RealTimeAudioFilter_api.c \
	_coder_RealTimeAudioFilter_mex.c \
	HostLib_Audio.c \
	HostLib_MMFile.c \
	HostLib_Multimedia.c \
	HostLib_rtw.c

MEX_FILE_NAME_WO_EXT = RealTimeAudioFilter_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexmaci64
TARGET = $(MEX_FILE_NAME)

SYS_LIBS = 


#
#====================================================================
# gmake makefile fragment for building MEX functions using Unix
# Copyright 2007-2015 The MathWorks, Inc.
#====================================================================
#
OBJEXT = o
.SUFFIXES: .$(OBJEXT)

OBJLISTC = $(SRC_FILES:.c=.$(OBJEXT))
OBJLISTCPP  = $(OBJLISTC:.cpp=.$(OBJEXT))
OBJLIST  = $(OBJLISTCPP:.cu=.$(OBJEXT))

target: $(TARGET)

ML_INCLUDES = -I "$(MATLAB_ROOT)/simulink/include"
ML_INCLUDES+= -I "$(MATLAB_ROOT)/toolbox/shared/simtargets"
SYS_INCLUDE = $(ML_INCLUDES)

# Additional includes

SYS_INCLUDE += -I "$(START_DIR)"
SYS_INCLUDE += -I "$(START_DIR)/codegen/mex/RealTimeAudioFilter"
SYS_INCLUDE += -I "./interface"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/toolbox/dsp/include"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/toolbox/shared/dsp/vision/matlab/include"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/toolbox/shared/dspblks/extern/include"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/extern/include/multimedia"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/extern/include"
SYS_INCLUDE += -I "."

EML_LIBS = -lemlrt -lcovrt -lut -lmwmathutil 
SYS_LIBS += $(CLIBS) $(EML_LIBS)


EXPORTFILE = $(MEX_FILE_NAME_WO_EXT)_mex.map
ifeq ($(Arch),maci)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS))
else ifeq ($(Arch),maci64)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS)) -Wl,-rpath,@loader_path
else
  EXPORTOPT = -Wl,--version-script,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS) $(OMPFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS) $(OMPFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS)) 
endif
LINK_FLAGS += $(OMPLINKFLAGS)
ifeq ($(Arch),maci)
  LINK_FLAGS += -L$(MATLAB_ROOT)/sys/os/maci
endif
ifeq ($(EMC_CONFIG),optim)
  ifeq ($(Arch),mac)
    COMP_FLAGS += $(CDEBUGFLAGS)
    CXX_FLAGS += $(CXXDEBUGFLAGS)
  else
    COMP_FLAGS += $(COPTIMFLAGS)
    CXX_FLAGS += $(CXXOPTIMFLAGS)
  endif
  LINK_FLAGS += $(LDOPTIMFLAGS)
else
  COMP_FLAGS += $(CDEBUGFLAGS)
  CXX_FLAGS += $(CXXDEBUGFLAGS)
  LINK_FLAGS += $(LDDEBUGFLAGS)
endif
LINK_FLAGS += -o $(TARGET)
LINK_FLAGS +=  -lm -ldl -lm -ldl -lm -ldl -lm -ldl

CCFLAGS =  $(COMP_FLAGS) $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS =   $(CXX_FLAGS) $(USER_INCLUDE) $(SYS_INCLUDE)

%.$(OBJEXT) : %.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CXX) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : $(MATLAB_ROOT)/toolbox/dsp/include/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(MATLAB_ROOT)/toolbox/shared/dsp/vision/matlab/include/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(MATLAB_ROOT)/toolbox/shared/dspblks/extern/src/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/RealTimeAudioFilter/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : $(MATLAB_ROOT)/toolbox/dsp/include/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(MATLAB_ROOT)/toolbox/shared/dsp/vision/matlab/include/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(MATLAB_ROOT)/toolbox/shared/dspblks/extern/src/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/RealTimeAudioFilter/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.cu
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : $(MATLAB_ROOT)/toolbox/dsp/include/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(MATLAB_ROOT)/toolbox/shared/dsp/vision/matlab/include/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(MATLAB_ROOT)/toolbox/shared/dspblks/extern/src/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/RealTimeAudioFilter/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CXX) $(CPPFLAGS) "$<"



$(TARGET): $(OBJLIST) $(MAKEFILE)
	$(LD) $(EXPORTOPT) $(OBJLIST) $(LINK_FLAGS) $(SYS_LIBS)

#====================================================================

