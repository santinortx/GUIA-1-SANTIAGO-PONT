int numeros[5];  // Vector vacío

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));  // Genera una semilla aleatoria

  // Llama a la función para llenar el vector con números aleatorios
  int* aleatorios = llenarConAleatorios(numeros, 5);

  // Imprime los números generados
  for (int i = 0; i < 5; i++) {
    Serial.println(aleatorios[i]);
  }
}

void loop() {
  // No hace nada en loop
}

int* llenarConAleatorios(int array[], int size) {
  for (int i = 0; i < size; i++) {
    array[i] = (random(0, 11)) * 10;  // Genera múltiplos de 10 entre 0 y 100
  }
  return array;
}