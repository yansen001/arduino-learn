const int ledpin = 9 ;      // LED接9
const int pot = A0 ;        //电位器接A0

void setup() {
Serial.begin(9600) ;        //设定串口波特率
}

void loop() {
    for (int i = 0; i <= 255; i+=5)
    {
        analogWrite(ledpin,i) ;
        int time = analogRead(pot) / 5 ;
        Serial.println(time) ;
        delay(time) ;
    }
    for (int i = 255; i >= 0; i-=5)
    {
        analogWrite(ledpin,i) ;
        int time1 = analogRead(pot) / 5 ;
        Serial.println(time1) ;
        delay(time1) ;
    }
}