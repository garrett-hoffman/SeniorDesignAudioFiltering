% Filters out target frequency ranges from a microphone input and sends the filtered signal to the audio output
% Also writes the clean input signal and the filtered output signals to .wav files for later analysis
function RealTimeAudioFilter

% setup audio input and output devices
deviceReader = audioDeviceReader;
deviceWriter = audioDeviceWriter('SampleRate',deviceReader.SampleRate);

% setup clean and filtered output files
cleanWriter = dsp.AudioFileWriter(...
    'cleanOutput1.wav',...
    'FileFormat','WAV');
filteredWriter = dsp.AudioFileWriter(...
    'filteredOutput1.wav',...
    'FileFormat','WAV');

% nyquist frequency, half the sampling rate
nyq = 44100/2.0;
filtType = 'stop';

% tuples of coefficients to pass to the filter() function
[a2881,b2881] = ellip(5,1,60,[2830 2925]/nyq,filtType);
[a960,b960] = ellip(5,1,60,[930 985]/nyq,filtType);
[a1920,b1920] = ellip(5,1,60,[1900 1940]/nyq,filtType);
%[a5760,b5760] = ellip(5,1,60,[5500 5900]/nyq,filtType);
%[a3840,b3840] = ellip(5,1,60,[3750 3950]/nyq,filtType);
%[a4802,b4802] = ellip(5,1,60,[4780 4820]/nyq,filtType);

disp('Begin Signal Input...')

% loop takes 1000 sets of samples for testing purposes, can be changed to "while 1" for deployment
i = 0;
while i < 1000
    % reads set of samlples from input 
    mySignal = deviceReader.step();
    % writes input to clean output file
    cleanWriter.step(amplify(mySignal,4));

    % filters applied in series
    myProcessedSignal = filter(a2881,b2881,mySignal);
    myProcessedSignal1 = filter(a960,b960,myProcessedSignal);
    myProcessedSignal2 = filter(a1920,b1920,myProcessedSignal1);
    %myProcessedSignal3 = filter(a5760,b5760,myProcessedSignal2);
    %myProcessedSignal4 = filter(a3840,b3840,myProcessedSignal3);
    %myProcessedSignal5 = filter(a4802,b4802,myProcessedSignal4);
    
    % boost output signal
    myLouderSignal = amplify(myProcessedSignal2,4);

    % write to filtered output file and output device
    filteredWriter.step(myLouderSignal);
    deviceWriter.step(myLouderSignal);
    i=i+1;
end

disp('End Signal Input')

release(deviceReader)
release(deviceWriter)
release(cleanWriter)
release(filteredWriter)
