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
    uint8_t wSelect = 0;
    uint8_t LRChannel = 0;

    for(int i = 0; i < 64; i++)
    {
        //Change between left and right channels
        if(!wSelect)
        {
            if(LRChannel)
            {
                LRChannel = 0;
            }
            else
            {
                LRChannel = 1;
            }
            
        }
    }
}
