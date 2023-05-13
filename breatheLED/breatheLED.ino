//呼吸灯
int pin = 3;
void setup() {
  pinMode(pin,OUTPUT);
}

void loop() {
 
  
    for(int value=0;value<=255;value++)
    {
      analogWrite(pin,value);
      delay(5);
    }
     for(int value=255;value>=0;value--)
    {
      analogWrite(pin,value);
      delay(5);
    }
  

}
