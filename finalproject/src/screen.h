#ifndef SCREEN_H
#define SCREEN_H

#include "i2c.h"

#define NUM_QUERIES 100
#define SCREEN_I2C_ADDRESS 0x3D

void initScreen();
void screenLoop();

void displayGraph();

//Internal commands
void writeI2CCommand(unsigned char command);
void writeI2CByte(unsigned char data);
void pixelOn(unsigned char row, unsigned char column);
void clearOLEDDisplay();
void setOLEDCursorLocation(unsigned char row, unsigned char column);
void writeOLEDString(unsigned char * str);

#endif