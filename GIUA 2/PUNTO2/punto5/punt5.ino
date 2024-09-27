

int lanzarDado(int lados) {
  if (lados < 1) {
    return -1;  
  }
  
  int resultado = random(1, lados + 1); 
  return resultado;
}

void setup() {
  Serial.begin(9600); 
  randomSeed(analogRead(0)); 
  
  int ladosDado = 6; 
  int resultado = lanzarDado(ladosDado);
  
  Serial.print("Resultado del dado de ");
  Serial.print(ladosDado);
  Serial.print(" lados: ");
  Serial.println(resultado);
}

void loop() {
  
}
