const int pina = 2;
const int pinb = 3;
const int pinc = 4;
const int pind = 5;
const int pine = 6;
const int pinf = 7;
const int ping = 8;
const int pindp = 9;
const int dig1 = 10;
const int dig2 = 11;
const int dig3 = 12;
const int dig4 = 13; 

int j;


int nunTable[10][8] = {
    /*
    段选线数字
    4位8段管 段选线控制 1为点亮 0为熄灭
     a,b,c,d,e,f,g,dp
    */
    {1,1,1,1,1,1,1,0},      //0
    {0,1,1,0,0,0,0,0},      //1
    {1,1,0,1,1,0,1,0},      //2
    {1,1,1,1,0,0,1,0},      //3
    {0,1,1,0,0,1,1,0},      //4
    {1,0,1,1,0,1,1,0},      //5
    {1,0,1,1,1,1,1,0},      //6
    {1,1,1,0,0,0,0,0},      //7
    {1,1,1,1,1,1,1,0},      //8
    {1,1,1,0,0,1,1,0},      //9
};

int digTable[5][4] = {
    /*
    位选线显示控制
    4位8段管 位选线控制 1为熄灭 0为接通
    dig1,dig2,dig3,dig4
    */
    {1,1,1,1},      //  1-4位全灭
    {0,1,1,1},      //  1th位亮
    {1,0,1,1},      //  2th位亮
    {1,1,0,1},      //  3th位亮
    {1,1,1,0},      //  4th位亮
};

void clear(void) {
    digitalWrite(pina,0);
    digitalWrite(pinb,0);
    digitalWrite(pinc,0);
    digitalWrite(pind,0);
    digitalWrite(pine,0);
    digitalWrite(pinf,0);
    digitalWrite(ping,0);
    digitalWrite(pindp,0);
}

void display0(void) {
    digitalWrite(pina,nunTable[0][0]);
    digitalWrite(pinb,nunTable[0][1]);
    digitalWrite(pinc,nunTable[0][2]);
    digitalWrite(pind,nunTable[0][3]);
    digitalWrite(pine,nunTable[0][4]);
    digitalWrite(pinf,nunTable[0][5]);
    digitalWrite(ping,nunTable[0][6]);
    digitalWrite(pindp,nunTable[0][7]);
}

void display1(void) {
    digitalWrite(pina,nunTable[1][0]);
    digitalWrite(pinb,nunTable[1][1]);
    digitalWrite(pinc,nunTable[1][2]);
    digitalWrite(pind,nunTable[1][3]);
    digitalWrite(pine,nunTable[1][4]);
    digitalWrite(pinf,nunTable[1][5]);
    digitalWrite(ping,nunTable[1][6]);
    digitalWrite(pindp,nunTable[1][7]);
}

void display2(void) {
    digitalWrite(pina,nunTable[2][0]);
    digitalWrite(pinb,nunTable[2][1]);
    digitalWrite(pinc,nunTable[2][2]);
    digitalWrite(pind,nunTable[2][3]);
    digitalWrite(pine,nunTable[2][4]);
    digitalWrite(pinf,nunTable[2][5]);
    digitalWrite(ping,nunTable[2][6]);
    digitalWrite(pindp,nunTable[2][7]);
}

void display3(void) {
    digitalWrite(pina,nunTable[3][0]);
    digitalWrite(pinb,nunTable[3][1]);
    digitalWrite(pinc,nunTable[3][2]);
    digitalWrite(pind,nunTable[3][3]);
    digitalWrite(pine,nunTable[3][4]);
    digitalWrite(pinf,nunTable[3][5]);
    digitalWrite(ping,nunTable[3][6]);
    digitalWrite(pindp,nunTable[3][7]);
}

void display4(void) {
    digitalWrite(pina,nunTable[4][0]);
    digitalWrite(pinb,nunTable[4][1]);
    digitalWrite(pinc,nunTable[4][2]);
    digitalWrite(pind,nunTable[4][3]);
    digitalWrite(pine,nunTable[4][4]);
    digitalWrite(pinf,nunTable[4][5]);
    digitalWrite(ping,nunTable[4][6]);
    digitalWrite(pindp,nunTable[4][7]);
}

