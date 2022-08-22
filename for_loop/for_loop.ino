 int redPin=8;
 int yellowPin=12;
 int redDelay=500;
 int yellowDelay=500;
 int redBlink=5;
 int yellowBlink=3;
 void setup() {
  // put your setup code here, to run once:
   pinMode(redPin, OUTPUT);
   pinMode(yellowPin, OUTPUT);
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<redBlink; i++){
    digitalWrite(redPin, HIGH);
    delay(redDelay);
    digitalWrite(redPin, LOW);
    delay(redDelay);
  }
  for(int j=0; j<yellowBlink; j++){
    digitalWrite(yellowPin, HIGH);
    delay(yellowDelay);
    digitalWrite(yellowPin, LOW);
    delay(yellowDelay);
  }
  delay(1000);
}
