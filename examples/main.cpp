#include <Arduino.h>
#include <ttp229.h>

byte key;

void setup()
{
 Serial.begin(9600);
 pinMode(SCL, OUTPUT); 
 pinMode(SDO, INPUT);
}

void loop()
{
 key = Read_TTP229_Keypad();
 if (key)
  Serial.println(key);
 delay(10);
}


