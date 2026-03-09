#ifndef NODO_H
#define NODO_H


typedef struct Nodo nodo;

nodo* crearNodo(int valor);
int obtenerValor(nodo* n);
void asignarValor(nodo* n, int nuevoValor);
void destruirNodo(nodo* n);

#endif
