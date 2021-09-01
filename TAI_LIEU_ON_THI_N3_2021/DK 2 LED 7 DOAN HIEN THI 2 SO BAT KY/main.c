//MO PHONG CO 4 CON LED 7 DOAN CHI QUAN TAM 2 CON CUOI CUNG
//VI TRI LED CHUC VA DON VI CO THE DOI CHO NHAU
//HIEN THI 2 SO BAT KY

#include <16f877a.h>
#fuses hs
#use delay(clock=4M)
#byte portd=0x08
#bit ra0=0x05.0
#bit ra1=0x05.1

int8 maled7[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
void main()
{ 
   set_tris_a(0x00);
   set_tris_D(0x00);     
   while(1)
   {
      PORTD=0XFF; //DANH CHO MO PHONG
      RA0=1;
      RA1=0;
      portd=maled7[1];//SO HANG CHUC
      delay_ms(5);
      
      PORTD=0XFF; //DANH CHO MO PHONG
      RA0=0;
      RA1=1;
      portd=maled7[2];//SO HANG DON VI 
      delay_ms(5);
   }      
}     
