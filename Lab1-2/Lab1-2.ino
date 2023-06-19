int B = A2;
int G = A1;
int R = A0;

void setup() {
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);

}

void loop() {
  setColor(255, 0, 0); // Red Color
  delay(50);
  setColor(0, 255, 0); // Green Color
  delay(50);
  setColor(0, 0, 255); // Blue Color
  delay(50);
  setColor(255, 255, 255); // White Color
  delay(50);
  setColor(255, 0, 255); // Purple Color
  delay(50);
  setColor(0, 255, 255); // Cyan Color
  delay(50);
  setColor(255, 255, 0); // Yellow Color
  delay(50);

}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(R,redValue);
  analogWrite(G,greenValue);
  analogWrite(B,blueValue);
}
