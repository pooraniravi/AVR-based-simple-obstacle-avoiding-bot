#include<avr/io.h>
#include<util/delay.h>
void main()
{
DDRD=0b00000000;
DDRB=0b11111111;
PORTD=0b11111111;
int c;
while(1)
  {
  c=PIND;
  if(c==0b11111111)
  PORTB=0b11111010;
  if(c==0b11111110)
  PORTB=0b11110110;
  if(c==0b11111101)
   {
   PORTB=0b11110101;
   _delay_ms(500);
   PORTB=0b11111001;
   _delay_ms(700);
   }
   if(c==11111100)
   {
   PORTB=0b11110101;
   _delay_ms(500);
   PORTB=0b11110110;
   _delay_ms(700);
   }
   if(c==0b11111011)
   PORTB=0b11111001;
   if(c==0b11111010)
   {
   PORTB=0b11110101;
   _delay_ms(500);
   PORTB=0b11111001;
   _delay_ms(700);
   }
   if(c==0b11111001)
   {
   PORTB=0b11110101;
   _delay_ms(500);
   PORTB=0b11111001;
   _delay_ms(700);
   }
   if(c==0b11111000)
   {
   PORTB=0b11110101;
   _delay_ms(500);
   PORTB=0b11111001;
   _delay_ms(2500);
   }
   }
   }