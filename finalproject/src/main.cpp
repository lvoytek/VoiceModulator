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

//Ring buffer for audio input data
unsigned char buffer[256];
unsigned char recordLoc = 0;
int modulationVal;

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
	    /*loop();//arduino code for button press  

		//Numpad Section
		int numPadVal = getNumpadValue();
		if(numPadVal >= 0)
		{
			changeLogo(numPadVal);
			delayMs(100);
			drawLogo();
			modulationVal = numPadVal;
		}*/


		//Audio Calculation and Output Section
		/*if(modulationVal >= 1500)
        	modulationVal = 30;
		modulationVal +=10;*/

        //Delay and Update Counter Section
		//screenUpdateCounter += SAMPLERATE;
		//delayMs(SAMPLERATE);
    }

    return 0;
}

ISR(ADC_vect) 
{
	buffer[recordLoc ++] = ADCH;
	
	modulationVal = buffer[recordLoc - 1];
	playTone(modulationVal);
}