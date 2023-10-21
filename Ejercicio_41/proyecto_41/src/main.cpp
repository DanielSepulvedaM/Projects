#include <Arduino.h>
#include <Datacapture.h>



void setup() {

  char palabra[] = "Hola que tal?";
  int longitud = 0;

  longitud = strlen(palabra);
  Serial.begin(9600); 
  Serial.print("Número de elementos de la cadena es: ");
  Serial.println(longitud);
}


void loop() {
}

