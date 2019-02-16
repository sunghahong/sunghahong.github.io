<CsoundSynthesizer>
<CsOptions>
; Select audio/midi flags here according to platform
-odac     ;;;realtime audio out
;-iadc    ;;;uncomment -iadc if realtime audio input is needed too
; For Non-realtime ouput leave only the line below:
; -o oscil.wav -W ;;; for file output any platform
</CsOptions>
<CsInstruments>

sr = 44100  ; Sample rate
ksmps = 32  ; Samples per control signal
nchnls = 2  ; Number of output channels
0dbfs  = 1

instr 1

kamp = .6
kcps = p5
ifn  = p4

asig oscil kamp, kcps, ifn
     outs asig,asig

endin
</CsInstruments>
<CsScore>
f1 0 16384 10 1                                          ; Sine
f2 0 16384 10 1 0.5 0.3 0.25 0.2 0.167 0.14 0.125 .111   ; Sawtooth
f3 0 16384 10 1 0   0.3 0    0.2 0     0.14 0     .111   ; Square
f4 0 16384 10 1 1   1   1    0.7 0.5   0.3  0.1          ; Pulse

//MAIN MELODY
i 1 0 0.15 3 293.66
i 1 0.15 0.15 3 293.66
i 1 0.3 0.3 2 587.33
i 1 0.6 0.45 3 440.00

i 1 1.05 0.3 2 415.30
i 1 1.35 0.3 2 392.00
i 1 1.65 0.3 3 349.23
i 1 1.95 0.15 3 293.66
i 1 2.1 0.15 2 349.23
i 1 2.25 0.15 3 392.00

i 1 2.4 0.15 3 261.63
i 1 2.55 0.15 3 261.63
i 1 2.7 0.3 2 587.33
i 1 3.0 0.45 3 440.00

i 1 3.45 0.3 2 415.30
i 1 3.75 0.3 2 392.00
i 1 4.05 0.3 3 349.23
i 1 4.35 0.15 3 293.66
i 1 4.5 0.15 2 349.23
i 1 4.65 0.15 3 392.00

i 1 4.8 0.15 3 246.94
i 1 4.95 0.15 3 246.94
i 1 5.1 0.3 2 587.33
i 1 5.4 0.45 3 440.00

i 1 5.85 0.3 2 415.30
i 1 6.15 0.3 2 392.00
i 1 6.45 0.3 3 349.23
i 1 6.75 0.15 3 293.66
i 1 6.9 0.15 2 349.23
i 1 7.05 0.15 3 392.00

i 1 7.2 0.15 3 233.08
i 1 7.35 0.15 3 233.08
i 1 7.5 0.3 2 587.33
i 1 7.8 0.45 3 440.00

i 1 8.25 0.3 2 415.30
i 1 8.55 0.3 2 392.00
i 1 8.85 0.3 3 349.23
i 1 9.15 0.15 3 293.66
i 1 9.3 0.15 2 349.23
i 1 9.45 0.15 3 392.00

//BASSLINE
i 1 0 2.4 1 146.83
i 1 2.4 2.4 1 130.81
i 1 4.8 2.4 1 123.47
i 1 7.2 1.1 1 116.54
i 1 8.2 1.3 1 130.81

e
</CsScore>
</CsoundSynthesizer>