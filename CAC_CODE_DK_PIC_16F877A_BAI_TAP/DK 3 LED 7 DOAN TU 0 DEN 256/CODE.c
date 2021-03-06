//MO PHONG CO 4 CON LED 7 DOAN CHI QUAN TAM 2 CON CUOI CUNG
//VI TRI LED CHUC VA DON VI CO THE DOI CHO NHAU
//DK 3 LED 7 DOAN 0 DEN 256
#include <16f877a.h>
#fuses hs
#use delay(clock=4000000)
#byte portd=0x08
#bit ra1=0x05.1
#bit ra2=0x05.2
#bit ra3=0x05.3

int8 maled7[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
int tram=0,chuc=0,donvi=0,i=0;
int16 dem=0;
void main()
{ 
   set_tris_a(0);
   set_tris_d(0);
   
   for(dem=0;dem<=256;dem++)
   {
      tram=dem/100;
      chuc=dem/10%10;
      donvi=dem%10;
      for(i=1;i<=34;i++)
      {
         PORTD=0XFF; //DANH CHO MO PHONG
         ra1=0;ra2=1;ra3=1;
         portd=maled7[tram];
         delay_ms(5);
         
         PORTD=0XFF; //DANH CHO MO PHONG
         ra1=1;ra2=0;ra3=1;
         portd=maled7[chuc];
         delay_ms(5);
         
         PORTD=0XFF; //DANH CHO MO PHONG
         ra1=1;ra2=1;ra3=0;
         portd=maled7[donvi];
         delay_ms(5);
      }
   }
}     
