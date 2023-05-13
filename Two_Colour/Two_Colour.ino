
int pin1 = 5; //双色LED管脚1
int pin3 = 8; //双色LED管脚3
 
void setup() { 
  pinMode(pin1, OUTPUT); //设置管脚1为输出状态
  pinMode(pin3, OUTPUT); //设置管脚3为输出状态
}
 
void loop() { 
  //熄灭
  digitalWrite(pin1, LOW);  //设置管脚1为LOW
  digitalWrite(pin3, LOW);  //设置管脚3为LOW
  delay(1000); //等待1000毫秒
 
  //颜色1亮
  digitalWrite(pin1, HIGH);  //设置管脚1为HIGH
  digitalWrite(pin3, LOW);  //设置管脚3为LOW
  delay(1000); //等待1000毫秒
  
  //颜色2亮
  digitalWrite(pin1, LOW);  //设置管脚1为LOW
  digitalWrite(pin3, HIGH);  //设置管脚3为HIGH
  delay(1000); //等待1000毫秒
 
  //颜色1亮 + 颜色2亮 （形成混合色）
  digitalWrite(pin1, HIGH);//设置管脚1为HIGH
  digitalWrite(pin3, HIGH);  //设置管脚3为HIGH
  delay(1000); //等待1000毫秒
}
