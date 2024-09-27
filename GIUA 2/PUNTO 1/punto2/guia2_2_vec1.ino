int valores[] = {10, 4, 2};
int numElementos = 3;  

void setup() {
  Serial.begin(9600); 

  for (int i = 0; i < numElementos - 1; i++) {
    for (int j = 0; j < numElementos - i - 1; j++) {
      if (valores[j] > valores[j + 1]) {
        int temp = valores[j];
        valores[j] = valores[j + 1];
        valores[j + 1] = temp;
      }
    }
  }

  Serial.println("Array ordenado de menor a mayor:");
  for (int i = 0; i < numElementos; i++) {
    Serial.println(valores[i]);
  }
}

void loop() {
}