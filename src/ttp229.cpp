/* 
 *  Muthanna Alwahash 2020/21
 *
 */

#include <Arduino.h>
#include <ttp229.h>

//------------------------------------------------------------------------------------------------------------
TTP229::TTP229(int pinSCL, int pinSDO)
{
  _pinSCL = pinSCL;
  _pinSDO = pinSDO;
  pinMode(pinSCL, OUTPUT); 
  pinMode(pinSDO, INPUT);
}

//------------------------------------------------------------------------------------------------------------
byte  TTP229::getKeys(void)
{
  byte Num;
  byte Key_State = 0;

  for(Num = 1; Num <= 16; Num++)
    {
      digitalWrite(_pinSCL, LOW);
      if (!digitalRead(_pinSDO))
        {
          Key_State = Num;
        }
      digitalWrite(_pinSCL, HIGH);
    } 
  return Key_State;
}

//------------------------------------------------------------------------------------------------------------