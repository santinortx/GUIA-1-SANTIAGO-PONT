// 3: rojo    5:azul     6:verde
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  //cian
  analogWrite(3, 0);
  analogWrite(5, 255);
  analogWrite(6, 255);
  
  delay(300);
  
  analogWrite(3, 0);
  analogWrite(5, 100);
  analogWrite(6, 100);
  
  delay(300);
  
  analogWrite(3, 0);
  analogWrite(5, 50);
  analogWrite(6, 50);
  
  delay(300);
    
  //rojo
  analogWrite(3, 255);
  analogWrite(5, 0);
  analogWrite(6, 0);
  
  delay(300);
  
  analogWrite(3, 100);
  analogWrite(5, 0);
  analogWrite(6, 0);
  
  delay(300);
  
  analogWrite(3, 50);
  analogWrite(5, 0);
  analogWrite(6, 0);
  
  delay(300);
  
//amarillo
  analogWrite(3, 255);
  analogWrite(5, 0);
  analogWrite(6, 255);
  
  delay(300);
  
  analogWrite(3, 100);
  analogWrite(5, 0);
  analogWrite(6, 100);
  
  delay(300);
  
  analogWrite(3, 50);
  analogWrite(5, 0);
  analogWrite(6, 50);
  
  delay(300);
  

  
}