# SungHaHong_ProblemSet2.c                    

This problem set demonstrates a player's health system in video games, on a scale from 0 to 100, and how it affects the heartbeat SFX heard by the player.
I've had some experience using the RTPC (Real-Time Parameter Control) feature in Wwise and Unity, so I wanted to try replicating it in C.
With if/else if statements, the parameter of playerhealth will directly affect the volume of the audio file "Heartbeat.mp3".

Referring to the afplay manual in Terminal, I found out that the scale of volume is from 0 to 1. In this case, I used decimal points for each range of playerhealth.
In RTPC, an exponential curve is used more often than linear for huge contrast between high and low health, so I tried making a rough estimate of an exponential curve in my numbers.

### Build and Run SungHaHong_ProblemSet1.c

	ls; cd .../Problem Set 2; ls; gcc SungHaHong_ProblemSet2.c -o SungHaHong_ProblemSet2 (or any output name); ./SungHaHong_ProblemSet2 (no space between ./ and output name)

### Questions
- Is there a way to enter a new value of playerhealth in Terminal without having to stop Terminal (control+C) everytime? Would that be another approach of coding?

### Acknowledgement 
Thanks Leo for tutoring me and helping me get this script up and running. :D