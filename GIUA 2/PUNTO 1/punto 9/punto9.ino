
  
// Pines del LED RGB (pines PWM)
const int redPin = 9;   // Pin para el componente rojo
const int greenPin = 10; // Pin para el componente verde
const int bluePin = 11;  // Pin para el componente azul

// Definir los vectores de colores (L1, L2, L3)
int L1[3] = {122, 234, 21};
int L2[3] = {33, 53, 155};
int L3[3] = {200, 255, 12};

// Vector de colores que contiene los tres vectores de colores (L1, L2, L3)
int* colores[3] = {L1, L2, L3};

// Tiempo de espera entre cada cambio de color
int delayTime = 1000; // 1 segundo

void setup() {
  // Configurar los pines como salidas
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Recorrer cada vector de colores y mostrarlo en el LED RGB
  for (int i = 0; i < 3; i++) {
    // Obtener los valores RGB del vector actual
    int rojo = colores[i][0];
    int verde = colores[i][1];
    int azul = colores[i][2];

    // Mostrar el color en el LED RGB
    setColor(rojo, verde, azul);
    
    // Esperar un tiempo antes de cambiar al siguiente color
    delay(delayTime);
  }
}

// Función para configurar el color del LED RGB
void setColor(int rojo, int verde, int azul) {
  analogWrite(redPin, rojo);   // Ajustar la intensidad del color rojo
  analogWrite(greenPin, verde); // Ajustar la intensidad del color verde
  analogWrite(bluePin, azul);   // Ajustar la intensidad del color azul
}
