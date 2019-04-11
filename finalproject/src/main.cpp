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

#define NOTE_C4  262
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247

int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

int main()
{
    
    initAudioOut();
    initTimer0();

    for (int thisNote = 0; thisNote < 8; thisNote++) {
        playTone(melody[thisNote]);

        delayMs(300);      
    
        stopTone();
    }

    initScreen();
    initAudioIn();
    initNumPad();
    int modulationVal = 30;




    while(1)
    {
        playTone(modulationVal);

        //screenLoop();
        //delayMs(SAMPLERATE);

        delayMs(100);

        stopTone();

        if(modulationVal >= 1500)
            modulationVal = 30;
        modulationVal +=10;
    }

    return 0;
}
