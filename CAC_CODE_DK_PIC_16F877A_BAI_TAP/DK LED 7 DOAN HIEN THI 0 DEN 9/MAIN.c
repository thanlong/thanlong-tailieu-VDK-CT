//LAP TRINH CHO VI DIEU KHIEN PIC
//DIEU KHIEN 1 LED 7 DOAN HIEN THI TU O DEN 9

#include<16f877a.h>
#fuses hs
#use delay(clock=4M)
#byte portb=0x06
void main()
{
   set_tris_b(0);//Thuc hien 1 lan 
   
   while(1)
   {
      portb = 0b11000000;
      delay_ms(100);
      portb= 0xf9;
      delay_ms(100);
      portb= 0xA4;
      delay_ms(100);
      portb= 0xB0;
      delay_ms(100);
      portb= 0x99;
      delay_ms(100);
      portb= 0x92;
      delay_ms(100);
      portb= 0x82;
      delay_ms(100);
      portb= 0xF8;
      delay_ms(100);
      portb= 0x80;
      delay_ms(100);
      portb= 0x90;
      delay_ms(100);
   }
}
