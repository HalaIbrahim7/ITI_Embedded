/*
 * main.c
 *
 *  Created on: Feb 8, 2025
 *      Author: DELL
 */

#include "DIO_interface.h"
#include "util/delay.h"
#include "LCD_interface.h"
#include "LCD_private.h"



int main(){
	/*uint8 x=0;

    DIO_initpin(PA,PIN0,OUTPUT);
	DIO_writepin(PA,PIN0,HIGH);

	DIO_initpin(PA,PIN1,INPUT_PULLUP);
	x=DIO_readpin(PA,PIN1);*/
	DIO_init();
	LCD_init();
	//LCD_goto(1,2);
	LCD_write_charater('A');

	while(1){

	}



	return 0;
}


