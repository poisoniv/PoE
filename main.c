#include "io430.h"
#include  "macros.h"
#include  "functions.h"

int main( void )
{
  initialize();
  
  LED1_ON();
  LED2_OFF();
  
  while(TRUE)
  {
    LED1_TOGGLE();
    LED2_TOGGLE();
    __delay_cycles(1000000);    
  }
}
