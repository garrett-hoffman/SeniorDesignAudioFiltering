from pyaudio import PyAudio, paContinue, paFloat32, paInt16
from time import sleep
import numpy as np
from ctypes import *

pa = PyAudio()
#audio = CDLL('./RealTimeAudioFilter.so')

NORM_CONST = 32768.0
D_TYPE = np.int16

def callback(in_data, frame_count, time_info, status):
#    	audio_data = np.fromstring(in_data, dtype=D_TYPE)
#	out = audio.RealTimeAudioFilter(in_data)
	return (in_data, paContinue)

stream = pa.open(format = paInt16,
	channels = 1,
        rate = 44100,
	input = True,
        output = True,
        frames_per_buffer = 1024,
        stream_callback = callback)

while stream.is_active():
	sleep(0.1)

stream.close()
pa.terminate()
