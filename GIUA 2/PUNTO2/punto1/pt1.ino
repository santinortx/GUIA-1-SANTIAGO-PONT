
const int buzzerPin = 8;


#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494

void setup() {
 
  Serial.begin(9600);
  
  
  Serial.println("Reproduciendo Melodía: Do Re Mi");
  
  tone(buzzerPin, NOTE_C4, 500); 
  delay(500);
  
  tone(buzzerPin, NOTE_D4, 500); 
  delay(500);
  
  tone(buzzerPin, NOTE_E4, 500); 
  delay(500);
  
  noTone(buzzerPin); 
  delay(1000); 
  
  
  Serial.println("Reproduciendo Melodía: feliz cumpleaños");
  
  tone(buzzerPin, NOTE_C4, 500); 
  delay(500);
  
  tone(buzzerPin, NOTE_C4, 500); 
  delay(500);
  
  tone(buzzerPin, NOTE_D4, 1000); 
  delay(1000);
  
  tone(buzzerPin, NOTE_C4, 1000); 
  delay(1000);
  
  tone(buzzerPin, NOTE_F4, 1000);
  delay(1000);
  
  tone(buzzerPin, NOTE_E4, 2000); 
  delay(2000);
  
  noTone(buzzerPin); 
}

void loop() {
  
}

