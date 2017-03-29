function RealTimeAudioFilter(file)
[x,Fs] = audioread(file);
%deviceReader = audioDeviceReader;
%deviceWriter = audioDeviceWriter('SampleRate',deviceReader.SampleRate);

%cleanWriter = dsp.AudioFileWriter('cleanOutput14.wav','FileFormat','WAV');
filteredWriter = dsp.AudioFileWriter(strcat('out',file),'FileFormat','WAV');

nyq = 44100/2.0;
filtType = 'stop';
[a2881,b2881] = ellip(5,1,60,[2830.0 2925.0]/nyq,filtType);
[a960,b960] = ellip(5,1,60,[930.0 1085.0]/nyq,filtType);
[a1920,b1920] = ellip(5,1,60,[1900.0 2040.0]/nyq,filtType);
[a5760,b5760] = ellip(5,1,60,[5500.0 8000.0]/nyq,filtType);
[a3840,b3840] = ellip(5,1,60,[3750.0 3950.0]/nyq,filtType);
[a4802,b4802] = ellip(5,1,60,[4780.0 4820.0]/nyq,filtType);
[a8643,b8643] = ellip(5,1,60,[7500.0 9500.0]/nyq,filtType);
[a2827,b2827] = ellip(5,1,60,[2500.0 3500.0]/nyq,filtType);
%[a13000,b13000] = ellip(5,1,60,[12500.0 16000.0]/nyq,filtType);

disp('Begin Signal Input...')
%i = 0;
    zi2881 = zeros(10,1,'double');
    zi960 = zeros(10,1,'double');
    zi1920 = zeros(10,1,'double');
    zi5760 = zeros(10,1,'double');
    zi3840 = zeros(10,1,'double');
    zi4802 = zeros(10,1,'double');
    zi8643 = zeros(10,1,'double');
    zi6722 = zeros(10,1,'double');
    zi2827 = zeros(10,1,'double');
    %zi13000 = zeros(10,1,'double');
    
%while i < 1000
    %mySignal = deviceReader.step();
    %cleanWriter.step(amplify(mySignal,4));
    [y2881,zf2881]  = filter(a2881,b2881,x,zi2881);
    [y960, zf960] = filter(a960,b960,y2881,zi960);
    [y1920, zf1920] = filter(a1920,b1920,y960,zi1920);
    [y5760, zf5760] = filter(a5760,b5760,y1920,zi5760);
    [y3840, zf3840] = filter(a3840,b3840,y5760, zi3840);
    [y4802, zf4802] = filter(a4802,b4802,y3840,zi4802);
    [y8643, zf8643] = filter(a8643,b8643,y4802,zi8643);
    [y2827, zf2827] = filter(a2827,b2827,y8643,zi2827);
    %[y13000, zf13000] = filter(a13000,b13000,y2827,zi13000);
    myLouderSignal = amplify(y8643,4);
    zi2881 = zf2881;
    zi960 = zf960;
    zi1920 = zf1920;
    zi5760 = zf5760;
    zi3840= zf3840;
    zi4802 = zf4802;
    zi8643 = zf8643;
    zi2827 = zf2827;
    %zi13000 = zf13000;
    filteredWriter.step(myLouderSignal);
    %deviceWriter.step(myLouderSignal);
    %i=i+1;
%end

disp('End Signal Input')

%release(deviceReader)
%release(deviceWriter)
%release(cleanWriter)
release(filteredWriter)