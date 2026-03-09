#include <stdlib.h>
#include <stdio.h>
#include "nodo.h"

struct Nodo {
    int dato;
};

nodo* crearNodo(int valor) {
    nodo* nuevo = (nodo*)malloc(sizeof(nodo));
    if (nuevo == NULL) {
        perror("No es posible");
        return NULL;
    }
    nuevo->dato = valor;
    return nuevo;
}

int obtenerValor(nodo* n) {
    if (n == NULL) return 0; 
    return n->dato;
}

void asignarValor(nodo* n, int nuevoValor) {
    if (n != NULL) {
        n->dato = nuevoValor;
    }
}

void destruirNodo(nodo* n) {
    if (n != NULL) {
        free(n);
        printf("Ya no existe \n");
    }
}
