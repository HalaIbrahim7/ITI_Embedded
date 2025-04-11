/*
 * mem_map.h
 *
 *  Created on: Feb 8, 2025
 *      Author: DELL
 */
#include "std_types.h"

#ifndef LIB_MEM_MAP_H_
#define LIB_MEM_MAP_H_

#define DDRA  *( (volatile uint8 * )(0x3A))
#define DDRB  *( (volatile uint8 * )(0x37))
#define DDRC  *( (volatile uint8 * )(0x34))
#define DDRD  *( (volatile uint8 * )(0x31))

#define PORTA  *( (volatile uint8 * )(0x3B))
#define PORTB  *( (volatile uint8 * )(0x38))
#define PORTC  *( (volatile uint8 * )(0x35))
#define PORTD  *( (volatile uint8 * )(0x32))

#define PINA  *( (volatile uint8 * )(0x39))
#define PINB  *( (volatile uint8 * )(0x36))
#define PINC  *( (volatile uint8 * )(0x33))
#define PIND  *( (volatile uint8 * )(0x30))


#endif /* LIB_MEM_MAP_H_ */
