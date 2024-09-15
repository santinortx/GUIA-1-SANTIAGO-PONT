int buzzerPin = 8;

int frecuencias[] = {
  1976, 1397, 1865, 988, 988, 1568, 330, 659, 
  1319, 1976, 1047, 1568, 880, 554, 1568, 1047, 
  1319, 831, 1245, 294, 494, 932, 1480, 1397
};

int duraciones[] = {
  125, 125, 125, 125, 125, 125, 125, 125, 
  125, 125, 125, 125, 125, 125, 125, 125, 
  125, 125, 125, 125, 125, 125, 125, 125
};

int numNotas = sizeof(frecuencias) / sizeof(frecuencias[0]);

void setup() {
  
}

void loop() {
  
  for (int i = 0; i < numNotas; i++) {
    tone(buzzerPin, frecuencias[i]);  
    delay(duraciones[i]);             
    noTone(buzzerPin);                
    delay(50);                     
  }
  
  
  delay(1000);
}
