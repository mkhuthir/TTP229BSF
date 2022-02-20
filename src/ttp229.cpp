/* 
 *  Muthanna Alwahash 2020/21
 *
 */
//------------------------------------------------------------------------------------------------------------

#include <Arduino.h>
#include <ttp229.h>

//------------------------------------------------------------------------------------------------------------
TTP229::TTP229(int pinSCL, int pinSDO)
{
  // MCU Used pins
  _pinSCL = pinSCL;         // Serial Clock Pin
  _pinSDO = pinSDO;         // Serial Data Output Pin

  // Set pins directions
  pinMode(pinSCL, OUTPUT);  // Serial Clock Pin
  pinMode(pinSDO, INPUT);   // Serial Data Output Pin
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