#define RED 3
#define GREEN 5
#define BLUE 6
#define BUZZ 7
#define ECO 9
#define TRIG 8
#define distancia_segura 150
#define MSG(mensaje,valor) Serial.print(mensaje); Serial.println(valor);
int homero;
char letra;
float pi;
bool existe; //dos valores V O F
String palabra;

//instanciar
int cero = 0;
bool apretado = false;

void setup()
{
   
    pinMode( 4,INPUT_PULLUP); //SIN NADA
    pinMode(GREEN, OUTPUT);
    pinMode(RED, OUTPUT);
    pinMode(BLUE  , OUTPUT);
    pinMode(ECO  , INPUT);
    pinMode(TRIG , OUTPUT);
	pinMode(BUZZ, OUTPUT);
  	Serial.begin(9600);
  	

	pi = 3.14;
  	pi = 3.0;
  	homero = 80;
  	palabra = "parlante" ;
  	letra = '?' ;
  	existe = false;
}
void loop()
{

  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);


float tiempo = pulseIn(ECO , HIGH ); //cuanto tiempo tarda de su valor inicial a otro diferente
float distancia = tiempo / 57.6;
MSG("La distancia es:",distancia)	

if(digitalRead(4) == LOW)
 {
   apretado= !apretado;
   delay(500);
 }
 
  if(distancia > 150)
  {
	digitalWrite(GREEN,1);
  }else
  {
	digitalWrite(GREEN,0);
  }
	
  if(distancia >50 or distancia == 150)
  {
	digitalWrite(BLUE,1);
  }else
  {
	digitalWrite(BLUE,0);
  }

	  if(distancia > 150)
  {
	digitalWrite(GREEN,1);
  }else();
  {
	digitalWrite(GREEN,0);
}
