
  
  
// Definir los pines de los LEDs en un vector
int leds[] = {2, 3, 4, 5, 6}; // Pines de los LEDs

// Cantidad de LEDs
int num_leds = 5;

// Tiempo de espera entre encendido de LEDs (milisegundos)
int delay_time = 300;

void setup() {
  // Configurar los pines de los LEDs como salidas
  for (int i = 0; i < num_leds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Encender los LEDs en secuencia (escalera de luces)
  for (int i = 0; i < num_leds; i++) {
    digitalWrite(leds[i], HIGH); // Encender LED
    delay(delay_time);           // Esperar
    digitalWrite(leds[i], LOW);  // Apagar LED
  }
  
  // Esperar antes de volver a iniciar el ciclo
  delay(500);
}
