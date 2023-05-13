//按键亮灯，松手熄灯
int led = 3;
int button = 2;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(button,INPUT_PULLUP);//输入上拉,相当于电阻

}

void loop() {
  while(1)
  {
    if(digitalRead(button)==LOW)
    {
      digitalWrite(led,HIGH);

    }else
    {
      digitalWrite(led,LOW);

    }
  }

}
