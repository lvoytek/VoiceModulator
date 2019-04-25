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

#define NUMPADCHECKRATE 1000 //# of milliseconds between button press checks

//Ring buffer for audio input data
unsigned char buffer[256];
unsigned char recordLoc = 0;

//Values for audio modulation
int modulationType = 0;
int modulationVal = 0;

int main()
{
    initAudioOut();
    initTimer0();
    initScreen();
    initAudioIn();
    initNumPad();
	drawLogo();

    while(1)
    {
		//Numpad Section
	    checkForKeys(); //Check for key press on numPad  

		int numPadVal = getNumpadValue();
		if(numPadVal >= 0 && numPadVal != modulationType)
		{
			changeLogo(numPadVal);
			delayMs(100);
			drawLogo();
			modulationType = numPadVal;
		}

		delayMs(NUMPADCHECKRATE);
    }

    return 0;
}

ISR(ADC_vect) 
{
	modulationVal = ADCH;
	buffer[recordLoc ++] = modulationVal; 

	switch(modulationType)
	{
		//No Modulation
		case 0:
			OCR2B = modulationVal;
			break;
		
		//Echo
		case 1:
			OCR2B = modulationVal + buffer[recordLoc - 10];
			break;
	}
}