// C++ code
//
const int buttonPin = 2;
const int potPin1 = A0;
const int potPin2 = A1;
const int potPin3 = A2;
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  // Configuración de pines
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Esperar a que se presione el botón
  if (digitalRead(buttonPin) == LOW) {
    Serial.println("Tiene 5 s para configurar el color del led....");
    
    // Esperar 5 segundos mientras se configuran los potenciómetros
    delay(5000);
    
    // Leer los valores de los potenciómetros
    int potValue1 = analogRead(potPin1);
    int potValue2 = analogRead(potPin2);
    int potValue3 = analogRead(potPin3);
    
    // Mapear los valores a un rango de 0 a 255
    int redValue = map(potValue1, 0, 1023, 0, 255);
    int greenValue = map(potValue2, 0, 1023, 0, 255);
    int blueValue = map(potValue3, 0, 1023, 0, 255);
    
    // Mostrar los valores en el monitor serial
    Serial.print("El led esta usando esta configuración de colores RGB: ( ");
    Serial.print(redValue);
    Serial.print("; ");
    Serial.print(greenValue);
    Serial.print("; ");
    Serial.print(blueValue);
    Serial.println(" )");
    
    // Configurar el color del LED RGB
    analogWrite(redPin, redValue);
    analogWrite(greenPin, greenValue);
    analogWrite(bluePin, blueValue);
    
    // Mantener el LED encendido durante 5 segundos
    delay(5000);
    
    // Apagar el LED
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
  }
}