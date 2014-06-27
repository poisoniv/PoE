#include "io430.h"

int main( void )
{
	// Stop watchdog timer to prevent time out reset
	WDTCTL = WDTPW + WDTHOLD;
	
	// Disable the GPIO power-on default high-impedance mode
	// to activate previously configured port settings
	PM5CTL0 &= ~LOCKLPM5;

	// Configure GPIO
	P1DIR = 0x01; 
	P1OUT = 0;                 
					   
	P4DIR = 0x40; 
	P4OUT = 0;                

	while(1)
	{
		P1OUT = 0x01;                // Toggle LED
		P4OUT = 0x00; 
		__delay_cycles(1000000);
		P4OUT = 0x40;                // Toggle LED
		P1OUT = 0x00;  
		__delay_cycles(1000000);
	}

}
