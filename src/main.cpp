#include "main.h"

void setup()
{
    pinMode(1, OUTPUT);
}

void loop()
{
    digitalWrite(1, HIGH);
    delay(2000);
    digitalWrite(1, LOW);
    delay(2000);
}