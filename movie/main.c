#include <stdio.h>
#include <string.h>
#include "pelicula.h"

int main(){

    char titulo[100];
    char genero[100];
    char director[100];
    int n;

    printf("Titulo de la pelicula: ");
    fgets(titulo,100,stdin);
    titulo[strcspn(titulo,"\n")] = 0;

    printf("Genero de la pelicula: ");
    fgets(genero,100,stdin);
    genero[strcspn(genero,"\n")] = 0;

    Pelicula* p = crearPelicula(titulo,genero);

    printf("Cuantos directores tiene? ");
    scanf("%d",&n);
    getchar();

    for(int i=0;i<n;i++){
        printf("Director %d: ",i+1);
        fgets(director,100,stdin);
        director[strcspn(director,"\n")] = 0;
        agregarDirector(p,director);
    }

    printf("\n-- Pelicula original --\n");
    imprimir(p);

    int opcion;

    printf("\n1 Cambiar genero\n");
    printf("2 Agregar director\n");
    printf("Selecciona opcion: ");
    scanf("%d",&opcion);
    getchar();

    if(opcion == 1){

        printf("Nuevo genero: ");
        fgets(genero,100,stdin);
        genero[strcspn(genero,"\n")] = 0;

        cambiarGenero(p,genero);

    }else if(opcion == 2){

        printf("Nuevo director: ");
        fgets(director,100,stdin);
        director[strcspn(director,"\n")] = 0;

        agregarDirector(p,director);
    }

    printf("\n-- Pelicula modificada --\n");
    imprimir(p);

    destruir(p);

    printf("\nMemoria liberada.\n");

    return 0;
}
