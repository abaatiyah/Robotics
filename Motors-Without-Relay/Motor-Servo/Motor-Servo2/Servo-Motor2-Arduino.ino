#include<Servo.h>
  
int motor = 10;
int btn1=8;
int btn2=9;   

Servo servo;
void setup() {
  servo.attach(10);
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
}

void loop() {
  while(true){
      int bt1=digitalRead(btn1);
  int bt2=digitalRead(btn2);
  if(bt1==HIGH){
    servo.write(180);
  delay(2000); 
    }
    else if(bt2== HIGH){
    servo.write(45);   
    delay(2000);   
      }
    }


                 
               
}
