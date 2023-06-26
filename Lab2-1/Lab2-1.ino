int i =0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()>0){
    char In = Serial.read();
    Serial.print("num i:");
    Serial.println(i);
    Serial.print("Count Data:");
    Serial.println(Serial.available());
    Serial.print("character:");
    Serial.println(In);
    delay(1000);
    i++;
  }

}
