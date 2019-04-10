// Authors: Nadine Najdawi, Jacob Bowles, Jessica Sofka, Lena Voytek    
// Net IDs: nadinealnajdawi, bowlesj, jsofka, dvoytek      
// Date: May 2019      
// Assignment: Final Project
// LENA DOES THIS

#include "audioOut.h"

/* Play a tone on pin 5 at a given frequency */
void playTone(int frequency)
{
    //Set pin 5 to output
    DDRE |= (1 << DDE3);

    //Calculate top value neccessary to produce frequency
    unsigned long top = F_CPU / frequency / 4 - 1;

    //Choose prescalar in range of frequency, 256 if higher, 1 if lower
    if(top > 65535)
    {
        top = top / 256 - 1; 
        TCCR1B = (1 << CS12) | (1 << WGM13);
    }
    else
    {
        TCCR1B = (1 << CS10) | (1 << WGM13);
    }
    
    ICR1 = top; //Send top value to pwm

    //Confirm counter not exceeding top
    if (TCNT1 > top) 
        TCNT1 = top;

    TCCR1A = COM1B0;
    TIMSK1 |= OCIE1A; //Activate timer interrupt

}

/* Stop the current tone */
void stopTone()
{
    //Turn pin 5 output off
    DDRE &= ~(1 << DDE3);
}
