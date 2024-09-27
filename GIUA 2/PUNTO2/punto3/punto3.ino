#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int mostrarBienvenida() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Bienvenido al juego");
  lcd.setCursor(0, 1);
  lcd.print("Presiona para jugar");
  delay(3000);
  return 1; 
}

int mostrarInicioJuego() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Iniciando juego...");
  delay(2000);
  return 1; 
}

int mostrarFinJuego() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Juego terminado");
  delay(2000);
  return 1; 
}

int mostrarPuntuacion() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Puntuacion final:");
  
  int puntaje = random(1, 101); 
  
  lcd.setCursor(0, 1);
  lcd.print("Puntos: ");
  lcd.print(puntaje);
  delay(5000);
  
  return puntaje; 
}

void setup() {
  lcd.begin(16, 2); 
  
  int resultadoBienvenida = mostrarBienvenida();
  
  delay(1000);
  
  int resultadoInicio = mostrarInicioJuego();
  
  delay(5000); 

  int resultadoFin = mostrarFinJuego();
  
  int puntuacionFinal = mostrarPuntuacion(); 
}

void loop() {
  
}
