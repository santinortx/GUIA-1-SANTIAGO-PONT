// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);  
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(A0, INPUT);

}

void loop()
{
  int valor = analogRead( A0 );
  int newValor = map(valor,  0, 1023, 0, 255);
  Serial.print( valor);
  Serial.print(" - ");
  Serial.println(newValor);
  	
  
  analogWrite(3, 255);
  analogWrite(5, 255);
  delay(analogRead (A0));
  analogWrite(3, 0);
  analogWrite(5, 0);
  delay(analogRead (A0));
  analogWrite(6,255);
  analogWrite(9,255);
  delay(analogRead (A0));
  analogWrite(6,0);
  analogWrite(9,0);
  delay(analogRead (A0));
  Serial.println( valor);
}