
#include <stdio.h>
#include <stdlib.h>

int playerhealth;


//// Assignment 2 Link : http://ol.berklee.edu/mod/assign/view.php?id=1608879 ////
//// To build and run this script, ls; cd .../Problem Set 2; ls; gcc SungHaHong_ProblemSet2.c -o SungHaHong_ProblemSet2; ./SungHaHong_ProblemSet2 (no space between ./ and output name)

//// PLAYER'S HEALTH CONDITION - THE LOWER THE PLAYER'S HEALTH, THE LOUDER THE AUDIO FILE "HEARTBEAT.WAV" IS HEARD

int main () 
{
    printf("Insert player health\n");                           // \n means new line
    scanf ("%d",&playerhealth);
    if (80 < playerhealth && playerhealth <= 100)
        {
            printf ("\nThe player's health is between 80 and 100. The player's health is in no danger.\n");
            system     ("afplay \"Heartbeat.mp3\" -v 0");
        }
    else if (60 < playerhealth && playerhealth <= 80)
        {
            printf ("\nThe player's health is between 60 and 80. The player's health is in slight danger.\n");
            system     ("afplay \"Heartbeat.mp3\" -v 0.1"); 
        }       
    else if (40 < playerhealth && playerhealth <= 60)
        {
            printf ("\nThe player's health is between 40 and 60. The player's health is quite critical. Go grab some potion or something\n");
            system     ("afplay \"Heartbeat.mp3\" -v 0.3"); 
        }
    else if (20 < playerhealth && playerhealth <= 40)
        {
            printf ("\nThe player's health is between 20 and 40. The player's health is critical. You might die\n");
            system     ("afplay \"Heartbeat.mp3\" -v 0.8"); 
        }
    else if (0 < playerhealth && playerhealth <= 20)
        {
            printf ("\nThe player's health is between 1 and 20. The player's health is very critical. You're probably gonna die\n");
            system     ("afplay \"Heartbeat.mp3\" -v 1"); 
        }
    else if (playerhealth <= 0)
        {
            printf ("\nThe player's health is 0. YOU DED. Press continue to resume from save point.\n");
            system     ("killall afplay");                    // -q is killall afplay in terminal
        }

 return 0;
}






//// Terminal Manual about afplay ////

//     Audio File Play
//     Version: 2.0
//     Copyright 2003-2013, Apple Inc. All Rights Reserved.
//     Specify -h (-help) for command options

// Usage:
// afplay [option...] audio_file

// Options: (may appear before or after arguments)
//   {-v | --volume} VOLUME
//     set the volume for playback of the file
//   {-h | --help}
//     print help
//   { --leaks}
//     run leaks analysis
//   {-t | --time} TIME
//     play for TIME seconds
//   {-r | --rate} RATE
//     play at playback rate
//   {-q | --rQuality} QUALITY
//     set the quality used for rate-scaled playback (default is 0 - low quality, 1 - high quality)
//   {-d | --debug}
//     debug print output
// SungHa:Problem Set 2 sunghahong$ 








//// original script written in 02_helloSine.c ////



////////////////////////////////////////////////////////////
// 02_hellosine.c                     
// Jonathan Bailey and Richard Boulanger
////////////////////////////////////////////////////////////
// A computer music equivalent to "Hello World" 
// - a short, procedural program to print out a Csound score 
// that will synthesize a sine wave at A440Hz for 3 seconds. 
////////////////////////////////////////////////////////////
// to compile and run: $ gcc -o helloSine 02_helloSine.c && ./helloSine >> helloSine.csd && csound -odac -d  -O null helloSine.csd
////////////////////////////////////////////////////////////


// int main()
// {
// 	printf("<CsoundSynthesizer>\n");
// 	printf("<CsInstruments>\n");
// 	printf("instr hellosine\n");
// 	printf("k1 linen 1, .2, p3, .3\n");
// 	printf("a1 oscili 10000, 200, 1\n");
// 	printf("out a1 * k1\n");
// 	printf("endin\n");
// 	printf("</CsInstruments>\n");
// 	printf("<CsScore>\n");
// 	printf("f 1  0 8192 10 1\n");
// 	printf("i \"hellosine\" 0 3\n");
// 	printf("</CsScore>\n");
// 	printf("</CsoundSynthesizer>\a");
// 	return 0;	
// }
