// C++ code
//
void setup()
{
  pinMode( 12, OUTPUT);
  pinMode( 7 , OUTPUT);
  pinMode( 8 , OUTPUT);
  
  pinMode( 2 , OUTPUT);
  pinMode( 4 , OUTPUT);


}

void loop()
{
    digitalWrite( 12 , HIGH );
    digitalWrite( 7 , LOW ); 
    digitalWrite( 8 , LOW ); 
  	
  	digitalWrite( 2 , HIGH );
  	digitalWrite( 4 , LOW ); 
  
  	delay(3000);
  
  	digitalWrite( 7 , LOW );
  	digitalWrite( 8 , HIGH );
  	digitalWrite( 12 , LOW );

  	digitalWrite( 2 , LOW );
  	digitalWrite( 4 , LOW ); 
  
  	delay(2000);
  
	digitalWrite( 4 , LOW );
  	digitalWrite( 7 , HIGH );
  	digitalWrite( 8 , LOW ); 
  	
    digitalWrite( 2 , LOW );
  	digitalWrite( 4 , HIGH );
  
  	delay(3000);
  
  	digitalWrite( 7 , LOW );
  	digitalWrite( 8 , HIGH );
  	digitalWrite( 12 , LOW );

  	digitalWrite( 2 , LOW );
  	digitalWrite( 4 , HIGH );
delay(2000);
}