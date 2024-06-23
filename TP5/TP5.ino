#define PIR_PIN 2
#define TRIG_PIN 9
#define ECHO_PIN 10
#define RED_PIN 3
#define GREEN_PIN 4
#define BLUE_PIN 5
#define BUZZER_PIN 6

#define SAFE_DISTANCE 100  // Umbral de 1 metro (100 cm)

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int pirState = digitalRead(PIR_PIN);

  // Medición de distancia
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  float duration = pulseIn(ECHO_PIN, HIGH);
  float distance = duration * 0.034 / 2;

  if (pirState == HIGH) {
    if (distance < SAFE_DISTANCE) {
      // Estado de alerta
      analogWrite(RED_PIN, 255);  // Rojo
      analogWrite(GREEN_PIN, 0);
      analogWrite(BLUE_PIN, 0);
      tone(BUZZER_PIN, 2000, 500); // Alarma fuerte
    } else {
      // Estado activo
      analogWrite(RED_PIN, 255);  // Amarillo
      analogWrite(GREEN_PIN, 255);
      analogWrite(BLUE_PIN, 0);
      tone(BUZZER_PIN, 1000, 500); // Alarma suave
    }
  } else {
    // Estado seguro
    analogWrite(RED_PIN, 0);
    analogWrite(GREEN_PIN, 255);  // Verde
    analogWrite(BLUE_PIN, 0);
    noTone(BUZZER_PIN);
  }

  delay(100);
}

}
