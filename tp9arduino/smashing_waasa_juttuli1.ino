// Pines de los segmentos para ambos displays
int display1[] = {2, 3, 4, 5, 6, 7, 8};  // Pines del primer display
int display2[] = {9, 10, 11, 12, 13, A0, A1}; // Pines del segundo display

int buttonPin = A2;  // Pin del botón
int buzzerPin = A3;  // Pin del buzzer

// Segmentos para números del 1 al 6
byte numeros[7][7] = {
  {0, 0, 0, 0, 0, 0, 0}, // vacío
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
};

bool rolling = false;  // Estado de lanzamiento de los dados

void setup() {
  // Inicializamos los pines de los displays como salida
  for (int i = 0; i < 7; i++) {
    pinMode(display1[i], OUTPUT);
    pinMode(display2[i], OUTPUT);
  }
  
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Leer el estado del botón
  if (digitalRead(buttonPin) == HIGH && !rolling) {
    rolling = true;
    rollDice();  // Inicia el proceso de lanzar los dados
    rolling = false;
  }
}

// Función para mostrar un número en un display de 7 segmentos
void mostrarNumero(int display[], int numero) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(display[i], numeros[numero][i]);
  }
}

// Función para simular la tirada de los dados con animación
void rollDice() {
  // Animación rápida antes de mostrar el resultado final
  for (int i = 0; i < 10; i++) {
    int rand1 = random(1, 7);
    int rand2 = random(1, 7);
    
    mostrarNumero(display1, rand1);
    mostrarNumero(display2, rand2);
    
    delay(100);  // Delay corto para la animación
  }
  
  // Números finales
  int dado1 = random(1, 7);
  int dado2 = random(1, 7);
  
  mostrarNumero(display1, dado1);
  mostrarNumero(display2, dado2);
  
  // Verificar si el jugador ha ganado (si la suma es 7)
  if (dado1 + dado2 == 7) {
    tone(buzzerPin, 1000, 500);  // Tocar el buzzer durante 500ms
  }
}

