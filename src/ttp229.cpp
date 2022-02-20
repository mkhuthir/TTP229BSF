/* 
 *  Muthanna Alwahash 2020/21
 *
 */

#include <Arduino.h>
#include <ttp229.h>

void TTP229::getKeys(void){};

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
