
// Definir pines
const int buzzerPin = 8;   // Pin del buzzer

// Vector para almacenar los 10 números aleatorios
int numeros[10];

void setup() {
  // Configurar el pin del buzzer como salida
  pinMode(buzzerPin, OUTPUT);
  
  // Iniciar la comunicación serial
  Serial.begin(9600);

  // Generar números aleatorios y almacenarlos en el vector
  for (int i = 0; i < 10; i++) {
    numeros[i] = random(1, 11);  // Generar números entre 1 y 10 (11 no está incluido)
    
    // Mostrar el número generado en la consola serial
    Serial.print("Numero ");
    Serial.print(i+1);
    Serial.print(": ");
    Serial.println(numeros[i]);
    
    // Si el número es 5, hacer sonar el buzzer
    if (numeros[i] == 5) {
      tone(buzzerPin, 1000, 500); // Sonar el buzzer a 1000 Hz por 500 ms
      delay(500);                 // Esperar a que el sonido termine
    }
  }
}

void loop() {
  // No es necesario hacer nada en el loop, el código se ejecuta una sola vez en el setup()
}
