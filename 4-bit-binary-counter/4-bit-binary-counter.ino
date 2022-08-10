
int myPins[4] = {7,9,11,13};

void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<sizeof(myPins)/2; i++){
    pinMode(myPins[i], OUTPUT);
  }
}

void blink1(int pin){
  digitalWrite(pin,HIGH);
  delay(1000);
  digitalWrite(pin,LOW);
  delay(500);
}

void blink2(int pin1, int pin2){
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH);
  delay(1000);
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW);
  delay(500);
}

void blink3(int pin1, int pin2, int pin3){
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  delay(1000);
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  delay(500);
}

void blink4(int pin1, int pin2, int pin3, int pin4){
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  delay(1000);
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  blink1(myPins[0]);
  blink1(myPins[1]);
  blink2(myPins[1], myPins[0]);
  blink1(myPins[2]);
  blink2(myPins[2],myPins[0]);
  blink2(myPins[2],myPins[1]);
  blink3(myPins[2],myPins[1],myPins[0]);
  blink1(myPins[3]);
  blink2(myPins[3],myPins[0]);
  blink2(myPins[3],myPins[1]);
  blink3(myPins[3],myPins[1],myPins[0]);
  blink2(myPins[3],myPins[2]);
  blink3(myPins[3],myPins[2],myPins[0]);
  blink3(myPins[3],myPins[2],myPins[1]);
  blink4(myPins[3],myPins[2],myPins[1],myPins[0]);
  delay(2000);
}
