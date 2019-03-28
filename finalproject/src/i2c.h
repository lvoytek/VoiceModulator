// Authors: Nadine Najdawi, Jacob Bowles, Jessica Sofka, Lena Voytek    
// Net IDs: nadinealnajdawi, bowlesj, jsofka, dvoytek      
// Date: 8 April 2019 
// Project Name: Lab 5

#ifndef I2C_H
#define I2C_H

#include <avr/io.h>
#include "timer.h"

void initI2C();

void beginTransmission(int address);

void endTransmission();

void write(int data);

void requestFrom(int deviceAddress, int memAddress);

bool available();

int read();

int i2cStatus();

void continueRead();

void endRead();

#endif