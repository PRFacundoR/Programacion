#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct 
{
   char nombre[MAX];
   char genero[MAX];
   char plataforma[MAX];
   int precio;

}typedef Juego;

int main() {
    Juego *arreglo = (Juego*)malloc(3*sizeof(Juego));
    
    // Obtener la cantidad de elementos en el arreglo
    int cantidad = sizeof(*arreglo);
    
    printf("El arreglo tiene %zu elementos.\n", sizeof(arreglo[0]));
    
    return 0;
}