// Authors: Nadine Najdawi, Jacob Bowles, Jessica Sofka, Lena Voytek    
// Net IDs: nadinealnajdawi, bowlesj, jsofka, dvoytek      
// Date: May 2019      
// Assignment: Final Project
// NADINE DOES THIS

#include "audioIn.h"
#include "Arduino.h"

void initAudioIn()
{
	ADCSRA = 0;             // clear ADCSRA register
	ADCSRB = 0;             // clear ADCSRB register
	ADMUX |= (0 & 0x07);    // set A0 analog input pin
	ADMUX |= (1 << REFS0);  // set reference voltage
	ADMUX |= (1 << ADLAR);  // left align ADC value to 8 bits from ADCH register

	// sampling rate is [ADC clock] / [prescaler] / [conversion clock cycles]
	// for Arduino Uno ADC clock is 16 MHz and a conversion takes 13 clock cycles
	ADCSRA |= (1 << ADPS2);                     // 16 prescaler for 76.9 KHz

	ADCSRA |= (1 << ADATE); // enable auto trigger
	ADCSRA |= (1 << ADIE);  // enable interrupts when measurement complete
	ADCSRA |= (1 << ADEN);  // enable ADC
	ADCSRA |= (1 << ADSC);  // start ADC measurements
	sei(); //enable interrupts
}

