float valores[] = {5.4, 5.39, 5.38, 5.31, 5.21, 5.03, 4.45, 3.95, 2.6, 1.49};
int numElementos = 10;  
float maxValor;

void setup() {
  Serial.begin(9600);  
  maxValor = valores[0];
  for (int i = 1; i < numElementos; i++) {
    if (valores[i] > maxValor) {
      maxValor = valores[i];
    }
  }
  Serial.print("El numero mas grande es: ");
  Serial.println(maxValor);
}

void loop() {
  
}