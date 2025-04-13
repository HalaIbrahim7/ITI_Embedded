/*
 * mem_map.h
 *
 *  Created on: Feb 8, 2025
 *      Author: DELL
 */
#include "std_types.h"

#ifndef LIB_MEM_MAP_H_
#define LIB_MEM_MAP_H_

//DDR
#define DDRA  *( (volatile uint8 * )(0x3A))
#define DDRB  *( (volatile uint8 * )(0x37))
#define DDRC  *( (volatile uint8 * )(0x34))
#define DDRD  *( (volatile uint8 * )(0x31))

//PORT
#define PORTA  *( (volatile uint8 * )(0x3B))
#define PORTB  *( (volatile uint8 * )(0x38))
#define PORTC  *( (volatile uint8 * )(0x35))
#define PORTD  *( (volatile uint8 * )(0x32))
 //PIN
#define PINA  *( (volatile uint8 * )(0x39))
#define PINB  *( (volatile uint8 * )(0x36))
#define PINC  *( (volatile uint8 * )(0x33))
#define PIND  *( (volatile uint8 * )(0x30))

//INTERRUPT
#define SREG *( (volatile uint8 * )(0x5F))
#define GICR *( (volatile uint8 * )(0x5B))
#define GIFR *( (volatile uint8 * )(0x5A))
#define MCUCR *( (volatile uint8 * )(0x55))
#define MCUCSR *( (volatile uint8 * )(0x54))

#endif /* LIB_MEM_MAP_H_ */
