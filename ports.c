#include  "msp430.h"
#include  "macros.h"
#include  "functions.h"
//------------------------------------------------------------------------------
// Port Configurations

extern volatile unsigned char control_state[CNTL_STATE_INDEX];
// char led_smclk;

//------------------------------------------------------------------------------
void Init_Ports(void)
{
//  led_smclk = USE_LED5;
  Init_Port1();
//  Init_Port2();
//  Init_Port3(led_smclk);
  Init_Port4();
//  Init_PortJ();
}

void init_port1(void) 
{
	P1DIR = 0x00;
	P1IN  = 0x00;
	P1OUT = 0x00;
	
	pd1_0 = PORT_OUT; //LED2
	pd1_1 = PORT_OUT;
	pd1_2 = PORT_OUT;
	pd1_3 = PORT_OUT;
	pd1_4 = PORT_OUT;
	pd1_5 = PORT_OUT;
	pd1_6 = PORT_OUT;
	pd1_7 = PORT_OUT;
		
	P1DIR |= pd1_7;
	P1DIR = P1DIR << 1;
	P1DIR |= pd1_6;
	P1DIR = P1DIR << 1;
	P1DIR |= pd1_5;
	P1DIR = P1DIR << 1;
	P1DIR |= pd1_4;
	P1DIR = P1DIR << 1;
	P1DIR |= pd1_3;
	P1DIR = P1DIR << 1;
	P1DIR |= pd1_2;
	P1DIR = P1DIR << 1;
	P1DIR |= pd1_1;
	P1DIR = P1DIR << 1;
	P1DIR |= pd1_0;
	
	p1_0 = PORT_LOW; //LED2
	p1_1 = PORT_LOW;
	p1_2 = PORT_LOW;
	p1_3 = PORT_LOW;
	p1_4 = PORT_LOW;
	p1_5 = PORT_LOW;
	p1_6 = PORT_LOW;
	p1_7 = PORT_LOW;
	
	P1OUT |= p1_7;
	P1OUT = P1OUT << 1;
	P1OUT |= p1_6;
	P1OUT = P1OUT << 1;
	P1OUT |= p1_5;
	P1OUT = P1OUT << 1;
	P1OUT |= p1_4;
	P1OUT = P1OUT << 1;
	P1OUT |= p1_3;
	P1OUT = P1OUT << 1;
	P1OUT |= p1_2;
	P1OUT = P1OUT << 1;
	P1OUT |= p1_1;
	P1OUT = P1OUT << 1;
	P1OUT |= p1_0;
}

void init_port1(void) 
{
	P4DIR = 0x00;
	P4IN  = 0x00;
	P4OUT = 0x00;
	
	pd4_0 = PORT_OUT;
	pd4_1 = PORT_OUT;
	pd4_2 = PORT_OUT;
	pd4_3 = PORT_OUT;
	pd4_4 = PORT_OUT;
	pd4_5 = PORT_OUT;
	pd4_6 = PORT_OUT; //LED1
	pd4_7 = PORT_OUT;
		
	P4DIR |= pd4_7;
	P4DIR = P4DIR << 1;
	P4DIR |= pd4_6;
	P4DIR = P4DIR << 1;
	P4DIR |= pd4_5;
	P4DIR = P4DIR << 1;
	P4DIR |= pd4_4;
	P4DIR = P4DIR << 1;
	P4DIR |= pd4_3;
	P4DIR = P4DIR << 1;
	P4DIR |= pd4_2;
	P4DIR = P4DIR << 1;
	P4DIR |= pd4_1;
	P4DIR = P4DIR << 1;
	P4DIR |= pd4_0;
	
	p4_0 = PORT_LOW;
	p4_1 = PORT_LOW;
	p4_2 = PORT_LOW;
	p4_3 = PORT_LOW;
	p4_4 = PORT_LOW;
	p4_5 = PORT_LOW;
	p4_6 = PORT_LOW; //LED1
	p4_7 = PORT_LOW;
	
	P4OUT |= p4_7;
	P4OUT = P4OUT << 1;
	P4OUT |= p4_6;
	P4OUT = P4OUT << 1;
	P4OUT |= p4_5;
	P4OUT = P4OUT << 1;
	P4OUT |= p4_4;
	P4OUT = P4OUT << 1;
	P4OUT |= p4_3;
	P4OUT = P4OUT << 1;
	P4OUT |= p4_2;
	P4OUT = P4OUT << 1;
	P4OUT |= p4_1;
	P4OUT = P4OUT << 1;
	P4OUT |= p4_0;
}












