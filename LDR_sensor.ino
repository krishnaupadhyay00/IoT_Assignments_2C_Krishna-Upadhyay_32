int LDR_Pin = A0;     
int LDR_Value = 0;   
void setup() {
  Serial.begin(9600);  
  pinMode(13, OUTPUT);
}
void loop() {
  LDR_Value = analogRead(LDR_Pin); 
  Serial.print("Light Intensity: ");
  Serial.println(LDR_Value);        
  if (LDR_Value > 400) {   
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  delay(500);                       
}