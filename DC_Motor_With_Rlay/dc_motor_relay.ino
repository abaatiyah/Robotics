int val=10;
int val2=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(val,OUTPUT);
  pinMode(val2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(val,HIGH);
  digitalWrite(val2,HIGH);
  delay(5000);
  digitalWrite(val,LOW);
   digitalWrite(val2,LOW);
  delay(5000);

}
