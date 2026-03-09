#include <stdio.h>
#include "fraccion.h"

int main() 
{
    Fraccion* f1 = crearFraccion(1, 2);
    Fraccion* f2 = crearFraccion(1, 4);

    if (f1 != NULL && f2 != NULL) {
        printf("F1: ");
        imprimir(f1);
        
        printf("F2: ");
        imprimir(f2);

        Fraccion* res = sumar(f1, f2);
        printf("Suma: ");
        imprimir(res);

        destruir(f1);
        destruir(f2);
        destruir(res);
    }

    return 0;
}
