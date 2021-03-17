void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 200; i <= 800; i++)
  {
    pinMode(6,OUTPUT);
    tone(6,i);
    delay(5);
  }
  delay(4000) ;
  for (int i = 800; i >= 200; i--)
  {
    pinMode(6,OUTPUT);
    tone(6,i);
    delay(10);
  }
  
}
