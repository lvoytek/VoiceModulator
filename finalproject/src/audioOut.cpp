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
    DDRB |= (1<<I2S_SCK) | (1<<I2S_WS) | (1<<I2S_SD);
}

void playAudio(int sample)
{
    
}
