/**
监听2号引脚的高低电平来判断是否有火焰
*/
#define KEY 2

void setup()
{
  pinMode(KEY, INPUT); 
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if (digitalRead(2) == 1 )
  {
    digitalWrite(LED_BUILTIN, HIGH); // Led ON
    Serial.println("** 有火  快跑！！！！ **");
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW); // Led OFF
    Serial.println("没有火  别担心");
  }
  delay(100);
}

