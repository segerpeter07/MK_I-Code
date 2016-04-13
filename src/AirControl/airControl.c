#define F_CPU (1000000L)
#include "can_api.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

int main(void){
    DDRB |= _BV(PB5) | _BV(PB6) | _BV(PB7);
    DDRB |= _BV(PB0);

    for(;;){
        PORTB ^= _BV(PB5) | _BV(PB6) | _BV(PB7) | _BV(PB0);
        _delay_ms(1000);
    }
}