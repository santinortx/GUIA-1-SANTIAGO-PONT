int valores[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int numElementos = 10; 
int suma = 0;
float media;

void setup() {
  Serial.begin(9600);  
  
  for (int i = 0; i < numElementos; i++) {
    suma += valores[i];
  }
  media = (float)suma / numElementos;
  
  Serial.print("La media es: ");
  Serial.println(media);
}

void loop() {

}