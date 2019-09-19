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
  from_red();
  from_blue();
  from_green();
  from_orange();
}

void read_pin(){
  val_red = digitalRead(Button_red);
  val_blue = digitalRead(Button_blue);
  val_green = digitalRead(Button_green);
  val_orange = digitalRead(Button_orange);
  val_reset = digitalRead(reset);
  Serial.print(flag);
  Serial.print(",");
  Serial.print(val_red);
  Serial.print(",");
  Serial.print(val_blue);
  Serial.print(",");
  Serial.print(val_green);
  Serial.print(",");
  Serial.println(val_orange);
}
void from_red(){
  read_pin();

  if(val_red == HIGH && flag == 0){
    digitalWrite(LED_red,HIGH);
    Serial.println("赤が押されました!");
    
    flag = 1;
  }
  else if(val_blue == HIGH && flag == 0){
    digitalWrite(LED_blue,HIGH);
    Serial.println("青が押されました!");
    
    flag = 1;
  }
  else if(val_green == HIGH && flag == 0){
    digitalWrite(LED_green,HIGH);
    Serial.println("緑が押されました!");
    
    flag = 1;
  }
  else if(val_orange == HIGH && flag == 0){
    digitalWrite(LED_orange,HIGH);
    Serial.println("オレンジが押されました!");
    
    flag = 1;
  }

  reset_prog();
}

void from_blue(){
  read_pin();
  
  if(val_blue == HIGH && flag == 0){
    digitalWrite(LED_blue,HIGH);
    Serial.println("青が押されました!");
    
    flag = 1;
  }
  else if(val_green == HIGH && flag == 0){
    digitalWrite(LED_green,HIGH);
    Serial.println("緑が押されました!");
    
    flag = 1;
  }
  else if(val_orange == HIGH && flag == 0){
    digitalWrite(LED_orange,HIGH);
    Serial.println("オレンジが押されました!");
    
    flag = 1;
  }
  else if(val_red == HIGH && flag == 0){
    digitalWrite(LED_red,HIGH);
    Serial.println("赤が押されました!");
    
    flag = 1;
  }

  reset_prog();
}

void from_green(){
  read_pin();

  if(val_green == HIGH && flag == 0){
    digitalWrite(LED_green,HIGH);
    Serial.println("緑が押されました!");
    
    flag = 1;
  }
  else if(val_orange == HIGH && flag == 0){
    digitalWrite(LED_orange,HIGH);
    Serial.println("オレンジが押されました!");
    
    flag = 1;
  }
  else if(val_red == HIGH && flag == 0){
    digitalWrite(LED_red,HIGH);
    Serial.println("赤が押されました!");
    
    flag = 1;
  }
  else if(val_blue == HIGH && flag == 0){
    digitalWrite(LED_blue,HIGH);
    Serial.println("青が押されました!");
    
    flag = 1;
  }

  reset_prog();
}

void from_orange(){
  read_pin();

  if(val_orange == HIGH && flag == 0){
    digitalWrite(LED_orange,HIGH);
    Serial.println("オレンジが押されました!");
    
    flag = 1;
  }
  else if(val_red == HIGH && flag == 0){
    digitalWrite(LED_red,HIGH);
    Serial.println("赤が押されました!");
    
    flag = 1;
  }
  else if(val_blue == HIGH && flag == 0){
    digitalWrite(LED_blue,HIGH);
    Serial.println("青が押されました!");
    
    flag = 1;
  }
  else if(val_green == HIGH && flag == 0){
    digitalWrite(LED_green,HIGH);
    Serial.println("緑が押されました!");
    
    flag = 1;
  }

  reset_prog();
}

void reset_prog(){
  if(val_reset == HIGH && flag == 1){
    digitalWrite(LED_red,LOW);
    digitalWrite(LED_blue,LOW);
    digitalWrite(LED_green,LOW);
    digitalWrite(LED_orange,LOW);
    Serial.println("リセットされました!");
    
    flag = 0;
  }
}
