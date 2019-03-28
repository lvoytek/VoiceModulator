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
    for(int i = 0; i < NUM_QUERIES; i++)
        audioQueries[i] = 0;

    initI2C();

    //Initialize screen via i2c
    /*writeI2CCommand(0xae); //turn off oled panel 
    writeI2CCommand(0x00); //set low column address 
    writeI2CCommand(0x10); //set high column address 
    writeI2CCommand(0x40); //set start line address 
    writeI2CCommand(0x81); //set contrast control register 
    writeI2CCommand(0xcf);  
    writeI2CCommand(0xa1); //set segment re-map 95 to 0 
    writeI2CCommand(0xa6); //set normal display 
    writeI2CCommand(0xa8); //set multiplex ratio(1 to 64) 
    writeI2CCommand(0x3f); //1/64 duty 
    writeI2CCommand(0xd3); //set display offset 
    writeI2CCommand(0x00); //not offset 
    writeI2CCommand(0xd5); //set display clock divide ratio/oscillator frequency 
    writeI2CCommand(0x80); //set divide ratio 
    writeI2CCommand(0xd9); //set pre-charge period 
    writeI2CCommand(0xf1);  
    writeI2CCommand(0xda); //set com pins hardware configuration 
    writeI2CCommand(0x12);  
    writeI2CCommand(0xdb); //set vcomh 
    writeI2CCommand(0x40);  
    writeI2CCommand(0x8d); //set Charge Pump enable/disable 
    writeI2CCommand(0x14); //set(0x10) disable 
    writeI2CCommand(0xaf); //turn on oled panel*/

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
