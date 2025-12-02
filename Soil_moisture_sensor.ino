int sensor_value = A1;
void setup()
{
    pinMode(A1, INPUT);
    Serial.begin(9600);
}

void loop()
{
    int sensor_value = analogRead(A1);
    Serial.print("Moisture value is:");
    Serial.println(sensor_value);
    if (sensor_value <= 100)
    {
        Serial.println("Soil is Dry..Water it");
    }
    else
    {
        Serial.println("Soil is WET...No Water Needed");
    }
}
