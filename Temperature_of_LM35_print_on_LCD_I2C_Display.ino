#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal led_1(0);
int sensorPin = A0;
float tempC;
float tempF;

void setup()
{
    led_1.begin(16, 2);
}

void loop()
{
    int sensorValue = analogRead(sensorPin);

    float voltage = sensorValue * (5.0 / 1023.0);

    tempC = voltage * 100;
    tempF = (tempC * 9.0 / 5.0) + 32.0;

    led_1.setCursor(0, 0);
    led_1.print("Temperature: ");
    led_1.print(tempC);
    led_1.print(" C | ");
    led_1.setCursor(0, 1);
    led_1.print(tempF);
    led_1.println(" F");
    led_1.setBacklight(0);
    delay(500);
    led_1.setBacklight(1);
    delay(300);
}
