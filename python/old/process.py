from pyaudio import PyAudio, paContinue, paFloat32, paInt16
from time import sleep
from bandstop import filter
import numpy as np

pa = PyAudio()

NORM_CONST = 32768.0
D_TYPE = np.int16

def callback(in_data, frame_count, time_info, status):
    	audio_data = np.fromstring(in_data, dtype=D_TYPE)
	normalized = [x / NORM_CONST for x in audio_data] 
	out = filter(11025, 50, 1000, 1, 7, 'ellip', normalized)
	norm_out = np.array(np.round_(out * NORM_CONST))
	return (norm_out.astype(D_TYPE).tostring(), paContinue)

stream = pa.open(format = paInt16,
	channels = 1,
        rate = 11025,
	input = True,
        output = True,
        frames_per_buffer = 4096,
        stream_callback = callback)

while stream.is_active():
	sleep(0.1)

stream.close()
pa.terminate()
