void setup() {
   Serial.begin(9600);
   pinMode(12,INPUT);

}

void loop() {
  int sw = digitalRead(12);
  if(sw == 1){
    Serial.println("Hello World");
    delay(500);
    
  }
  else{
      Serial.println("Good Bye");
      delay(500);
    }
    
  

}
