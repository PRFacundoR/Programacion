#include <stdio.h>
#define FILAS 2
#define COLUMNAS 2

void crearMatriz(int matriz[FILAS][COLUMNAS]);
void mostrar(int matriz[FILAS][COLUMNAS]);
void sumarMatrices(int matriz1[FILAS][COLUMNAS], int matriz2[FILAS][COLUMNAS], int resultado[FILAS][COLUMNAS]);

int main() {
    int matriz1[FILAS][COLUMNAS];
    int matriz2[FILAS][COLUMNAS];
    int resultado[FILAS][COLUMNAS];

    
    printf("crea la matriz A: ");
    crearMatriz(matriz1);
    printf("Matriz A:");
    mostrar(matriz1 );

    printf("crea la matriz B: ");
    crearMatriz(matriz2);
    printf("Matriz B:");
    mostrar(matriz2 );

    printf("Suma de matriz A + B");
    sumarMatrices(matriz1, matriz2, resultado);
    mostrar(resultado);

    return 0;
}

    
 void crearMatriz(int matriz[FILAS][COLUMNAS]){
 
 // Pide al usuario que ingrese los valores para la matriz
    printf("Ingrese los valores para la matriz (%d filas y %d columnas):\n", FILAS, COLUMNAS);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);  // Lee el valor del usuario
        }
    }
 }

void mostrar(int matriz[FILAS][COLUMNAS] ){
    // Muestra la matriz
    printf("\nMatriz:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void sumarMatrices(int matriz1[FILAS][COLUMNAS], int matriz2[FILAS][COLUMNAS], int resultado[FILAS][COLUMNAS]){

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            resultado[i][j]= matriz1[i][j]+matriz2[i][j];
        }
        
    }
    
}