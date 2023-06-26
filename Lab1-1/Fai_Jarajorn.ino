int R = 2;
int Y = 3;
int G = 4;

void setup() {
  pinMode(R,OUTPUT);
  pinMode(Y,OUTPUT);
  pinMode(G,OUTPUT);

}

void loop() {
  digitalWrite(R,HIGH);
  delay(50);
  digitalWrite(R,LOW);
  delay(50);
  digitalWrite(Y,HIGH);
  delay(50);
  digitalWrite(Y,LOW);
  delay(50);
  digitalWrite(G,HIGH);
  delay(50);
  digitalWrite(G,LOW);
  delay(50);

}
