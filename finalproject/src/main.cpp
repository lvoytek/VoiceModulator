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
#include <Arduino.h>
// The amount of time paused between audio input sampling in microseconds
#define SAMPLERATE 10
#define SCREENUPDATERATE 5000

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

	for (int thisNote = 0; thisNote < 8; thisNote++) 
	{
		playTone(melody[thisNote]);
		delayMs(300);      
		stopTone();
	}

    initScreen();
    initAudioIn();
    initNumPad();
    int modulationVal = 30;
    
	drawLogo();
	
	int screenUpdateCounter = SCREENUPDATERATE;

    while(1)
    {
	    loop();//arduino code for button press  
		//Audio Input and Output Pause Section
		stopTone();

		//Numpad Section
		int numPadVal = getNumpadValue();
		if(numPadVal >= 0)
		{
			changeLogo(numPadVal);
			delayMs(100);
			drawLogo();

			//TODO: Change modulation
		}

		//Display Section
        if(screenUpdateCounter >= SCREENUPDATERATE)
		{
			screenLoop();
			screenUpdateCounter = 0;
		}


		//Audio Calculation and Output Section
		/*if(modulationVal >= 1500)
        	modulationVal = 30;
		modulationVal +=10;*/
		modulationVal = sampleInput();
		playTone(modulationVal);

        //Delay and Update Counter Section
		screenUpdateCounter += SAMPLERATE;
		delayMs(SAMPLERATE);
    }

    return 0;
}
