int readPin = A3;
int voltage = 0;
float actualVoltage = 0;
int delayTime = 200;


void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  voltage = analogRead(readPin);
  // analogRead gives number between 0 to 1023 corresponding to voltage which is in range 0 to 5 volts
  actualVoltage = (5./1023.)*voltage;
  Serial.println(actualVoltage);
  delay(delayTime);
}
