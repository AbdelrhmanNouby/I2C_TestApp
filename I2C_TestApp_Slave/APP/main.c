/*
 * I2C_TestApp.c
 *
 * Created: 1/25/2022 
 * Author : Abdelrhman Elsawy
 */ 

#include "../MCAL/I2C/I2C.h"
#include "../MCAL/TIMER0/TIMER0.h"
#include "../MCAL/DIO/DIO.h"

int main(void)
{
	I2C_Init();
	TIMER0_u8Init();
	DIO_u8SetPortDirection(PORTB,OUTPUTPORT);
	uint8_t data ;
    while (1) 
    {
        I2C_ReceiveDataWithAck(&data);
		DIO_u8SetPortData(PORTB,data);
    }
}

