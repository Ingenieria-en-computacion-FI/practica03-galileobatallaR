#include <stdio.h>
#include "nodo.h"

int main() {
    nodo* nodopro = crearNodo(10);

    if (nodopro != NULL) {
        printf("Valor inicial: %d\n", obtenerValor(nodopro));

        asignarValor(nodopro, 25);
        printf("Nuevo valor: %d\n", obtenerValor(nodopro));

        destruirNodo(nodopro);
    }

    return 0;
}
