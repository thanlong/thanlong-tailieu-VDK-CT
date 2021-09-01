//CN PWN
//DK DEN LED SANG 60% SAU 10S SANG 90%
#include <16f877a.h>
#fuses hs
#use delay(clock=4M)

void main()
{
set_tris_c(0x00);
setup_ccp1(CCP_PWM); // Bat che do PWM cho RC1 
setup_ccp2(CCP_PWM); // Bat che do PWM cho RC2 

//DO SANG BANG SO PHAN TRAM X2.5

set_pwm2_duty(150);//60%
delay_ms(10000);
set_pwm2_duty(225);//90%
setup_timer_2(T2_DIV_BY_4,249,1);//Ta co PR2-249 prescale=4   

while(1)
 {
 }

}
