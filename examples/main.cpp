#include <Arduino.h>
#include <ttp229.h>

#define pinSCL 8
#define pinSDO 9

byte key;
TTP229 TouchPad(pinSCL,pinSDO);

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 key = TouchPad.getKeys();
 if (key) 
 {
  Serial.print(key);
  Serial.print("-");
 };
 delay(100);
}