#include <DHT.h>
DHT ddd(8,DHT11);//DHT11是传感器类型
float Temp = 0;//温度
float Humi = 0;//湿度
float Heat = 0;//酷热指数

void setup() {
  ddd.begin();
  pinMode(8,INPUT);
  Serial.begin(9600);

}

void loop() {
  Temp = ddd.readTemperature();//tone 代表华氏温度 省略不写是摄氏温度
  Humi = ddd.readHumidity();
  Heat = ddd.computeHeatIndex(Temp,Humi,false);

  Serial.print("温度是:");
  Serial.print(Temp);
  Serial.println("℃");

  Serial.print("湿度是:");
  Serial.print(Humi);
  Serial.println("%");

  Serial.print("酷热指数是:");
  Serial.print(Heat);
  Serial.println("°F");


  delay(2000);


}
