int buzzPin=9;
int dt=500;
int dt2=50;
int potval=0;
int potPin=A2;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
  pinMode(potPin, INPUT);
}

void buzz(){
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
    delay(dt);
}

void loop() {
  // put your main code here, to run repeatedly:
  potval = analogRead(potPin);
  Serial.println(potval);

  while(potval>500){
    buzz();
    potval = analogRead(potPin);
    Serial.println(potval);
  }

}
