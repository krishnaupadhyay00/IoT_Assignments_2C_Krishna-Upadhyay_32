int sensor = 0;
void setup(){
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  sensor = analogRead(A0);
  if (sensor > 10) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  Serial.print("sensor = ");
  Serial.println(sensor);
  delay(100); 
}