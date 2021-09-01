//DPC GIA TRI ADC
//HIEN THI TREN LED DON
#include <16f877a.h>
#device adc=8
#fuses hs
#use delay(clock=4000000)
#byte portc=0x07//GAN 8 LED DON
int value;//LUU GIA TRI ADC
void  main( )
{ 
   set_tris_a(1);
   set_tris_c(0);
   setup_ADC(ADC_clock_internal);
   setup_ADC_ports(AN0);
   set_ADC_channel(0);
   delay_ms(10);
   while(1)
   {
      value=read_adc();
      portc=value;
   }
}

