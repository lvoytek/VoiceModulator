// Author: Lena Voytek
// Net ID: dvoytek
// Date: 25 February 2019
// Assignment: Lab 3
//----------------------------------------------------------------------//

#include "timer.h"

/* Initialize timer 1, you should not turn the timer on here. Use CTC mode  .*/
void initTimer1()
{
    //Set timer to be in CTC mode
    TCCR1A &= ~(1 << WGM00); 
    TCCR1A |= (1 << WGM01);
    TCCR1B &= ~(1 << WGM02);

    // Sets the prescaler to 8
    TCCR1B |= (1 << CS01);
    TCCR1B &= ~(1 << CS02) & ~(1 << CS00); 
    
    OCR1A = 2; //Create a microsecond based delay with OCR1A of 2
}

/* This delays the program an amount specified by unsigned int delay in microseconds.
*/
void delayUs(unsigned int delay)
{
    unsigned int delayCount = 0; //Use this variable to count passed microseconds

    // Set the timer flag down
    TIFR1 |= (1 << OCF1A); 
    TCNT1 = 0;

    //Every microsecond count up one
    while(delayCount < delay)
    {
        if(TIFR1 & (1 << OCF1A))
        {
            delayCount++;
            TIFR1 |= (1 << OCF1A);
        }
    }
}
