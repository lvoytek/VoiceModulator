// Authors: Nadine Najdawi, Jacob Bowles, Jessica Sofka, Lena Voytek    
// Net IDs: nadinealnajdawi, bowlesj, jsofka, dvoytek      
// Date: May 2019      
// Assignment: Final Project

#ifndef AUDIOOUT_H
#define AUDIOOUT_H

#include <avr/io.h>

//I2S Pin Definitions
#define I2S_SCK  PB7
#define I2S_WS   PB6
#define I2S_SD   PB5

void initAudioOut();

void playAudio(int sample);


#endif