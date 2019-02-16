# SungHaHong_ProblemSet1.csd                    

This problem set demonstrates a transcription of the iconic melody of Megalovania, an original soundtrack from the popular indie video game Undertale.
Because the original melody has an electro 8-bit feel, a combination of sawtooth and square waveforms was used for the melody.
The sawtooth wave was especially used whenever there is an accidental, leap, or any other important note to accentuate on the feeling of the performance.
For the bassline, it is simply constructed with a sine wave sustaining through each measure.

(At first, it was difficult to understand the speed of duration, which I figured out by refining the number from 0.2 to 0.15 for 16th notes, 
and making use of syncopations.)

### Build and Run SungHaHong_ProblemSet1.csd

	ls; cd "CorrectDirectory"; ls; gcc -odac SungHaHong_ProblemSet1.csd

### Caveats
Make sure that Csound is installed in your OS and is accessible via command line. Install Csound using this [link](https://github.com/csound/csound/releases/).    

### Acknowledgement 
Original transcription of Megalovania (https://musescore.com/jestermusician/undertale_megalovania)

