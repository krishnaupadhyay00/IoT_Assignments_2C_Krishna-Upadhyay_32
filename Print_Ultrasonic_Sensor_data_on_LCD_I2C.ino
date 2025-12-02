#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd_1(0);

int trigPin = 9;
int echoPin = 10;
void setup()
{
    lcd_1.begin(16, 2);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    lcd_1.setBacklight(1);
}

void loop()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    long duration = pulseIn(echoPin, HIGH);
    long distance = (duration * 0.0343) / 2;
    lcd_1.setCursor(0, 0);
    lcd_1.print("Distance: ");
    lcd_1.print(distance);
    lcd_1.print(" cm");
    lcd_1.setCursor(0, 1);

    lcd_1.setBacklight(0);
    delay(500);
    lcd_1.setBacklight(1);
    delay(500);
}
