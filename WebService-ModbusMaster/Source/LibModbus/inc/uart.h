/*
 * uart_V2.h
 *
 *  Created on: 08/05/2015
 *      Author: SONY-VAIO
 */

#ifndef UART_V2_H_
#define UART_V2_H_


#define IER_RBR		0x01
#define IER_THRE	0x02
#define IER_RLS		0x04

#define IIR_PEND	0x01
#define IIR_RLS		0x03
#define IIR_RDA		0x02
#define IIR_CTI		0x06
#define IIR_THRE	0x01

#define LSR_RDR		0x01
#define LSR_OE		0x02
#define LSR_PE		0x04
#define LSR_FE		0x08
#define LSR_BI		0x10
#define LSR_THRE	0x20
#define LSR_TEMT	0x40
#define LSR_RXFE	0x80

//#define BUFSIZE		512 //0x40
#define BUFSIZE 		256

#include "lpc17xx_uart.h"
#include "lpc17xx_pinsel.h"

void UART1_IRQHandler( void );

void UART3_IRQHandler( void );

void mb_init_uart(uint8_t trasporte,UART_CFG_Type UARTConfigStruct);


void UARTSend( uint8_t trasporte, uint8_t *BufferPtr, uint32_t Length );

uint16_t UARTScan (uint8_t trasporte, int8_t *Rx , uint16_t timeout);


#endif /* UART_V2_H_ */
