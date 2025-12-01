#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(9600);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); 
  }

  display.clearDisplay();             
  display.setTextSize(1);             
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 10);          
  display.println("Follow me on Instagram");
  display.println("Id hai @krishnaupadhyay7941");
  display.println("Krishna Upadhyay!");
  display.println("How may I help You?");


  display.display();                  
}

void loop() {

}