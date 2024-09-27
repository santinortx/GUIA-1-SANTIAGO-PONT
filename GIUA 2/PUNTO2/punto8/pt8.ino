void setup() {
  Serial.begin(9600);

  int num1 = 20, num2 = 5;

  if (esMultiplo(num1, num2)) {
    Serial.println("Es múltiplo");
  } else {
    Serial.println("No es múltiplo");
  }
}

void loop() {
}

bool esMultiplo(int num1, int num2) {
  return (num1 % num2 == 0);
}
