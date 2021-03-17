void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  //5V电压表
  int a = analogRead(A0);           //采集模拟量A0口数值
  float vala = a * (5000.0/1024.0); //将数值转换为原始电压值
  Serial.print("电压=");
  Serial.print(vala);
  Serial.println("mv");
  delay(2000);
}
