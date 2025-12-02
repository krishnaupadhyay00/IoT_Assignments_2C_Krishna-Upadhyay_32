int sensorPin = A1;  
float tempC;
float tempF;

void setup() {
  Serial.begin(9600);  
}

void loop() {
  int sensorValue = analogRead(sensorPin);  
  

  float voltage = sensorValue * (5.0 / 1023.0);  
  

  tempC = voltage * 100;  
  tempF = (tempC * 9.0 / 5.0) + 32.0;  

  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.print(" °C | ");

  Serial.print(tempF);
  Serial.println(" °F");  

  delay(1000);  
}
