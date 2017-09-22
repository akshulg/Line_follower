/*
 * Line_follower.c
 *
 * Created: 9/22/2017 7:01:41 PM
 *  Author: Akshul
 */ 

#define F_CPU 12000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB=0XFF;
	DDRC=0X00;
    while(1)
    {
       int x=PINC & 0b00000101;

       if(x==0b00000101)
       PORTB=0b00001010;

       else if(x==0b00000001)
       PORTB=0b00000110;

       else if(x==0b00000100)
       PORTB=0b00001001;

       else if(x==0b00000000)
       PORTB=0X00;
    }
}