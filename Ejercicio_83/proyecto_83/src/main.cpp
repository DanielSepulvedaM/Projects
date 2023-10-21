#include <Arduino.h>
#include <Datacapture.h>

int numero;
int *dir_numero;

void setup() {
   Serial.begin(9600); 
  Serial.print("Digite un numero: ");
  while (!Serial.available()) {
  
  }
  numero = Serial.parseInt();

  dir_numero = &numero;

  if (*dir_numero % 2 == 0) {
    Serial.print("El numero ");
    Serial.print(*dir_numero);
    Serial.println(" es par");
    Serial.print("Posicion: ");
    Serial.println((uintptr_t)dir_numero, HEX);
  } else {
    Serial.print("El numero ");
    Serial.print(*dir_numero);
    Serial.println(" es impar");
    Serial.print("Posicion: ");
    Serial.println((uintptr_t)dir_numero, HEX);
  }
}

void loop() {
  
}
