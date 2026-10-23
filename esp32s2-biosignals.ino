
const int SENSOR_PIN = 4;     
const int LO_PLUS_PIN = 6;    
const int LO_MINUS_PIN = 7;   

void setup() {
  Serial.begin(115200);
  
  pinMode(LO_PLUS_PIN, INPUT);
  pinMode(LO_MINUS_PIN, INPUT);
}

void loop() {

  if((digitalRead(LO_PLUS_PIN) == HIGH) || (digitalRead(LO_MINUS_PIN) == HIGH))
  {
    Serial.println(0); 
  } 
  else
  {
    int sensorValue = analogRead(SENSOR_PIN);
    Serial.println(sensorValue);
  }
  
  delay(10);
}