from scipy.signal import iirfilter,lfilter,iirdesign

def filter(rate, band, freq, ripple, order, filter_type, data):
    nyq  = rate/2.0
    low  = freq - band/2.0
    high = freq + band/2.0
    low  = low/nyq
    high = high/nyq
    #print data
    #b, a = iirfilter(order, [low, high], rp=ripple, rs=1, btype='bandstop', analog=False, ftype=filter_type)
    b, a = iirdesign([1/nyq,800/nyq],[2/nyq,799/nyq] , 1, 60, analog=False, ftype='ellip', output='ba')
    filtered_data = lfilter(b, a, data)
    return filtered_data
