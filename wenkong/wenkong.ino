#include <DHT.h>
DHT ddd(8,DHT11);//DHT11是传感器类型
float Temp = 0;//温度
int led = 3;

void setup() {
  Serial.begin(9600);
  ddd.begin();
  pinMode(led,OUTPUT);
  pinMode(8,INPUT);
  int value = 0;
}

void loop() {
  Temp = ddd.readTemperature();
  Serial.print("当前温度是：");
  Serial.println(Temp);
  if(Temp<25)
  {
    analogWrite(led, 0);

  }else if(Temp>=15&&Temp<=30){
    
    analogWrite(led, map(Temp,26,30,50,200));

  }else {
    analogWrite(led, 255);
  }
  delay(500);
}
