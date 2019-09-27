#define LED_red 2
#define LED_blue 3
#define LED_green 4
#define LED_orange 5
#define Button_red 8
#define Button_blue 9
#define Button_green 10
#define Button_orange 11
#define reset 12

int flag = 0;
int val_red = LOW;
int val_reset = LOW;

void setup() {
  Serial.begin(9600);
  
  pinMode(LED_red,OUTPUT);
  pinMode(LED_blue,OUTPUT);
  pinMode(LED_green,OUTPUT);
  pinMode(LED_orange,OUTPUT);
  
  pinMode(Button_red,INPUT);
  pinMode(Button_blue,INPUT);
  pinMode(Button_green,INPUT);
  pinMode(Button_orange,INPUT);
  
  pinMode(reset,INPUT);
}

void loop() {
  val_red = digitalRead(Button_red);
  val_reset = digitalRead(reset);

  if(/*ここに何が入るでしょうか?*/){
    /*ここに何が入るでしょうか?*/
    
  }
  
  if(/*ここに何が入るでしょうか?*/){
    /*ここに何が入るでしょうか?*/
    
  }
}
