
int pin = 3;
int brightness = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pin,brightness);
  brightness = brightness+5;
  delay(100);
}
