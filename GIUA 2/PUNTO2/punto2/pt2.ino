
const int trigPin = 9;
const int echoPin = 10;


long medirDistancia() {
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  
  long duracion = pulseIn(echoPin, HIGH);

  
  long distancia = duracion * 0.034 / 2; 

  return distancia;
}

void setup() {
  
  Serial.begin(9600);

  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  
  long distancia = medirDistancia();

  
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  
  delay(500);
}
