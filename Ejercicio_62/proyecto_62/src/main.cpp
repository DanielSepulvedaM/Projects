#include <Arduino.h>
#include <Datacapture.h>

   
   struct Etapas{
    int horas;
    int minutos;
    int segundos;
    }et[100];
    int n_etapas;
    int horasT = 0;
    int minutosT = 0;
    int segundosT = 0;

void setup() {
 Serial.begin(9600); 
  Serial.println("Digite el numero de etapas: ");
  while (!Serial.available()) {
 
  }
  n_etapas = Serial.parseInt();
  
  for (int i = 0; i < n_etapas; i++) {
    Serial.println("Horas: ");
    while (!Serial.available()) {
    }
    et[i].horas = Serial.parseInt();
    
    Serial.println("Minutos: ");
    while (!Serial.available()) {
    }
    et[i].minutos = Serial.parseInt();
    
    Serial.println("Segundos: ");
    while (!Serial.available()) {
    }
    et[i].segundos = Serial.parseInt();
    
    horasT = horasT + et[i].horas;
    minutosT = minutosT + et[i].minutos;
    
    if (minutosT >= 60) {
      minutosT -= 60;
      horasT++;
    }
    
    segundosT = segundosT + et[i].segundos;
    
    if (segundosT >= 60) {
      segundosT -= 60;
      minutosT++;
    }
  }
  
  Serial.println("\nTiempo total empleado");
  Serial.print("Horas: ");
  Serial.println(horasT);
  Serial.print("Minutos: ");
  Serial.println(minutosT);
  Serial.print("Segundos: ");
  Serial.println(segundosT);
}


void loop() {
}


