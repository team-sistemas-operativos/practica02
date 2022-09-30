#ifndef PILA_H
#define PILA_H
#include <stdio.h>

typedef struct Pila
{
    // TODO: Definir los elementos necesarios para una pila
    /*
     * Recuerda que esta estructura requiere de una implementación
       basada en arreglos. Se requiere de un tope, una capacidad y
       por supuesto un arreglo.
       tope: indica la parte superior de la pila
       capacidad: indica el numero de elementos que puede tener la pila
     */
    int cabeza;
    int capacidad;
    char* arreglo;
} Pila;

// Métodos a considerar:
Pila* crea_pila(int capacidad) {
  struct Pila* pila = (struct Pila*)malloc(sizeof(struct Pila));
	pila->capacidad = capacidad; 
	pila->cabeza = -1;
	pila->arreglo = (char*)malloc(pila->capacidad*sizeof(int));
	return pila;
}

/* Método que indica si una pila está llena.
 * param: pila - el apuntador a una pila
 * return: representación numérica de booleanos.
 */
int es_llena(Pila* pila){
  return pila->cabeza == pila->capacidad-1;
}

/* Método que indica si una pila está vacía.
 * param: pila - el apuntador a una pila
 * return: representación numérica de booleanos.
 */
int es_vacia(Pila* pila){
  return pila->cabeza == -1;
}

/* Método que expulsa el primer elemento de la pila.
 * param: pila - el apuntador a una pila.
 */
void pop(Pila* pila){
  if(es_vacia(pila)){
    //printf("La pila esta vacia\n");
  }else{  
    pila->arreglo[pila->cabeza--];
    //printf("se saco el tope de la pila\n");
  }
}


/* Método que realiza la incersión de un elemento a la pila.
 * param: pila - el apuntador a una pila
 * param: elem - elemento a ser insertado
 */
void push(Pila* pila, char elem){
  if(es_llena(pila)){
    //printf("La pila esta llena\n");
  }else{
    pila->arreglo[++pila->cabeza] = elem;
    //printf("Se agrego el elemento\n");
  }
}


#endif
