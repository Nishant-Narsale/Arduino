void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<5; i++){
    digitalWrite(8,HIGH);
    delay(100);
    digitalWrite(8,LOW);
    delay(100);
  }
  for(int i=0; i<10; i++){
    digitalWrite(7,HIGH);
    delay(100);
    digitalWrite(7,LOW);
    delay(100);
  }
  for(int i=0; i<5; i++){
    digitalWrite(4,HIGH);
    delay(100);
    digitalWrite(4,LOW);
    delay(100);
  }
}