void display5(void) {
    digitalWrite(pina,nunTable[5][0]);
    digitalWrite(pinb,nunTable[5][1]);
    digitalWrite(pinc,nunTable[5][2]);
    digitalWrite(pind,nunTable[5][3]);
    digitalWrite(pine,nunTable[5][4]);
    digitalWrite(pinf,nunTable[5][5]);
    digitalWrite(ping,nunTable[5][6]);
    digitalWrite(pindp,nunTable[5][7]);
}

void display6(void) {
    digitalWrite(pina,nunTable[6][0]);
    digitalWrite(pinb,nunTable[6][1]);
    digitalWrite(pinc,nunTable[6][2]);
    digitalWrite(pind,nunTable[6][3]);
    digitalWrite(pine,nunTable[6][4]);
    digitalWrite(pinf,nunTable[6][5]);
    digitalWrite(ping,nunTable[6][6]);
    digitalWrite(pindp,nunTable[6][7]);
}

void display7(void) {
    digitalWrite(pina,nunTable[7][0]);
    digitalWrite(pinb,nunTable[7][1]);
    digitalWrite(pinc,nunTable[7][2]);
    digitalWrite(pind,nunTable[7][3]);
    digitalWrite(pine,nunTable[7][4]);
    digitalWrite(pinf,nunTable[7][5]);
    digitalWrite(ping,nunTable[7][6]);
    digitalWrite(pindp,nunTable[7][7]);
}

void display8(void) {
    digitalWrite(pina,nunTable[8][0]);
    digitalWrite(pinb,nunTable[8][1]);
    digitalWrite(pinc,nunTable[8][2]);
    digitalWrite(pind,nunTable[8][3]);
    digitalWrite(pine,nunTable[8][4]);
    digitalWrite(pinf,nunTable[8][5]);
    digitalWrite(ping,nunTable[8][6]);
    digitalWrite(pindp,nunTable[8][7]);
}

void display9(void) {
    digitalWrite(pina,nunTable[9][0]);
    digitalWrite(pinb,nunTable[9][1]);
    digitalWrite(pinc,nunTable[9][2]);
    digitalWrite(pind,nunTable[9][3]);
    digitalWrite(pine,nunTable[9][4]);
    digitalWrite(pinf,nunTable[9][5]);
    digitalWrite(ping,nunTable[9][6]);
    digitalWrite(pindp,nunTable[9][7]);
}

void d0(void) {
    digitalWrite(dig1,digTable[0][0]);
    digitalWrite(dig2,digTable[0][1]);
    digitalWrite(dig3,digTable[0][2]);
    digitalWrite(dig4,digTable[0][3]);
}

void d1(void) {
    digitalWrite(dig1,digTable[1][0]);
    digitalWrite(dig2,digTable[1][1]);
    digitalWrite(dig3,digTable[1][2]);
    digitalWrite(dig4,digTable[1][3]);
}

void d2(void) {
    digitalWrite(dig1,digTable[2][0]);
    digitalWrite(dig2,digTable[2][1]);
    digitalWrite(dig3,digTable[2][2]);
    digitalWrite(dig4,digTable[2][3]);
}

void d3(void) {
    digitalWrite(dig1,digTable[3][0]);
    digitalWrite(dig2,digTable[3][1]);
    digitalWrite(dig3,digTable[3][2]);
    digitalWrite(dig4,digTable[3][3]);
}

void d4(void) {
    digitalWrite(dig1,digTable[4][0]);
    digitalWrite(dig2,digTable[4][1]);
    digitalWrite(dig3,digTable[4][2]);
    digitalWrite(dig4,digTable[4][3]);
}

void setup() {
    for ( int j = 2; j <= 13; j++)
    {
        pinMode(j,OUTPUT);
    }
}

void loop() {
    d1();
    display2();
    clear();

    d2();
    display3();
    clear();

    d3();
    display3();
    clear();

    d4();
    display3();
    clear();

}

