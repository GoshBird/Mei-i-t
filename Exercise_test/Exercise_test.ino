#define LED_red 2
#define LED_blue 3
#define LED_green 4
#define LED_orange 5
#define Button_red 8
#define Button_blue 9
#define Button_green 10
#define Button_orange 11
#define reset 12

int val_red = LOW;
int val_blue = LOW;
int val_green = LOW;
int val_orange = LOW;
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
  val_blue = digitalRead(Button_blue);
  val_green = digitalRead(Button_green);
  val_orange = digitalRead(Button_orange);
  val_reset = digitalRead(reset);

  button();
  
  light();
}

void button(){
  Serial.print(val_reset);
  Serial.print(",");
  Serial.print(val_red);
  Serial.print(",");
  Serial.print(val_blue);
  Serial.print(",");
  Serial.print(val_green);
  Serial.print(",");
  Serial.println(val_orange);
}
void light(){
  if(val_red == HIGH || val_reset == HIGH){
    digitalWrite(LED_red,HIGH);
  }
  else{
    digitalWrite(LED_red,LOW);
  }
  
  if(val_blue == HIGH || val_reset == HIGH){
    digitalWrite(LED_blue,HIGH);
  }
  else{
    digitalWrite(LED_blue,LOW);
  }
  
  if(val_green == HIGH || val_reset == HIGH){
    digitalWrite(LED_green,HIGH);
  }
  else{
    digitalWrite(LED_green,LOW);
  }
  
  if(val_orange == HIGH || val_reset == HIGH){
    digitalWrite(LED_orange,HIGH);
  }
  else{
    digitalWrite(LED_orange,LOW);
  }
}
