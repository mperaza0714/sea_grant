void setup() {
  pinMode(A0, INPUT) ;
  Serial.begin(9600) ;
}

void loop() {
  float sensorValue = analogRead(A0) ;
  float vTemp = sensorValue * (5.0 / 1023.0) ;
  float temp = (vTemp - 1.25) / 0.005 ;
  Serial.println(temp) ;
}
