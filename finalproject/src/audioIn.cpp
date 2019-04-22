// Authors: Nadine Najdawi, Jacob Bowles, Jessica Sofka, Lena Voytek    
// Net IDs: nadinealnajdawi, bowlesj, jsofka, dvoytek      
// Date: May 2019      
// Assignment: Final Project
// NADINE DOES THIS

#include "audioIn.h"
#include "Arduino.h"

int sensorPin = A0; 

void initAudioIn()
{
  DDRB &= ~(1 << DDF0); // Analog Pin A0
  PORTB |= (1 << PORTF0);

  // DDRB &= ~(1 << DDF1);
  // PORTB |= (1 << PORTF1);

  DDRB &= ~(1 << DDG1); // Digital Pin 40
  PORTB |= (1 << PORTG1);

  // DDRB &= ~(1 << DDC3);
  // PORTB |= (1 << PORTC3);
}

int sampleInput()
{
  int Analog_x = A0; // X-axis-signal
  int Digital_x = 3; // Button
  float Analog;
  int Digital;
  long sum = 0;
  int sensorVal = 0;

  for (int i = 0; i < 100; i++) {
    sum = sum + analogRead(Analog_x);
  }
  sensorVal = analogRead(Analog_x);
  
  // Current value will be read and converted to voltage 
  Analog = analogRead (Analog_x) * (5.0 / 1023.0); 
  Digital = digitalRead (Digital_x);

  return Digital;
}
