#include<16f877a.h>
#fuses hs
#use delay (clock = 4M)
 #define LCD_ENABLE_PIN  PIN_A3                                    
#define LCD_RS_PIN      PIN_A1                                    
#define LCD_RW_PIN      PIN_A2                                   
#define LCD_DATA4       PIN_D4                                    
#define LCD_DATA5       PIN_D5                                   
#define LCD_DATA6       PIN_D6                                    
#define LCD_DATA7       PIN_D7                                    
#include<lcd.c>
void main()
{
   set_tris_a(0b0000000);
   set_tris_b(0b00000000);
   lcd_init();
   lcd_gotoxy(1,1);
   lcd_putc("VÕ THÀNH NHÂN");
   lcd_gotoxy(1,2);
   lcd_putc("0303191498");
}
