//setupで初期設定を行います。
//ここでは2番ピンは出力されるピンですと書いています。(入力ではINPUTと書きます)
void setup() {
  pinMode(2,OUTPUT);
}
//loopでは初期設定後に繰り返されるプログラムを書きます。
//digitalWrite(ピン番号,オン/オフ)でピンの状態を更新します。
//delay(ミリ秒)で待機時間を書きます(1000ms=1s)
void loop()
{
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(1000);
}
