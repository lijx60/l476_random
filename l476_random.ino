
#define key_sta  PC13
#define led_pin  PA5
byte val;
bool temp;
void setup() {
  // put your setup code here, to run once:
  pinMode(key_sta,INPUT);
  pinMode(led_pin,OUTPUT);
  Serial.begin(9600); //开启串口
}

void loop() {
   // put your main code here, to run repeatedly:
    //temp = digitalRead(key_sta); 按键是否按下
    if(!digitalRead(key_sta)){
      delay(10); //延迟10毫秒后再次判断
      if(!digitalRead(key_sta)){
      val = random(0,9);// 生成随机数
      Serial.print(val);打印出随机数
      Serial.println(' ');
       }
       else Serial.print("no data");
       delay(200);
      }
      //按键没有压下，灯闪烁
      else{
      digitalWrite(led_pin, HIGH);
      delay(1000);
      digitalWrite(led_pin, LOW); 
      delay(1000);
      }

}
