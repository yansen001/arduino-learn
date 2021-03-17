void setup() {
  Serial.begin(9600);
}

void loop() {
  int a = analogRead(A0);
  float vol = a * (5000.0/1024.0/10);
  Serial.print("温度=");
  Serial.print(vol);
  Serial.println("oc");

  delay(2000);
}
