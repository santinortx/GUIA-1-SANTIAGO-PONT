// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
 analogWrite (3, 1);
  delay (1000);
 analogWrite (3, 30);
  delay (1000);
 analogWrite (3, 70);
  delay (1000);
 analogWrite (3, 80);
  delay (1000);
 analogWrite (3, 110);
    delay (1000);

  
}