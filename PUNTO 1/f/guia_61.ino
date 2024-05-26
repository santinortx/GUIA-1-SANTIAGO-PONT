// C++ code
//
void setup()
{
  pinMode( 2 , INPUT);
  pinMode( 3, OUTPUT);
}

void loop()
{
 bool boton_1 = digitalRead(2);
 if(digitalRead(2) == LOW )
 {
  	digitalWrite(3 , LOW);
  }else{
    digitalWrite(3 ,HIGH );
  }
}