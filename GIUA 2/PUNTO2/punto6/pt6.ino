int pines[] = {2, 3, 4, 5}; 

void setup() {
  Serial.begin(9600);

  // Configura los pines como OUTPUT
  for (int i = 0; i < sizeof(pines) / sizeof(pines[0]); i++) {
    pinMode(pines[i], OUTPUT);
  }

  // Llama a la función para activar los pines
  if (activarPines(pines, sizeof(pines) / sizeof(pines[0]))) {
    Serial.println("Pines activados");
  }
}

void loop() {
  // No hace nada en loop
}

bool activarPines(int pines[], int size) {
  for (int i = 0; i < size; i++) {
    digitalWrite(pines[i], HIGH);
  }
  return true;
}