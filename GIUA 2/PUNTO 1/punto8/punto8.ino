// Definición de los pines
const int buttonPin = 2;   // Pin del botón
const int ledPin = 3;      // Pin del LED

// Variables
int buttonState;           // Estado actual del botón
int sequence[5];           // Vector para guardar la secuencia de 5 entradas
int index = 0;             // Índice del vector

void setup() {
  // Configurar el pin del botón como entrada con resistencia pull-up
  pinMode(buttonPin, INPUT_PULLUP);
  
  // Configurar el pin del LED como salida
  pinMode(ledPin, OUTPUT);
  
  // Iniciar la comunicación serial
  Serial.begin(9600);
}

void loop() {
  // Encender el LED para indicar que el usuario puede interactuar
  digitalWrite(ledPin, HIGH);
  delay(1000); // Mantener el LED encendido durante 1 segundo
  
  // Leer el estado del botón
  buttonState = digitalRead(buttonPin);
  
  // Guardar el estado del botón en el vector
  sequence[index] = buttonState == LOW ? 1 : 0; // LOW significa botón presionado (debido al pull-up)
  
  // Apagar el LED
  digitalWrite(ledPin, LOW);
  delay(1000); // Mantener el LED apagado durante 1 segundo
  
  // Avanzar al siguiente índice del vector
  index++;
  
  // Si se ha completado la secuencia de 5 datos
  if (index >= 5) {
    // Mostrar la secuencia en la consola serial
    Serial.print("Secuencia: ");
    for (int i = 0; i < 5; i++) {
      Serial.print(sequence[i]);
      Serial.print(" ");
    }
    Serial.println();
    
    // Reiniciar el índice para empezar una nueva secuencia
    index = 0;
    
    // Limpiar el vector (opcional, solo para eliminar datos antiguos)
    for (int i = 0; i < 5; i++) {
      sequence[i] = 0;
    }
    
    // Pausa antes de reiniciar la secuencia
    delay(2000);
  }
}
