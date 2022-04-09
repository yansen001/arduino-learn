int ledpin = 13;
int ir_sensor_statue =0;
void setup() {
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ir_sensor_statue = analogRead(A5);
  Serial.println(ir_sensor_statue);
  delay(100);
}
