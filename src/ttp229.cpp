#include <Arduino.h>
#include <ttp229.h>


byte Read_TTP229_Keypad(void)
{
 byte Num;
 byte Key_State = 0;
 for(Num = 1; Num <= 16; Num++)
 {
  digitalWrite(SCL, LOW);
  if (!digitalRead(SDO)){
    Key_State = Num;
  
  }
  digitalWrite(SCL, HIGH);
 } 
 return Key_State;
}
