#include<16f877a.h>
#fuses hs
#use delay(clock=4M)
#byte portb=0x06
void main()
{
   set_tris_b(0);
   portb=0b0000;
   delay_ms(1000);
   portb=0b0001;
   delay_ms(1000);
   portb=0b0011;
   delay_ms(1000);
   portb=0b0111;
   delay_ms(1000);
   portb=0b1111;
}
