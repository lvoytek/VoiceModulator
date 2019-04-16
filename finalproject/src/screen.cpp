// Authors: Nadine Najdawi, Jacob Bowles, Jessica Sofka, Lena Voytek    
// Net IDs: nadinealnajdawi, bowlesj, jsofka, dvoytek      
// Date: May 2019      
// Assignment: Final Project
// LENA DOES THIS

#include "screen.h"

//Images to display on screen
unsigned char dale[] = {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0xc0,0xc0,0xc0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xc0,0xc0,0x80,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf0,0xf8,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xf0,0xc0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x80,0x0,0xff,0xff,0xff,0xff,0xff,0xef,0xef,0xef,0xed,0xef,0xef,0xff,0xff,0xff,0xff,0xff,0xff,0xf,0x7,0xe9,0xf9,0xed,0xed,0xed,0xec,0xe9,0xe1,0xe0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0xf,0x7f,0xe0,0xcf,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xbf,0xff,0xff,0xff,0xff,0xff,0x7f,0x7f,0x3f,0x0,0x0,0x3,0xf,0x1f,0x3f,0x7f,0xff,0xff,0xff,0x7f,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x3,0x3,0x1f,0xff,0xff,0xff,0xfd,0xfe,0xff,0xef,0xef,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xf4,0xf4,0xc4,0xc0,0xe0,0xf0,0xf0,0xfc,0x7f,0x1e,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc8,0xf3,0xf7,0xff,0xdf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x1f,0x3,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x3c,0x3f,0x1f,0x1f,0x1f,0xfe,0xe7,0xff,0x77,0x1f,0xf9,0xf1,0xf1,0xf1,0xf1,0x23,0x1,0x1,0x1,0x0,0x80,0x80,0x80,0xc0,0xc0,0xc0,0xc0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
unsigned char arch[] = {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x7,0xf,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xf,0x1,0x0,0x0,0x0,0x0,0x0,0x1,0xf,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x3f,0x3f,0x7d,0xf8,0xf0,0xe0,0xc0,0xc0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x1f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x1f,0xf,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x3,0x3,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0xf,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x1f,0x7,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0xe0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xe0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0xf,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x3f,0xf,0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xe0,0x0,0x0,0x0,0x0,0x0,0x0,0x20,0x60,0xe0,0xe0,0xc3,0xc7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0x7f,0x1f,0xf,0x1,0x0,0x0,0x0,0x80,0x80,0xc0,0xc0,0xe0,0xe0,0xe0,0xf0,0xf0,0xf0,0xf0,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0xf0,0xf0,0xf0,0xe0,0xe0,0xe0,0xc0,0xc0,0x80,0x81,0x1,0x3,0x7,0xf,0xf,0x1f,0x3f,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xf3,0xf9,0xf8,0xfc,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfc,0xf8,0xf9,0xf7,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};

//Array of horizontal bitmapped letters matching ASCII test values
unsigned char screenFont[][8]={ {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, {0x00,0x00,0x5F,0x00,0x00,0x00,0x00,0x00}, {0x00,0x00,0x07,0x00,0x07,0x00,0x00,0x00}, {0x00,0x14,0x7F,0x14,0x7F,0x14,0x00,0x00}, {0x00,0x24,0x2A,0x7F,0x2A,0x12,0x00,0x00}, {0x00,0x23,0x13,0x08,0x64,0x62,0x00,0x00}, {0x00,0x36,0x49,0x55,0x22,0x50,0x00,0x00}, {0x00,0x00,0x05,0x03,0x00,0x00,0x00,0x00}, {0x00,0x1C,0x22,0x41,0x00,0x00,0x00,0x00}, {0x00,0x41,0x22,0x1C,0x00,0x00,0x00,0x00}, {0x00,0x08,0x2A,0x1C,0x2A,0x08,0x00,0x00}, {0x00,0x08,0x08,0x3E,0x08,0x08,0x00,0x00}, {0x00,0xA0,0x60,0x00,0x00,0x00,0x00,0x00}, {0x00,0x08,0x08,0x08,0x08,0x08,0x00,0x00}, {0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x00}, {0x00,0x20,0x10,0x08,0x04,0x02,0x00,0x00}, {0x00,0x3E,0x51,0x49,0x45,0x3E,0x00,0x00}, {0x00,0x00,0x42,0x7F,0x40,0x00,0x00,0x00}, {0x00,0x62,0x51,0x49,0x49,0x46,0x00,0x00}, {0x00,0x22,0x41,0x49,0x49,0x36,0x00,0x00}, {0x00,0x18,0x14,0x12,0x7F,0x10,0x00,0x00}, {0x00,0x27,0x45,0x45,0x45,0x39,0x00,0x00}, {0x00,0x3C,0x4A,0x49,0x49,0x30,0x00,0x00}, {0x00,0x01,0x71,0x09,0x05,0x03,0x00,0x00}, {0x00,0x36,0x49,0x49,0x49,0x36,0x00,0x00}, {0x00,0x06,0x49,0x49,0x29,0x1E,0x00,0x00}, {0x00,0x00,0x36,0x36,0x00,0x00,0x00,0x00}, {0x00,0x00,0xAC,0x6C,0x00,0x00,0x00,0x00}, {0x00,0x08,0x14,0x22,0x41,0x00,0x00,0x00}, {0x00,0x14,0x14,0x14,0x14,0x14,0x00,0x00}, {0x00,0x41,0x22,0x14,0x08,0x00,0x00,0x00}, {0x00,0x02,0x01,0x51,0x09,0x06,0x00,0x00}, {0x00,0x32,0x49,0x79,0x41,0x3E,0x00,0x00}, {0x00,0x7E,0x09,0x09,0x09,0x7E,0x00,0x00}, {0x00,0x7F,0x49,0x49,0x49,0x36,0x00,0x00}, {0x00,0x3E,0x41,0x41,0x41,0x22,0x00,0x00}, {0x00,0x7F,0x41,0x41,0x22,0x1C,0x00,0x00}, {0x00,0x7F,0x49,0x49,0x49,0x41,0x00,0x00}, {0x00,0x7F,0x09,0x09,0x09,0x01,0x00,0x00}, {0x00,0x3E,0x41,0x41,0x51,0x72,0x00,0x00}, {0x00,0x7F,0x08,0x08,0x08,0x7F,0x00,0x00}, {0x00,0x41,0x7F,0x41,0x00,0x00,0x00,0x00}, {0x00,0x20,0x40,0x41,0x3F,0x01,0x00,0x00}, {0x00,0x7F,0x08,0x14,0x22,0x41,0x00,0x00}, {0x00,0x7F,0x40,0x40,0x40,0x40,0x00,0x00}, {0x00,0x7F,0x02,0x0C,0x02,0x7F,0x00,0x00}, {0x00,0x7F,0x04,0x08,0x10,0x7F,0x00,0x00}, {0x00,0x3E,0x41,0x41,0x41,0x3E,0x00,0x00}, {0x00,0x7F,0x09,0x09,0x09,0x06,0x00,0x00}, {0x00,0x3E,0x41,0x51,0x21,0x5E,0x00,0x00}, {0x00,0x7F,0x09,0x19,0x29,0x46,0x00,0x00}, {0x00,0x26,0x49,0x49,0x49,0x32,0x00,0x00}, {0x00,0x01,0x01,0x7F,0x01,0x01,0x00,0x00}, {0x00,0x3F,0x40,0x40,0x40,0x3F,0x00,0x00}, {0x00,0x1F,0x20,0x40,0x20,0x1F,0x00,0x00}, {0x00,0x3F,0x40,0x38,0x40,0x3F,0x00,0x00}, {0x00,0x63,0x14,0x08,0x14,0x63,0x00,0x00}, {0x00,0x03,0x04,0x78,0x04,0x03,0x00,0x00}, {0x00,0x61,0x51,0x49,0x45,0x43,0x00,0x00}, {0x00,0x7F,0x41,0x41,0x00,0x00,0x00,0x00}, {0x00,0x02,0x04,0x08,0x10,0x20,0x00,0x00}, {0x00,0x41,0x41,0x7F,0x00,0x00,0x00,0x00}, {0x00,0x04,0x02,0x01,0x02,0x04,0x00,0x00}, {0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00}, {0x00,0x01,0x02,0x04,0x00,0x00,0x00,0x00}, {0x00,0x20,0x54,0x54,0x54,0x78,0x00,0x00}, {0x00,0x7F,0x48,0x44,0x44,0x38,0x00,0x00}, {0x00,0x38,0x44,0x44,0x28,0x00,0x00,0x00}, {0x00,0x38,0x44,0x44,0x48,0x7F,0x00,0x00}, {0x00,0x38,0x54,0x54,0x54,0x18,0x00,0x00}, {0x00,0x08,0x7E,0x09,0x02,0x00,0x00,0x00}, {0x00,0x18,0xA4,0xA4,0xA4,0x7C,0x00,0x00}, {0x00,0x7F,0x08,0x04,0x04,0x78,0x00,0x00}, {0x00,0x00,0x7D,0x00,0x00,0x00,0x00,0x00}, {0x00,0x80,0x84,0x7D,0x00,0x00,0x00,0x00}, {0x00,0x7F,0x10,0x28,0x44,0x00,0x00,0x00}, {0x00,0x41,0x7F,0x40,0x00,0x00,0x00,0x00}, {0x00,0x7C,0x04,0x18,0x04,0x78,0x00,0x00}, {0x00,0x7C,0x08,0x04,0x7C,0x00,0x00,0x00}, {0x00,0x38,0x44,0x44,0x38,0x00,0x00,0x00}, {0x00,0xFC,0x24,0x24,0x18,0x00,0x00,0x00}, {0x00,0x18,0x24,0x24,0xFC,0x00,0x00,0x00}, {0x00,0x00,0x7C,0x08,0x04,0x00,0x00,0x00}, {0x00,0x48,0x54,0x54,0x24,0x00,0x00,0x00}, {0x00,0x04,0x7F,0x44,0x00,0x00,0x00,0x00}, {0x00,0x3C,0x40,0x40,0x7C,0x00,0x00,0x00}, {0x00,0x1C,0x20,0x40,0x20,0x1C,0x00,0x00}, {0x00,0x3C,0x40,0x30,0x40,0x3C,0x00,0x00}, {0x00,0x44,0x28,0x10,0x28,0x44,0x00,0x00}, {0x00,0x1C,0xA0,0xA0,0x7C,0x00,0x00,0x00}, {0x00,0x44,0x64,0x54,0x4C,0x44,0x00,0x00}, {0x00,0x08,0x36,0x41,0x00,0x00,0x00,0x00}, {0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00}, {0x00,0x41,0x36,0x08,0x00,0x00,0x00,0x00}, {0x00,0x02,0x01,0x01,0x02,0x01,0x00,0x00}, {0x00,0x02,0x05,0x05,0x02,0x00,0x00,0x00}};

logo logos[2]; 
logo * currentLogo;

//The previous NUM_QUERIES amount of audio datapoints
int audioQueries[NUM_QUERIES];

/* Initialize audio data graph and run screen startup sequence */
void initScreen()
{
    //Initialize logo array
    logos[0] = createLogo(dale, 1024);
    logos[1] = createLogo(arch, 1024);

    currentLogo = logos;


    //Set all query values to zero
    for(int i = 0; i < NUM_QUERIES; i++)
        audioQueries[i] = 0;

    //Initialize I2C pins to make screen communication work
    initI2C();

    //Reset Screen Settings on PIN 4
    DDRG |= (1<<DDG5);
    PORTG |= (1 << PORTG5);
    delayMs(1);
    PORTG &= ~(1 << PORTG5);
    delayMs(10);
    PORTG |= (1 << PORTG5);

    //Screen initialization commands
    writeI2CCommand(0xae);	//turn off oled panel
    writeI2CCommand(0x00);	//set low column address
    writeI2CCommand(0x10);	//set high column address
    writeI2CCommand(0x40);	//set start line address
    writeI2CCommand(0x81);	//set contrast control register
    writeI2CCommand(0xcf);	
    writeI2CCommand(0xa1);	//set segment remap 95 to 0
    writeI2CCommand(0xa6);	//set normal display
    writeI2CCommand(0xa8);	//set multiplex ratio(1 to 64)
    writeI2CCommand(0x3f);	//1/64 duty
    writeI2CCommand(0xd3);	//set display offset
    writeI2CCommand(0x00);	//not offset
    writeI2CCommand(0xd5);	//set display clock divide ratio/oscillator frequency
    writeI2CCommand(0x80);	//set divide ratio
    writeI2CCommand(0xd9);	//set precharge period
    writeI2CCommand(0xf1);	
    writeI2CCommand(0xda);	//set com pins hardware configuration
    writeI2CCommand(0x12);	
    writeI2CCommand(0xdb);	//set vcomh
    writeI2CCommand(0x40);	
    writeI2CCommand(0x8d);	//set Charge Pump enable/disable
    writeI2CCommand(0x14);	//set(0x10) disable

    clearOLEDDisplay();
    writeI2CCommand(0xaf);	//turn on oled panel

}

/* Repeated display function called every loop */
void screenLoop()
{
    drawLogo();
}


void drawLogo()
{
    writeI2CCommand(0xA6);  //Set Normal Display
    writeI2CCommand(0xAE);  //Display off
    writeI2CCommand(0x20);  //Memory addressing mode
    writeI2CCommand(0x00);  //Horizontal Addressing mode
    writeI2CCommand(0xA0);  //Display remap to addr 0
    setOLEDCursorLocation(0,0); //Go to top left area

    for(int i=0;i<currentLogo->size;i++)
    {
        writeI2CByte(currentLogo->bytes[i]);
    }

    writeI2CCommand(0xAF);
}

void changeLogo(int logoNum)
{
    currentLogo = logos + logoNum;
}

logo createLogo(unsigned char * bytes, int size)
{
    logo newLogo;
    newLogo.bytes = bytes;
    newLogo.size = size;

    return newLogo;
}

void displayGraph()
{
    clearOLEDDisplay();    

    writeI2CCommand(0xA6);  //Set Normal Display
    writeI2CCommand(0x20);  //Memory addressing mode
    writeI2CCommand(0x00);  //Horizontal Addressing mode

    //Draw y-axis
    for(int i = 1; i < 7; i++)
    {
        setOLEDCursorLocation(i, 1);
        writeI2CByte(0xFF);
    }

    writeI2CCommand(0xA6);  //Set Normal Display
    writeI2CCommand(0x20);  //Memory addressing mode
    writeI2CCommand(0x02);  //Vertical Addressing mode

    //Draw x-axis
    for(int i = 1; i < 7; i++)
    {
        setOLEDCursorLocation(1, i);
        writeI2CByte(0xFF);
    }

    setOLEDCursorLocation(7, 3);

    //Label x-axis
    writeI2CCommand(0x20);
    writeI2CCommand(0x02);
    writeOLEDString((unsigned char *)"time");
}





/* Write an I2C command to the screen*/
void writeI2CCommand(unsigned char command)
{
    beginTransmission(SCREEN_I2C_ADDRESS);
    write(0x80); //Command mem address
    write(command);
    endTransmission();
}

/* Write an I2C command to the screen*/
void writeI2CByte(unsigned char data)
{
    beginTransmission(SCREEN_I2C_ADDRESS);
    write(0x40); //Byte mem address
    write(data);
    endTransmission();
}

/* turn on a single pixel */
void pixelOn(unsigned char row, unsigned char column)
{
    setOLEDCursorLocation(row, column);
    writeI2CByte(1 << row%8);
}

/* Send commands to clear OLED */
void clearOLEDDisplay()
{
    //Iterate through page rows
    for(int page = 0; page < 8; page++)
    {
        //Goto page and clear line
        setOLEDCursorLocation(page, 0);
        
        for(int col = 0; col < 128; col++)
        {
            writeI2CByte(0);
        }
    }
}

/* Set the x, y location to write a pixel to the OLED screen */
void setOLEDCursorLocation(unsigned char row, unsigned char column)
{
    writeI2CCommand(0xB0 + row); //Set page address
    writeI2CCommand((8 * column) & 0x0F); //Set column address least significant bits
    writeI2CCommand(((8 * column) >> 4) & 0x0F); //Set column address most significant bits
}

/* Display a string on the OLED string */
void writeOLEDString(unsigned char * str)
{
    //Iterate through string
    while(*str)
    {
        for(int i = 0; i < 8; i++)
            writeI2CByte(screenFont[*str - 0x20][i]);

        str++;
    }
}


