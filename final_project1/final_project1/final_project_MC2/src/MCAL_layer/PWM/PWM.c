/*
 * Timer0.c
 *
 *  Created on: Oct 30, 2022
 *      Author: abdelrahman adel
 */
#include "PWM.h"

#include <avr/io.h>
#include "../../libirary/std_types.h"


void PWM_Timer0_init(){

	OCR0=0;
	DDRB  = DDRB | (1<<PB3);
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<CS01)|(1<<COM01);
}

void PWM_Timer0_Start(uint8 duty_cycle){

	OCR0 = (uint8)(((uint32)(duty_cycle*255))/100);

}
