/******************************************************************************
*  File name:		buzzer.c
*  Created on: Oct 30, 2022
 *      Author: abdelrahman adel
*******************************************************************************/

/*******************************************************************************
 *                        		Inclusions                                     *
 *******************************************************************************/
#include "buzzer.h"

/*******************************************************************************
*                      Functions Definitions                                   *
*******************************************************************************/

void Buzzer_init(void)
{
	GPIO_setupPinDirection(buzzer_port, buzzer_pin, PIN_OUTPUT);
}

void Buzzer_on(void)
{
	GPIO_writePin(buzzer_port, buzzer_pin, LOGIC_HIGH);
}

void Buzzer_off(void)
{
	GPIO_writePin(buzzer_port, buzzer_pin, LOGIC_LOW);
}
