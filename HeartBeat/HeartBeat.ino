int sensorPin=A0;             //接Arduino的A0引脚

double alpha=0.75;            //变量alpha是大于0小于1的数,其大小决定了数据平滑的程度。
int period=20;

void setup()
{
  pinMode(A0,INPUT);
  Serial.begin(115200);       //这个串口监视软件的通信速率设置为最高,以减小传输数据带来的延迟影响。
}

void loop()
{
  static double oldValue=0;
  
  int rawValue=analogRead(sensorPin);
  
  //平滑功能采用了一种称为"leaky integration”的方法.可以通过代码了解这种方法,我们用如下代码完成这种平滑:
  double value=alpha*oldValue+(1-alpha)*rawValue;
  
  Serial.println(value);
  
  oldValue=value;
  delay(period);
}
