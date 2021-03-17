const int ledpin = 3 ;
const int relaypin = 2 ;

void setup() {
    Serial.begin(9600) ;
    pinMode(ledpin,OUTPUT) ;
    pinMode(relaypin,INPUT) ;
}

void loop() {
    while (!digitalRead(relaypin))
    {
        /* code */
    }
    Serial.println("有人") ;
    digitalWrite(ledpin,1) ;
    delay(1000) ;
    digitalWrite(ledpin,0);
    Serial.println("无人") ;
}