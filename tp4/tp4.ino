// Definir pines para sensores y LED RGB
const int LDR_PIN = A0;
const int TEMP_PIN = A1;
const int RED_PIN = 9;
const int GREEN_PIN = 10;
const int BLUE_PIN = 11;

// Definir macros para mensajes
#define MSG_LUZ "El nivel de luz actual es: "
#define MSG_TEMP " y la temperatura actual: "
#define MSG_GRADOS " ºc"

// Función para leer la temperatura del sensor TPM35
float leerTemperatura(int pin) {
  int valorAnalogico = analogRead(pin);
  float voltaje = valorAnalogico * (5.0 / 1023.0);
  float temperatura = (voltaje - 0.5) * 100; // Según la hoja de datos del TPM35
  return temperatura;
}

// Función para leer el nivel de luz del sensor LDR
int leerLuz(int pin) {
  int valorAnalogico = analogRead(pin);
  int luzInvertida = map(valorAnalogico, 0, 1023, 100, 0); // Invertir el mapa
  return luzInvertida;
}

// Función para controlar el LED RGB
void controlarLED(float temperatura, int luz) {
  if (luz >= 30 && luz <= 70) {
    if (temperatura > 90) {
      digitalWrite(RED_PIN, HIGH);
      digitalWrite(GREEN_PIN, LOW);
      digitalWrite(BLUE_PIN, LOW);
    } else if (temperatura < 18) {
      digitalWrite(RED_PIN, LOW);
      digitalWrite(GREEN_PIN, LOW);
      digitalWrite(BLUE_PIN, HIGH);
    } else {
      digitalWrite(RED_PIN, LOW);
      digitalWrite(GREEN_PIN, HIGH);
      digitalWrite(BLUE_PIN, LOW);
    }
  } else {
    digitalWrite(RED_PIN, LOW);
    digitalWrite(GREEN_PIN, LOW);
    digitalWrite(BLUE_PIN, LOW);
  }
}

void setup() {
  // Configurar pines de entrada y salida
  pinMode(LDR_PIN, INPUT);
  pinMode(TEMP_PIN, INPUT);
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  
  // Iniciar comunicación serial
  Serial.begin(9600);
}

void loop() {
  // Leer sensores
  float temperatura = leerTemperatura(TEMP_PIN);
  int luz = leerLuz(LDR_PIN);
  
  // Mostrar datos en el monitor serial
  Serial.print(MSG_LUZ);
  Serial.print(luz);
  Serial.print(MSG_TEMP);
  Serial.print(temperatura);
  Serial.println(MSG_GRADOS);
  
  // Controlar LED RGB
  controlarLED(temperatura, luz);
  
  // Esperar un segundo antes de la siguiente lectura
  delay(1000);
}
