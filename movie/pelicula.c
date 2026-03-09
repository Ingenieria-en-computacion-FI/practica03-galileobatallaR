#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pelicula.h"


struct Pelicula
{
char* titulo;
char* genero;
char* directores[10];
int numDirectores;
};

char* copiarCadena(char* str)
{
   char* copia = malloc(strlen(str)+1);
   strcpy(copia,str);
   return copia;
}

Pelicula* crearPelicula(char* titulo, char* genero)
{   
   Pelicula* p = malloc(sizeof(Pelicula));
   
   p->genero = copiarCadena(genero);
   p->titulo = copiarCadena(titulo);
   p->numDirectores = 0;

    return p;
}

void imprimir(Pelicula* p)
{
   printf("Titulo: %s\n",p->titulo);
   printf("Genero: %s\n",p->genero);

   printf("Directores:\n");

   for(int i=0;i<p->numDirectores;i++){
   printf("- %s\n",p->directores[i]);
    }
}

void cambiarGenero(Pelicula* p, char* nuevoGenero)
{
   free(p->genero);
    p->genero = copiarCadena(nuevoGenero);
}

void agregarDirector(Pelicula* p, char* director)
{
   if(p->numDirectores >= 10){
   printf("Max de directores alcanzado\n");
   return;
   
}

    p->directores[p->numDirectores] = copiarCadena(director);
    p->numDirectores++;
}

void destruir(Pelicula* p)
{
 free(p->titulo);
    free(p->genero);

    for(int i=0;i<p->numDirectores;i++){
        free(p->directores[i]);
    }

    free(p);
}
