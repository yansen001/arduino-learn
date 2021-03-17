const int pin_a = 2;
const int pin_b = 3;
const int pin_c = 4;
const int pin_d = 5;
const int pin_e = 6;
const int pin_f = 7;
const int pin_g = 8;
const int pin_dp = 9;
const int pin_vcc = 10;


int numTable[10][8] = {
    /*
    共阳极数码管 0为点亮 1为熄灭
    a,b,c,d,e,f,g,dp
    */
    {0,0,0,0,0,0,1,1},
    {1,0,0,1,1,1,1,1},
    {0,0,1,0,0,1,0,1},
    {0,0,0,0,1,1,0,1},
    {1,0,0,1,1,0,0,1},
    {0,1,0,0,1,0,0,1},
    {0,1,0,0,0,0,0,1},
    {0,0,0,1,1,1,1,1},
    {0,0,0,0,0,0,0,1},
    {0,0,0,0,1,0,0,1},
};



void setup() {
    for (int i = 2; i <= 10; i++)
    {
        pinMode(i,OUTPUT);
    }
    
}



void loop() {
    digitalWrite(pin_vcc,1);
    for (int i = 0; i < 10; i++)
    {
        digitalWrite(pin_a,numTable[i][0]);
        digitalWrite(pin_b,numTable[i][1]);
        digitalWrite(pin_c,numTable[i][2]);
        digitalWrite(pin_d,numTable[i][3]);
        digitalWrite(pin_e,numTable[i][4]);
        digitalWrite(pin_f,numTable[i][5]);
        digitalWrite(pin_g,numTable[i][6]);
        digitalWrite(pin_dp,numTable[i][7]);
        delay(2000);
    }
    
}