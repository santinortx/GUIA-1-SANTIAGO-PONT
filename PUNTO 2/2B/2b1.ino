// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
analogWrite(3,0);
analogWrite(5,50);
analogWrite(6,100);
analogWrite(9,200);
analogWrite(10,255);

delay(2000);
  
analogWrite(10,0);
delay (1000);
 
analogWrite(9,0);
delay (1000); 
 
analogWrite(6,0);
delay (1000);
 
analogWrite(5,0);
delay (1000);
 
analogWrite(3,0);
delay (1000);
 

}