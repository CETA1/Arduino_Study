const int redPin = 11;// red LED
const int greenPin = 10;// blue LED

void setup() {
    // 设置两引脚为输出模式
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    // 设置串口波特率
    Serial.begin(115200);
}

void loop() {
    // 判断按键是否按下，如果按下，则led灯亮。
    for (int val = 255; val > 0 ; val--) {
        analogWrite(redPin, val); // red value 减少
        analogWrite(greenPin, 255 - val);// green value 增加
        Serial.println(val, DEC); // 串口输出值
        delay(10); // delay 1ms
    }
    for (int val = 0; val < 255 ; val++) {
        analogWrite(redPin, val); // red value 减少
        analogWrite(greenPin, 255 - val);// green value 增加
        Serial.println(val, DEC); // 串口输出值
        delay(10); // delay 1ms
    }
}
