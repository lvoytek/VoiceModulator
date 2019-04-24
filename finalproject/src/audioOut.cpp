// Authors: Nadine Najdawi, Jacob Bowles, Jessica Sofka, Lena Voytek    
// Net IDs: nadinealnajdawi, bowlesj, jsofka, dvoytek      
// Date: May 2019      
// Assignment: Final Project
// LENA DOES THIS

#include "audioOut.h"

/* Initialize pin 9 for audio output */
void initAudioOut()
{
    DDRH |= (1 << DDH6); //Pin 9 on board output

    // Use internal clock
    ASSR &= ~(_BV(EXCLK) | _BV(AS2));

    // Set fast PWM mode
    TCCR2A |= _BV(WGM21) | _BV(WGM20);
    TCCR2B &= ~_BV(WGM22);

    // Non-inverting PWM on OC2B (pin 9)
    TCCR2A = (TCCR2A | _BV(COM2B1)) & ~_BV(COM2B0);
    TCCR2A &= ~(_BV(COM2A1) | _BV(COM2A0));

    //Prescalar of 1
    TCCR2B = (TCCR2B & ~(_BV(CS12) | _BV(CS11))) | _BV(CS10);

    // Set initial pulse width 0.
    OCR2B = 0;
}

/* Play a tone on pin 9 at a given frequency */
void playTone(int pwmVal)
{
	OCR2B = pwmVal;
}