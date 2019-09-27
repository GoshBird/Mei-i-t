//#define 名前 ピン番号 を事前に書くことでピン番号ではなくて名前で管理できるようになります。
#define LED 2
#define Button 8
//int 名前 で変数(整数)を定義できます。ちなみに、他にもfloatやdoubleなどがあります。それぞれ入れれる数字が異なっているので時と場合で使い分けます。
int val = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(Button,INPUT);
  
}

void loop() {
  //ボタンが押されたかを"val"という名前でを管理しています。
  val = digitalRead(Button);

  //HIGHは押されているということになります。ちなみに、OUTPUTでは約5V程度の電気が流れます。
  //ifとelseは「もし〜なら」「そうでないなら」という意味です。Scratchにもありますね。
  if(val==HIGH){
    digitalWrite(LED,HIGH);
  }
  else{
    digitalWrite(LED,LOW);
  }
}
