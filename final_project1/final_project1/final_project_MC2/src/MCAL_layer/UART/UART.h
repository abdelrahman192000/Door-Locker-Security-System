/*
 * UART.h
 *
 *  Created on: Oct 30, 2022
 *      Author: abdelrahman adel
 */
#include "../../libirary/std_types.h"
#include "../../libirary/common_macros.h"
#ifndef UART_H_
#define UART_H_

typedef enum {
	disabled=0,even=2,odd=3
}parity_type;

typedef enum {
	one_bit,two_bit
}stop_bit;

typedef enum {
	five,six,seven,eight
}char_size;

typedef struct {
	char_size no_of_bit_data;
	parity_type parity;
	stop_bit stopbit;
	uint32 baud_rate;
}UART_config;

uint8 UART_receive_byte();
void UART_send_byte(uint8 byte);
void UART_init(UART_config * config);
void UART_send_string(uint8 *str);
void UART_receiveString(uint8 *Str);

#endif /* UART_H_ */
