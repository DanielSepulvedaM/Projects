#include <Arduino.h>
#include <DataCapture.h>

struct Nodo {
  int dato;
  Nodo* siguiente;
};

Nodo* lista = NULL;

void insertarLista(Nodo*& lista, int n) {
  Nodo* nuevo_nodo = new Nodo();
  nuevo_nodo->dato = n;
  Nodo* aux1 = lista;
  Nodo* aux2 = NULL;

  while (aux1 != NULL && aux1->dato < n) {
    aux2 = aux1;
    aux1 = aux1->siguiente;
  }

  if (lista == aux1) {
    lista = nuevo_nodo;
  } else {
    aux2->siguiente = nuevo_nodo;
  }

  nuevo_nodo->siguiente = aux1;
  Serial.begin(9600); 
  Serial.print("\tElemento ");
  Serial.print(n);
  Serial.println(" Insertado en la lista correctamente");
}

void setup() {
  int dato;
  Serial.begin(9600); 
  Serial.print("Digite un número: ");
  while (!Serial.available()) {
  }
  dato = Serial.parseInt();

  insertarLista(lista, dato);
}

void loop() {
}
