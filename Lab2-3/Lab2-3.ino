void setup() {
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);

  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  if (Serial.available() > 0) {
    char key = Serial.read();
    if (key == 'a') {
      analogWrite(A0, 255); // Set A0 to maximum brightness
      analogWrite(A1, 0);   // Set A1 to minimum brightness
      analogWrite(A2, 0);   // Set A2 to minimum brightness
      delay(500);
    } else if (key == 's') {
      analogWrite(A0, 0);   // Set A0 to minimum brightness
      analogWrite(A1, 255); // Set A1 to maximum brightness
      analogWrite(A2, 0);   // Set A2 to minimum brightness
      delay(500);
    } else if (key == 'd') {
      analogWrite(A0, 0);   // Set A0 to minimum brightness
      analogWrite(A1, 0);   // Set A1 to minimum brightness
      analogWrite(A2, 255); // Set A2 to maximum brightness
      delay(500);
    } else if (key == 'f') {
      analogWrite(A0, 255); // Set A0 to maximum brightness
      analogWrite(A1, 255); // Set A1 to maximum brightness
      analogWrite(A2, 255); // Set A2 to maximum brightness
      delay(500);
    }
  }
}
