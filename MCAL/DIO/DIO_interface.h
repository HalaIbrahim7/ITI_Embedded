/*
 * DIO_interface.h
 *
 *  Created on: Feb 8, 2025
 *      Author: DELL
 */

#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_


#include "std_types.h"
#include "mem_map.h"
#include "utils.h"

typedef enum{
	PA=0,
	PB,
	PC,
	PD
}DioPort_Type;


typedef enum{
	    PINA0=0,
		PINA1,
		PINA2,
		PINA3,
		PINA4,
		PINA5,
		PINA6,
		PINA7,
		PINB0,
		PINB1,
		PINB2,
		PINB3,
		PINB4,
		PINB5,
		PINB6,
		PINB7,
		PINC0,
		PINC1,
		PINC2,
		PINC3,
		PINC4,
		PINC5,
		PINC6,
		PINC7,
		PIND0,
		PIND1,
		PIND2,
		PIND3,
		PIND4,
		PIND5,
		PIND6,
		PIND7
}DioPin_Type;

typedef enum{
	INPUT_PULLUP=0,
	INPUT_FLOATING,
	OUTPUT

}DioDirection_Type;

typedef enum{
	LOW=0,
	HIGH

}DioValue_Type;

extern void DIO_initpin(DioPin_Type pin,DioDirection_Type direction);
extern void DIO_writepin(DioPin_Type pin,DioValue_Type value);
extern DioValue_Type DIO_readpin(DioPin_Type pin);
extern void DIO_init(void);
extern void DIO_writeport(DioPort_Type port,DioValue_Type value);
#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
