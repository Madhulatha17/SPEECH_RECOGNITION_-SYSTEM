void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("Ready");
}

void loop() {
  if (Serial.available() > 0) {
    char c = Serial.read();

    if (c == '1') {
      digitalWrite(13, HIGH);
      Serial.println("Device ON");
    }

    if (c == '0') {
      digitalWrite(13, LOW);
      Serial.println("Device OFF");
    }
  }
}
