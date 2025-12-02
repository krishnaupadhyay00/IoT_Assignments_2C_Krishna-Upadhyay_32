int touchPin = 7;   
int buzzerPin = 13;   

void setup() {
  pinMode(touchPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int touchState = digitalRead(touchPin); 
  if (touchState == HIGH) {
    digitalWrite(buzzerPin, HIGH); 
    Serial.println("Touched");
  } else {
    digitalWrite(buzzerPin, LOW);
    Serial.println("Not Touched");
  }
  delay(100);
}