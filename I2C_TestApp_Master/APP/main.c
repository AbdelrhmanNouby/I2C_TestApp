/*
 * I2C_TestApp.c
 *
 * Created: 1/25/2022 
 * Author : Abdelrhman Elsawy
 */ 

#include "../MCAL/I2C/I2C.h"
#include "../MCAL/TIMER0/TIMER0.h"

int main(void)
{
	I2C_Init();
	TIMER0_u8Init();
    I2C_SendStartCondition();
    I2C_SendSlaveAddress(I2C_SLAVE1_ADDRESS,WRITE_OP);
	while (1) 
    {
		I2C_SendByte(0x50);
		//I2C_SendStopCondition();
		//TIMER0_u8PollingDelay_ms(1000);	
    }
}

