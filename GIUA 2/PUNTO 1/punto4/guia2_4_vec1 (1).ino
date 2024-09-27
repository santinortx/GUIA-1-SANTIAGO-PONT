#define ledPin 2
int secuencia[] = {1, 0, 0, 1, 1, 0, 1, 1};  
int numElementos = 8;  

void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  for (int i = 0; i < numElementos; i++) {
    if (secuencia[i] == 1) {
      digitalWrite(ledPin, HIGH);  
    } else {
      digitalWrite(ledPin, LOW);  
    }
    
    delay(900); 
  }
}