const int pirPin = 7;    
const int ledPin = 13;

int detectarMovimiento() {
  
  int movimiento = digitalRead(pirPin);
  
  if (movimiento == HIGH) {
    digitalWrite(ledPin, HIGH);  
    Serial.println("Movimiento detectado: LED encendido");
    return 1;  
  } 
  else {
    digitalWrite(ledPin, LOW);   
    Serial.println("Sin movimiento: LED apagado");
    return 0;  
  }
}

void setup() {
  Serial.begin(9600); 
  pinMode(pirPin, INPUT);  
  pinMode(ledPin, OUTPUT); 
  digitalWrite(ledPin, LOW); 
}

void loop() {
  int movimientoDetectado = detectarMovimiento(); 
  
  delay(500);  
}
