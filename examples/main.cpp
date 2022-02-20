#include <Arduino.h>
#include <ttp229.h>

byte key;
TTP229 TouchPad(8,9);

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 key = TouchPad.getKeys();
 if (key)
  Serial.println(key);
 delay(10);
}





