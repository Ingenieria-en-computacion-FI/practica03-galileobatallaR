#ifndef __PELICULA_H__
#define __PELICULA_H__

typedef struct Pelicula Pelicula;

Pelicula* crearPelicula(char* titulo, char* genero);
void imprimir(Pelicula* p);
void cambiarGenero(Pelicula* p, char* nuevoGenero);
void agregarDirector(Pelicula* p, char* director);
void destruir(Pelicula* p);

#endif
