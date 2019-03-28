#ifndef SCREEN_H
#define SCREEN_H

#include "i2c.h"

#define NUM_QUERIES 100
#define SCREEN_I2C_ADDRESS 0x3D

int audioQueries[NUM_QUERIES];

void initScreen();
void displayGraph();

//Internal commands
void writeI2CCommand(int command);
void writeI2CByte(int data);
void clearOLEDDisplay();
void setOLEDCursorLocation(int row, int column);

#endif