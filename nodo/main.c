#include <stdio.h>
#include "nodo.h"

int main() {
    nodo* nodoM = crearNodo(10);

    if (nodoM != NULL) {
        printf("Valor inicial: %d\n", obtenerValor(nodoM));

        asignarValor(nodoM, 25);
        printf("Nuevo valor: %d\n", obtenerValor(nodoM));

        destruirNodo(nodoM);
    }

    return 0;
}
