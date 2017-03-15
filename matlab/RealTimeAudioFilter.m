function RealTimeAudioFilter
deviceReader = audioDeviceReader;
deviceWriter = audioDeviceWriter('SampleRate',deviceReader.SampleRate);

cleanWriter = dsp.AudioFileWriter(...
    'cleanOutput1.wav',...
    'FileFormat','WAV');
filteredWriter = dsp.AudioFileWriter(...
    'filteredOutput1.wav',...
    'FileFormat','WAV');

% filt2881 = filtIIRelliptic(2700,2830,2925,3100);
% filt960 = filtIIRelliptic(920,930,985,1000);
% filt1920 = filtIIRelliptic(1880,1900,1940,1960);
% filt5760 = filtIIRelliptic(5300,5500,5900,6000);
% filt3840 = filtIIRelliptic(3650,3750,3950,4000);
% filt4802 = filtIIRelliptic(4760,4780,4820,4840);

nyq = 44100/2.0;
filtType = 'stop';
[a2881,b2881] = ellip(5,1,60,[2830 2925]/nyq,filtType);
[a960,b960] = ellip(5,1,60,[930 985]/nyq,filtType);
[a1920,b1920] = ellip(5,1,60,[1900 1940]/nyq,filtType);
%[a5760,b5760] = ellip(5,1,60,[5500 5900]/nyq,filtType);
%[a3840,b3840] = ellip(5,1,60,[3750 3950]/nyq,filtType);
%[a4802,b4802] = ellip(5,1,60,[4780 4820]/nyq,filtType);
disp('Begin Signal Input...')
i = 0;
while i < 1000
    mySignal = deviceReader.step();
    cleanWriter.step(amplify(mySignal,4));
    myProcessedSignal = filter(a2881,b2881,mySignal);
    myProcessedSignal1 = filter(a960,b960,myProcessedSignal);
    myProcessedSignal2 = filter(a1920,b1920,myProcessedSignal1);
    %myProcessedSignal3 = filter(a5760,b5760,myProcessedSignal2);
    %myProcessedSignal4 = filter(a3840,b3840,myProcessedSignal3);
    %myProcessedSignal5 = filter(a4802,b4802,myProcessedSignal4);
    myLouderSignal = amplify(myProcessedSignal2,4);
    filteredWriter.step(myLouderSignal);
    deviceWriter.step(myLouderSignal);
    i=i+1;
end

disp('End Signal Input')

release(deviceReader)
release(deviceWriter)
release(cleanWriter)
release(filteredWriter)