int button=10;
int motor=9;
int val;
void setup() {
  // put your setup code here, to run once:
  pinMode(button,INPUT);
  pinMode(motor,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(button);
  if(val==HIGH){
    digitalWrite(motor,LOW);

    }
    else{
      digitalWrite(motor,HIGH);
      }

    

}
