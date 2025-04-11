#include "LCD_interface.h"
#include "LCD_private.h"
#include "LCD_cfg.h"
#include "util/delay.h"

void LCD_write_command(uint8 command){
	DIO_writepin(RS,LOW);
	_delay_ms(1);
#if(LCD_MODE==MODE_8_BITS)
	DIO_writeport(LCD_PORT,command);

	DIO_writepin(E,HIGH);
	_delay_ms(1);

	DIO_writepin(E,LOW);
	_delay_ms(3);
#elif(LCD_MODE==MODE_4_BITS)

	DIO_writepin(E,HIGH);
	_delay_ms(1);

DIO_writepin(LCD_DB7,GET_BIT(command,7));
DIO_writepin(LCD_DB6,GET_BIT(command,6));
DIO_writepin(LCD_DB5,GET_BIT(command,5));
DIO_writepin(LCD_DB4,GET_BIT(command,4));
    _delay_ms(1);

    DIO_writepin(E,LOW);
	_delay_ms(1);

	DIO_writepin(E,HIGH);
	_delay_ms(1);

	DIO_writepin(LCD_DB7,GET_BIT(command,3));
	DIO_writepin(LCD_DB6,GET_BIT(command,2));
	DIO_writepin(LCD_DB5,GET_BIT(command,1));
	DIO_writepin(LCD_DB4,GET_BIT(command,0));
		_delay_ms(1);

		DIO_writepin(E,LOW);
		_delay_ms(1);



#endif
}

void LCD_init(void){
#if(LCD_MODE==MODE_8_BITS)
	_delay_ms(31);
	LCD_write_command(0x38);

	_delay_ms(1);
	LCD_write_command(0x0C);

	_delay_ms(1);
	LCD_write_command(0x01);

	_delay_ms(2);
#elif(LCD_MODE==MODE_4_BITS)
	_delay_ms(31);
		LCD_write_command(0x38);
		_delay_ms(1);

		LCD_write_command(0x32);
		_delay_ms(1);

		LCD_write_command(0x28);
		_delay_ms(1);

		LCD_write_command(0x01);
		_delay_ms(1);

		LCD_write_command(0x0C);
		_delay_ms(1);
#endif
}

void LCD_write_charater(uint8 charater){
	DIO_writepin(RS,HIGH);
	_delay_ms(1);
#if(LCD_MODE==MODE_8_BITS)

	DIO_writeport(LCD_PORT,charater);

	DIO_writepin(E,HIGH);
	_delay_ms(1);
	DIO_writepin(E,LOW);
	_delay_ms(3);
#elif(LCD_MODE==MODE_4_BITS)

	DIO_writepin(E,HIGH);
	_delay_ms(1);

	DIO_writepin(LCD_DB7,GET_BIT(charater,7));
	DIO_writepin(LCD_DB6,GET_BIT(charater,6));
	DIO_writepin(LCD_DB5,GET_BIT(charater,5));
	DIO_writepin(LCD_DB4,GET_BIT(charater,4));

	DIO_writepin(E,LOW);
		_delay_ms(1);

	DIO_writepin(E,HIGH);
	_delay_ms(1);

	DIO_writepin(LCD_DB7,GET_BIT(charater,3));
	DIO_writepin(LCD_DB6,GET_BIT(charater,2));
	DIO_writepin(LCD_DB5,GET_BIT(charater,1));
	DIO_writepin(LCD_DB4,GET_BIT(charater,0));
	_delay_ms(1);

	DIO_writepin(E,LOW);
	_delay_ms(1);
#endif
}
void LCD_write_string(uint8 *str){
	//DIO_writepin(RS,HIGH);
	//_delay_ms(1);
	for(int i=0;str[i]!='\0';i++){
		LCD_write_charater(str[i]);
	}
}

void LCD_write_number(sint32 number){
	uint8 num_digits[10];
	uint8 i=0;
	while(number!=0){
		num_digits[i++]=number%10+'0';
		number/=10;
	}

    for(int j=i-1;j>=0;j--){
	     LCD_write_charater(num_digits[j]);
	}
}

void LCD_goto(uint8 row,uint8 col){
	uint8 address=0x80;
	if(row==0){
		LCD_write_command(address+col);
	}else {
		LCD_write_command(address+col+0x40);
	}
}


void LCD_write_string_goto(uint8 *str,uint8 row,uint8 col){
	LCD_goto(row,col);
	LCD_write_string(str);
}

void LCD_clear(){
LCD_write_command(0X01);
}
