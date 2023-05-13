double temp,data;
void setup() {
  Serial.begin(9600);
}
 
void loop() {

  temp=(long)analogRead(0);
  data=(temp/650)*4;
  Serial.print("the depth is:");
  Serial.print(data);
  Serial.println("cm");
  delay(1000);

}