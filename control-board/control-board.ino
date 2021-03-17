const int sw1 = 2;      //开关-pin2
const int fan1 = 3;     //通风扇-pin3
const int fan2 = 4;     //加湿器-pin4
int sw1State = 0;       //初始化开关状态为0

void setup() {
  // put your setup code here, to run once:
  pinMode(sw1,INPUT);        //设定sw1为输入
  pinMode(fan1,OUTPUT);      //设定fan1为输出
  pinMode(fan2,OUTPUT);     //设定fan2为输出
}

void loop() {
  // put your main code here, to run repeatedly:
  sw1State = digitalRead(sw1);  //读取sw1状态，存入sw1State 

  if (sw1State == 1)
  {
    digitalWrite(fan1,1);
    digitalWrite(fan2,1);
  }
  else
  {
    digitalWrite(fan1,0);
    digitalWrite(fan2,0);
  }
  delay(1000);
}
