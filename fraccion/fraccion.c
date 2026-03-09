#include <stdio.h>
#include <stdlib.h>
#include "fraccion.h"

struct Fraccion
{
    int numerador;
    int denominador;
};

int mcd(int a, int b)
{
    int temporal;
    while (b != 0) {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}

Fraccion* crearFraccion(int num, int den)
{
    if (den == 0) {
        return NULL;
    }

    Fraccion* f = malloc(sizeof(Fraccion));
    f->numerador = num;
    f->denominador = den;

    simplificar(f);

    return f;
}

void simplificar(Fraccion* f)
{
    int comunDivisor = mcd(f->numerador, f->denominador);
    f->numerador /= comunDivisor;
    f->denominador /= comunDivisor;
}

Fraccion* sumar(Fraccion* a, Fraccion* b)
{
    int nuevoNum = (a->numerador * b->denominador) + (a->denominador * b->numerador);
    int nuevoDen = a->denominador * b->denominador;

    return crearFraccion(nuevoNum, nuevoDen);
}

void imprimir(Fraccion* f)
{
    if (f != NULL) {
        printf("%d/%d\n", f->numerador, f->denominador);
    }
}

void destruir(Fraccion* f)
{
    free(f);
}
