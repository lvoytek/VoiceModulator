// Authors: Nadine Najdawi, Jacob Bowles, Jessica Sofka, Lena Voytek    
// Net IDs: nadinealnajdawi, bowlesj, jsofka, dvoytek      
// Date: May 2019      
// Assignment: Final Project
// LENA DOES THIS

#include "audioOut.h"

/* Initialize pin 5 for audio output */
void initAudioOut()
{
	sei();
	DDRE |= (1 << DDE3); //Set pin 5 to output
}

/* Play a tone on pin 5 at a given frequency */
void playTone(int frequency)
{
	//Choose prescalar of 1 (>61 Hz)
	uint8_t prescaler = (1 << CS10);
	unsigned long top = F_CPU / frequency / 4 - 1; // Calculate interrupt value top
	
	//Swap to prescalar 256 if top too large (<= 61 Hz)
	if (top > 65535)
	{
		prescaler = (1 << CS12); //Set prescaler
		top = top / 256 - 1; //Find new top from 256 prescalar
	}

	ICR1 = top; //Set internal interrupt to top

	//Reduce counter if already exceeding top value
	if (TCNT1 > top) 
		TCNT1 = top;

	TCCR1B = (1 << WGM13) | prescaler; //Set prescaler
	TCCR1A = (1 << COM1B0);
	TIMSK1 |= (1 << OCIE1A); //Activate timer1 interrupt

}

/* Stop the current tone */
void stopTone()
{
	TIMSK1 &= ~(1 << OCIE1A); //Remove timer interrupt
	PORTE &= ~(1 << PORTE3); //Turn off pin 5 output
}


/* Timer interrupt */
ISR(TIMER1_COMPA_vect)
{
	PORTE ^= (1 << PORTE3); //Toggle pin output
}