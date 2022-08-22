int redPin=12;
int num;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter how many times LED should blink:");
  while(Serial.available()==0){
    
  }
  num=Serial.parseInt();
  Serial.print("Given number is :");
  Serial.println(num);

  for(int i=0; i<num; i++){
    digitalWrite(redPin, HIGH);
    delay(200);
    digitalWrite(redPin, LOW);
    delay(200);
  }

  delay(500);
}
