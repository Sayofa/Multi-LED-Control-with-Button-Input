/*
 * Multi-LED Control with Button Input.c
 *
 * Created: 11/8/2024 5:19:03 PM
 * Author : 20155
 */ 

#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 16000000UL


int main(void)
{
	
	DDRB |=  (1<<PORTB0);
	DDRB &= ~(1<<PORTB1);
	PORTB |= (1 << PORTB1);
	
    /* Replace with your application code */
    while (1) 
    {
		if (!(PINB & (1<< PORTB1)))
		{
			PORTB |= (1 << PORTB0);
		}
		else
		{
			PORTB &= ~(1 << PORTB0);
		}
		
		_delay_ms(50);
    }
	return 0;
}

