#include  "msp430.h"
#include  "macros.h"
#include  "functions.h"

//------------------------------------------------------------------------------
// Port Configurations
//------------------------------------------------------------------------------
void initialize_ports(void)
{
  initialize_port1();
  initialize_port4();
}

void initialize_port1(void) 
{
	int pd1_0,pd1_1,pd1_2,pd1_3,pd1_4,pd1_5,pd1_6,pd1_7;
        int p1_0,p1_1,p1_2,p1_3,p1_4,p1_5,p1_6,p1_7;
  
        P1DIR = 0x00;
//	P1IN  = 0x00;
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
	P1DIR = (P1DIR << 1) | pd1_6;
	P1DIR = (P1DIR << 1) | pd1_5;
	P1DIR = (P1DIR << 1) | pd1_4;
	P1DIR = (P1DIR << 1) | pd1_3;
	P1DIR = (P1DIR << 1) | pd1_2;
	P1DIR = (P1DIR << 1) | pd1_1;
	P1DIR = (P1DIR << 1) | pd1_0;
	
	p1_0 = PORT_LOW; //LED2
	p1_1 = PORT_LOW;
	p1_2 = PORT_LOW;
	p1_3 = PORT_LOW;
	p1_4 = PORT_LOW;
	p1_5 = PORT_LOW;
	p1_6 = PORT_LOW;
	p1_7 = PORT_LOW;
	
	P1OUT |= p1_7;
	P1OUT = (P1OUT << 1) | p1_6;
	P1OUT = (P1OUT << 1) | p1_5;
	P1OUT = (P1OUT << 1) | p1_4;
	P1OUT = (P1OUT << 1) | p1_3;
	P1OUT = (P1OUT << 1) | p1_2;
	P1OUT = (P1OUT << 1) | p1_1;
	P1OUT = (P1OUT << 1) | p1_0;
}

void initialize_port4(void) 
{
	int pd4_0,pd4_1,pd4_2,pd4_3,pd4_4,pd4_5,pd4_6,pd4_7;
        int p4_0,p4_1,p4_2,p4_3,p4_4,p4_5,p4_6,p4_7;
  
        P4DIR = 0x00;
//	P4IN  = 0x00;
	P4OUT = 0x00;
	
	pd4_0 = PORT_OUT; //LED1
	pd4_1 = PORT_OUT;
	pd4_2 = PORT_OUT;
	pd4_3 = PORT_OUT;
	pd4_4 = PORT_OUT;
	pd4_5 = PORT_OUT;
	pd4_6 = PORT_OUT;
	pd4_7 = PORT_OUT;
		
	P4DIR |= pd4_7;
	P4DIR = (P4DIR << 1) | pd4_6;
	P4DIR = (P4DIR << 1) | pd4_5;
	P4DIR = (P4DIR << 1) | pd4_4;
	P4DIR = (P4DIR << 1) | pd4_3;
	P4DIR = (P4DIR << 1) | pd4_2;
	P4DIR = (P4DIR << 1) | pd4_1;
	P4DIR = (P4DIR << 1) | pd4_0;
	
	p4_0 = PORT_LOW; //LED2
	p4_1 = PORT_LOW;
	p4_2 = PORT_LOW;
	p4_3 = PORT_LOW;
	p4_4 = PORT_LOW;
	p4_5 = PORT_LOW;
	p4_6 = PORT_LOW;
	p4_7 = PORT_LOW;
	
	P4OUT |= p4_7;
	P4OUT = (P4OUT << 1) | p4_6;
	P4OUT = (P4OUT << 1) | p4_5;
	P4OUT = (P4OUT << 1) | p4_4;
	P4OUT = (P4OUT << 1) | p4_3;
	P4OUT = (P4OUT << 1) | p4_2;
	P4OUT = (P4OUT << 1) | p4_1;
	P4OUT = (P4OUT << 1) | p4_0;
}
