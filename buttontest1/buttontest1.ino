const int buttonpin = 6;
const int ledpin = 7;
const int watchpin = 13;
int buttonstate = 0;

void setup() {
    pinMode(buttonpin,INPUT);
    pinMode(ledpin,OUTPUT);
    pinMode(watchpin,OUTPUT);
}

void loop() {
    buttonstate = digitalRead(buttonpin);
    if (buttonstate == 1)
    {
        digitalWrite(ledpin,1);
        digitalWrite(watchpin,1);
    }
    else
    {
        digitalWrite(ledpin,0);
    }
    
    
}