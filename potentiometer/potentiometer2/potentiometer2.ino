int voltPin = A2;
int readVal;
float voltage;
int delayTime=1000;
int redLedPin=12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(voltPin, INPUT);
  pinMode(redLedPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLedPin,LOW);
  readVal = analogRead(voltPin);
  voltage = (5./1023.)*readVal;
  Serial.print("Potentiometer voltage = ");
  Serial.println(voltage);
  if(voltage>4.0){
    digitalWrite(redLedPin,HIGH);
    Serial.println("Warning...........");
  }
  delay(delayTime);
}
