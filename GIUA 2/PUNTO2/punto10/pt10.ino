int pines[] = {2, 3, 4, 5}; 

void setup() {
  Serial.begin(9600);

  if (configurarPines(pines, sizeof(pines) / sizeof(pines[0]), OUTPUT)) {
    Serial.println("Pines configurados como OUTPUT");
  }
}

void loop() {
}

bool configurarPines(int pines[], int size, int modo) {
  for (int i = 0; i < size; i++) {
    pinMode(pines[i], modo);
  }
  return true;
}