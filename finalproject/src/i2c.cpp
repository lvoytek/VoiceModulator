// Authors: Nadine Najdawi, Jacob Bowles, Jessica Sofka, Lena Voytek    
// Net IDs: nadinealnajdawi, bowlesj, jsofka, dvoytek      
// Date: May 2019
// Project Name: Final

#include "i2c.h"

/* Initialize the SCL and SDA I2C pins */
void initI2C()
{
    TWSR |= (1 << TWPS0);
    TWSR &= ~(1 << TWPS1); // prescaler = 1
    TWBR = 0xC6; // SCL clock scale for 40 kHz
                    //100 kHz - 0x48

    TWCR |= (1 << TWINT | 1 << TWEN); // enable two wire interface
}


/* Send initial address to notify slave at given address that
   a transmission will be sent */
void beginTransmission(int address)
{
    //Do start condition
    TWCR = (1<<TWINT) | (1<<TWSTA) | (1<<TWEN);

    //Send slave i2c address
    while (!(TWCR & (1<<TWINT)));  //wait while flag is low
    TWDR = (address << 1); //load i2c address and write bit (0)
    TWCR = (1<<TWINT)|(1<<TWEN);  //clear flag and enable TWI
}

/* Notify wire that transmission is complete with stop bit*/
void endTransmission()
{
    while (!(TWCR & (1<<TWINT)));
    TWCR = (1<<TWINT)|(1<<TWEN)|(1<< TWSTO); //send stop condition
}

/* Send data or memory address to the current slave */
void write(int data)
{
    //Send write data
    while (!(TWCR & (1<<TWINT))); //wait for flag
    TWDR = data; 
    TWCR = (1<<TWINT)|(1<<TWEN);  //clear flag and enable TWI
}

/* Request data from a given slave at a given memory location */
void requestFrom(int deviceAddress, int memAddress)
{
    //Send memory address to read
    while (!(TWCR & (1<<TWINT))); //wait for flag
    TWDR = memAddress; 
    TWCR = (1<<TWINT)|(1<<TWEN);  //clear flag and enable TWI

    //Repeated start
    while (!(TWCR & (1<<TWINT)));
    TWCR = (1<<TWINT)|(1<<TWEN)|(1<< TWSTA); //send repeat start

    //Send slave address + read bit
    while (!(TWCR & (1<<TWINT)));  //wait while flag is low
    TWDR = (deviceAddress << 1) | 1; //load i2c address and read bit (1)
    TWCR = (1<<TWINT)|(1<<TWEN);  //clear flag and enable TWI
}

/* Check if the current slave is available */
bool available()
{
    return (~TWSR & 0xF8);
}

/* Read data from the current slave */
int read()
{
    while (!(TWCR & (1<<TWINT)));  //wait while flag is low
    return TWDR; //read and return input data
}

/* Send an ACK to continue a data read */
void continueRead()
{
    TWCR = ((1 << TWINT) | (1 << TWEN) | (1 << TWEA)); // with ACK set
}

/* Send a NACK to stop data read */
void endRead()
{
    TWCR = ((1 << TWINT) | (1 << TWEN)); //Not ACK
}

/* Get the return status of a command */
int i2cStatus()
{
    return (TWSR & 0b11111000);
}