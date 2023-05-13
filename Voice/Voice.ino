const int ledPin = 13;
const int soundPin = A0;
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
  
}

void loop() {
  int value = analogRead(soundPin);
  Serial.println(value);
  if(value>600)
  {
    digitalWrite(ledPin, HIGH);//点亮内置灯
  }
  else
  {
     digitalWrite(ledPin, LOW);//关闭
  }


}
