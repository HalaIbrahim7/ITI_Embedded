/*
 * KEYPAD.c
 *
 *  Created on: Feb 20, 2025
 *      Author: DELL
 */

#include "KEYPAD.h"


void keypad_init(void){
	for(uint8 i=0;i<NUMBER_OF_ROWS;i++){
			DIO_writepin(ROW1+i,HIGH);
		}
}

uint8 Keypad_getkey(void){

	uint8 key;
		for(uint8 i=0;i<NUMBER_OF_ROWS;i++){
			DIO_writepin(ROW1+i,LOW);
			for(uint8 j=0;j<NUMBER_OF_COLS;j++){
				if(DIO_readpin(COL1+j)==LOW)
			   key= arr[i][j];
				while(DIO_readpin(COL1+j)==LOW);
			}
			DIO_writepin(ROW1+i,HIGH);
		}
		return key;

}

