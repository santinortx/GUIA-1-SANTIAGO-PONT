int numeros[] = {10, 20, 5, 30, 15};

void setup() {
  Serial.begin(9600);

  // Llama a la función para ordenar el vector
  int* ordenados = ordenarMayorMenor(numeros, sizeof(numeros) / sizeof(numeros[0]));

  // Imprime los números ordenados
  for (int i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++) {
    Serial.println(ordenados[i]);
  }
}

void loop() {
  // No hace nada en loop
}

int* ordenarMayorMenor(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (array[j] < array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
  return array;
}