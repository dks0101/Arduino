void setup() {
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(7, LOW);
  delay(1000);
  int i = 0;
  while(i<=4) {
    digitalWrite(7, HIGH);
    delay(200);
    digitalWrite(7, LOW);
    delay(200); 
    i=i+1;
  }
  digitalWrite(7, HIGH);
  while(1){} //infinite loop
}
