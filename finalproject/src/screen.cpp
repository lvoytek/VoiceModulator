// Authors: Nadine Najdawi, Jacob Bowles, Jessica Sofka, Lena Voytek    
// Net IDs: nadinealnajdawi, bowlesj, jsofka, dvoytek      
// Date: May 2019      
// Assignment: Final Project
// LENA DOES THIS

#include "screen.h"

/* Initialize audio data graph and run screen startup sequence */
void initScreen()
{
    //Set all query values to zero
   // for(int i = 0; i < NUM_QUERIES; i++)
   //     audioQueries[i] = 0;

    initI2C();

    writeI2CCommand(0xae);  //display off
    writeI2CCommand(0x2e);  //deactivate scrolling
    writeI2CCommand(0xa4);  //SET All pixels OFF
    delayUs(50000);
    writeI2CCommand(0x20);  //Set Memory Addressing Mode
    writeI2CCommand(0x02);  //Set Memory Addressing Mode to Page addressing mode(RESET)
    writeI2CCommand(0xa1);  //colum address 127 mapped to SEG0 (POR) ** wires at top of board
    writeI2CCommand(0xC8);  // Scan from Left to Right               ** wires at top
    writeI2CCommand(0xa6);  // Set WHITE chars on BLACK backround
    writeI2CCommand(0x81);  // Setup CONTRAST CONTROL, following byte is the contrast Value
    writeI2CCommand(0xaf);  // contrast value between 1 ( == dull) to 256 ( == bright)
    delayUs(20000);
    writeI2CCommand(0xaf);  //display on
    delayUs(30000);

    clearOLEDDisplay();    
    delayUs(50000);

}



void displayGraph()
{
    
}





/* Write an I2C command to the screen*/
void writeI2CCommand(int command)
{
    beginTransmission(SCREEN_I2C_ADDRESS);
    write(0x80); //Command mem address
    write(command);
    endTransmission();
}

/* Write an I2C command to the screen*/
void writeI2CByte(int data)
{
    beginTransmission(SCREEN_I2C_ADDRESS);
    write(0x40); //Byte mem address
    write(data);
    endTransmission();
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
void setOLEDCursorLocation(int row, int column)
{
    writeI2CCommand(0xB0 + row); //Set page address
    writeI2CCommand((8 * column) & 0x0F); //Set column address least significant bits
    writeI2CCommand(((8 * column) >> 4) & 0x0F); //Set column address most significant bits
}
