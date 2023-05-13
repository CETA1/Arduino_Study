/*
    按键亮灯，再按键熄灯
*/
int led = 3;
int button = 2;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(button,INPUT_PULLUP);//输入上拉

}

void loop() {
  while(1)
  {
    if(digitalRead(button)==LOW)
    {
      delay(100);//按键消抖
      if(digitalRead(button)==LOW)
      {
       digitalWrite(led,!digitalRead(led));

      }
    }
    
  }

}
