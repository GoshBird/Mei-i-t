#define LED 2
#define Button 8
int val = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(Button,INPUT);
}

void loop() {
  val = digitalRead(Button);
  
  if(/*ここに何が入るでしょうか?*/){
    /*ここに何が入るでしょうか?*/
  }
  else{
    /*ここに何が入るでしょうか?*/
  }
}
