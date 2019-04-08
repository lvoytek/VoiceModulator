// Authors: Nadine Najdawi, Jacob Bowles, Jessica Sofka, Lena Voytek    
// Net IDs: nadinealnajdawi, bowlesj, jsofka, dvoytek      
// Date: May 2019      
// Assignment: Final Project
// LENA DOES THIS

#include "audioOut.h"

#include <util/delay.h>

/* Initialize I2S Pins as output */
void initAudioOut()
{
    DDRE |= (1 << DDE3); /* pin 5 on the dev board */

    // set Fast PWM 10-bit mode, non-inverting
    TCCR3A |= (1 << COM3A1)|(1 << WGM31)|(1 << WGM30);
    TCCR3B |= (1 << WGM32)|(1 << CS30);

    // set the duty cycle 0%
    OCR3A = 0;
}

void playAudio(int pitch, int volume)
{
    OCR3A = (int) (1023/100.0 * pitch);
}
