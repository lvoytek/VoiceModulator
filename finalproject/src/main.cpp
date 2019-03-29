// Authors: Nadine Najdawi, Jacob Bowles, Jessica Sofka, Lena Voytek    
// Net IDs: nadinealnajdawi, bowlesj, jsofka, dvoytek      
// Date: May 2019      
// Assignment: Final Project
//
// Description: This file contains a programmatic overall description of the
// program. It should never contain assignments to special function registers
// for the exception key one-line code such as checking the state of the pin.
//
// JESS DOES THIS

#include "audioIn.h"
#include "audioOut.h"
#include "waveModulator.h"
#include "numPad.h"
#include "timer.h"
#include "screen.h"

// The amount of time paused between audio input sampling in microseconds
#define SAMPLERATE 100


int main()
{
    initTimer1();
    initScreen();

    //Screen test loop
    while(1)
    {
        screenLoop();
    }


    initAudioIn();
    initAudioOut();
    initNumPad();
    

    int modulationVal = 0;

    while(1)
    {
        playAudio(modulateValue(sampleInput(), modulationVal));
        delayUs(SAMPLERATE);
    }

    return 0;
}
