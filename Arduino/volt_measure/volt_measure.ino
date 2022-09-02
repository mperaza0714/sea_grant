  float input_volt = 0.0;
  float temp = 0.0;
  float r1 = 100.0;
  float r2 = 100000.0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogvalue = analogRead(A0);
  temp = (analogvalue * 5.0) / 1024.0;
  input_volt = temp / (1+r2/r1);
  Serial.print("Voltage= ");
  Serial.print(input_volt);
  Serial.println(" Volts");
  delay(1000);
}
