#ifndef SCREEN_H
#define SCREEN_H

#include "i2c.h"

#define NUM_QUERIES 100

int audioQueries[NUM_QUERIES];

void initScreen();
void displayGraph();

#endif