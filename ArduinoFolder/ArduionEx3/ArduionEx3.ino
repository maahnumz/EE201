void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  
  if (digitalRead(7) == HIGH) {
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }

  delay(1000); // 1 second delay
}
