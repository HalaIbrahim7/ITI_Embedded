/*
 * KEYPAD.h
 *
 *  Created on: Feb 20, 2025
 *      Author: DELL
 */

#ifndef HAL_KEYPAD_KEYPAD_H_
#define HAL_KEYPAD_KEYPAD_H_

#include "mem_map.h"
#include "std_types.h"
#include "utils.h"
#include "DIO_interface.h"

#define NUMBER_OF_ROWS 4
#define NUMBER_OF_COLS 4

#define ROW1 PINC0
#define ROW2 PINC1
#define ROW3 PINC2
#define ROW4 PINC3

#define COL1 PIND4
#define COL2 PIND5
#define COL3 PIND6
#define COL4 PIND7

void keypad_init(void);
uint8 Keypad_getkey(void);
extern uint8 arr[NUMBER_OF_ROWS][NUMBER_OF_COLS];


#endif /* HAL_KEYPAD_KEYPAD_H_ */
