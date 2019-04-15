// Authors: Nadine Najdawi, Jacob Bowles, Jessica Sofka, Lena Voytek    
// Net IDs: nadinealnajdawi, bowlesj, jsofka, dvoytek      
// Date: May 2019      
// Assignment: Final Project
// JACOB DOES THIS

#include "numPad.h"

#include "NUMPAD.h"
#include <Keypad.h>
#include <Key.h>

const byte ROWS = 4; // Four rows
const byte COLS = 4; // Three columns
// Define the Keymap
char hold;//data of key pressed
void initNumPad(){//startup
  init();
setup();
}
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte rowPins[ROWS] = {  22,24,26,28};//left most wire on keypad
// Connect keypad COL0, COL1 and COL2 to these Arduino pins.
byte colPins[COLS] = { 30,32,34,36 }; 

// Create the Keypad
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );



void setup()
{
  
  Serial.begin(9600);
}

void loop()
{
  char key = kpd.getKey();
  if(key)  // Check for a valid key.
  {
   
      //  Serial.println(key);
    hold=key;
  }
}
int getNumpadValue(){//return key
int tomain;
switch (hold){//convert to int
  case '1':
tomain=1;
break;
case '2':
tomain=2;
break;
case '3':
tomain=3;
break;
case'4':
tomain=4;
break;
case '5':
tomain=5;
break;
case '6':
tomain=6;
break;
case '7':
tomain=7;
break;
case'8':
tomain=8;
break;
case '9':
tomain=9;
break;
case '0':
tomain=0;
break;
}
return tomain;//takes data to main
}
