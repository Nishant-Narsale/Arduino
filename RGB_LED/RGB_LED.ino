
int redPin=12; 
int greenPin=10; 
int bluePin=8;
int dt=500;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redPin, HIGH);
  delay(dt);
  digitalWrite(redPin, LOW);
  delay(dt);

  digitalWrite(greenPin, HIGH);
  delay(dt);
  digitalWrite(greenPin, LOW);
  delay(dt);

  digitalWrite(bluePin, HIGH);
  delay(dt);
  digitalWrite(bluePin, LOW);
  delay(dt);

  delay(1000);
  
}
