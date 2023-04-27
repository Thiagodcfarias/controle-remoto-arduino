void setup() {
  // right front wheel
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  // right rear wheel
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  // left rear wheel
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  // left front wheel
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(1000);  
}
