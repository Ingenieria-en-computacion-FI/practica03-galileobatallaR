#ifndef __FRACCION_H__
#define __FRACCION_H__

typedef struct Fraccion Fraccion;

Fraccion* crearFraccion(int num, int den);
void simplificar(Fraccion* f);
Fraccion* sumar(Fraccion* a, Fraccion* b);
void imprimir(Fraccion* f);
void destruir(Fraccion* f);

#endif
