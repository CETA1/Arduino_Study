//点击变换灯光亮度
int led = 3;
int button = 2;
int value = 0;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(button,INPUT_PULLUP);//输入上拉,相当于电阻

}
void loop() {
  while(1)
  {
    if(digitalRead(button)==LOW)
    {
      delay(100);//消抖
      if(digitalRead(button)==LOW)
      {
        delay(100);//消抖
        analogWrite(led,value);
        value = value + 70;
      }

    }
    if(value>255)
    {
      value = 0;
    }
  }
}
