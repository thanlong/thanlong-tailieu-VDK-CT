//MO PHONG CO 4 CON LED 7 DOAN CHI QUAN TAM 2 CON CUOI CUNG
//VI TRI LED CHUC VA DON VI CO THE DOI CHO NHAU
//DEM SO LAN NHAN NUT HIEN HIHIHIENJ LEN 7SEG ANT
#include <16f877a.h>
#fuses hs
#use delay(clock=4000000)
#byte portd=0x08
#bit ra1=0x05.1
#bit ra2=0x05.2
#bit ra3=0x05.3
#bit rB0=0x06.0
int8 maled7[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
int tram=0,chuc=0,donvi=0,i=0;
int16 solan=0;
void main()
{ 
      set_tris_a(0);
      set_tris_b(1);// NUT NHAN GAN CHAN RB0
      set_tris_d(0);
      while(1)
      {
         if(rB0==1)
         {
            while(rb0==1)
            {
               //CHONG NHAY LED 7 DOAN 
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
               //==================
            }
            solan++;
         }
         tram=solan/100;
         chuc=solan/10%10;
         donvi=solan%10;
         
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
