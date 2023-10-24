void setup() {
  pinMode(12, OUTPUT);
  //Serial.begin(RATE);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(500);
  
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(500);

  //Serial.print("Testing");
}
