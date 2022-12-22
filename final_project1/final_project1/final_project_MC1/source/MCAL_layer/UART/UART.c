/*
 * UART.c
 *
 *  Created on: Oct 30, 2022
 *      Author: abdelrahman adel
 */

#include "UART.h"
#include "avr/io.h"
#include "../../libirary/std_types.h"
#include "../../libirary/common_macros.h" /* To use the macros like SET_BIT */
#include "avr/interrupt.h"

void UART_init(UART_config * config){
	uint16 ubrr_value = 0;
	ubrr_value = (uint16)(((F_CPU / (config->baud_rate * 8UL))) - 1);
	UCSRA =(1<<U2X);
	UCSRB=(1<<TXEN)|(1<<RXEN);
	UCSRC=(1<<URSEL)|((config->no_of_bit_data)<<1)|((config->stopbit)<<3)|((config->parity)<<4);
	UBRRH=(ubrr_value>>8);
	UBRRL=(ubrr_value);

}


void UART_send_byte(uint8 byte){
	while(BIT_IS_CLEAR(UCSRA,UDRE)){}
	UDR=byte;
}

uint8 UART_receive_byte(){
	while(BIT_IS_CLEAR(UCSRA,RXC)){}
	return UDR;
}

void UART_send_string(uint8 *str){

	for(int i=0;str[i]!='\0';i++){
		UART_send_byte(str[i]);
	}

}

void UART_receiveString(uint8 *Str)
	{
		uint8 i = 0;

		/* Receive the first byte */
		Str[i] = UART_receive_byte();

		/* Receive the whole string until the '#' */
		while(Str[i] != '#')
		{
			i++;
			Str[i] = UART_receive_byte();
		}

		/* After receiving the whole string plus the '#', replace the '#' with '\0' */
		Str[i] = '\0';
	}



