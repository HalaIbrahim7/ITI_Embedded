/*
 * LCD_interface.h
 *
 *  Created on: Feb 14, 2025
 *      Author: DELL
 */

#ifndef HAL_LCD_LCD_INTERFACE_H_
#define HAL_LCD_LCD_INTERFACE_H_


#include "std_types.h"
#include "utils.h"
#include "DIO_interface.h"
#include "util/delay.h"

extern void LCD_write_charater(uint8 charater);

extern void LCD_init(void);

extern void LCD_write_string(uint8 *arr);

extern void LCD_write_number(sint32 number);

extern void LCD_goto(uint8 row,uint8 col);

extern void LCD_write_string_goto(uint8 *str,uint8 row,uint8 col);

extern void LCD_clear(void);
#endif /* HAL_LCD_LCD_INTERFACE_H_ */
