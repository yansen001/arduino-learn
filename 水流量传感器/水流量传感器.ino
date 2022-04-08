/*
霍尔传感器水流量传感器
用于测试滤筒流量 
单位：L/H
传感器量程：1~25 L/min
流量脉冲特性 Hz=(5.0*Q) ±5%  Q--流量L/min
流程：累计1s内脉冲数量C1，C1/1=频率Result1 带入公式得出流量Q Q*60=Result2 L/H
暂时使用串口回传数据
*/

const long sample_time = 1000 ;//采样时间1000ms
unsigned long time;
float c1 = 0; //计数器c1初始化
float r1 = 0;
float r2 = 0;

void setup() {
  Serial.begin(9600);
  attachInterrupt(0, count_c1, FALLING);  //中断设置 int0低电平触发count_c1
  time = millis();  //获取当前时间
}

void loop() {
  if(millis() >= time)
    {
      r1 = (c1/1)/5;
      r2 = r1*60;
      Serial.print("当前流量=");
      Serial.println(r2);
      time = millis() + sample_time;
      c1 = 0;
    }
}

void count_c1() {
  c1 = c1+1;
}