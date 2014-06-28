#include  "msp430.h"
#include  "macros.h"
#include  "functions.h"

//----------------------------------------------------
// LED Control Functions
//----------------------------------------------------

void LED1_ON(void)
{
	P4OUT = 0x40;
}

void LED1_OFF(void)
{
	P4OUT &= 0xBF;
}

void LED1_TOGGLE(void)
{
	P4OUT ^= 1 << 6;
}

int LED1_CHECK(void)
{
	if(P4OUT & 0x40)return 1;
	else return 0;
}

void LED2_ON(void)
{
	P1OUT = 0x01;
}

void LED2_OFF(void)
{
	P1OUT &= 0xFE;
}

void LED2_TOGGLE(void)
{
	P1OUT ^= 0x01;
}

int LED2_CHECK(void)
{
	if(P1OUT & 0x01)return 1;
	else return 0;
}
