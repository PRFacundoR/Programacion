#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargarNotas(float *notas, int alumnos);
float calcularPromedio(float *notas, int alumnos, float *promedio);

int main()
{
    srand(time(NULL));
    int alumnos;


    
    printf("ingrese la cantidad de alumnos que tiene su curso\n");
    scanf("%d", &alumnos);

    float *notas= malloc(alumnos * sizeof(float));
    float promedio;

    cargarNotas( notas, alumnos);

    float mejorN=calcularPromedio(notas, alumnos, &promedio);
    printf("La mejor nota es: %.2f y el promedio del curso es: %.2f\n", mejorN, promedio);

    free(notas);
    return 0;
}

void cargarNotas(float *notas, int alumnos){

    
    for (int i = 0; i < alumnos; i++) {
        // Generamos un número aleatorio en el rango de 0 a 10 con 2 decimales
        notas[i] = (rand() % 1001) / 100.0;  // rand() % 1001 nos da un número entre 0 y 1000
    }
   

}

float calcularPromedio(float *notas, int alumnos, float *promedio){
 
 float aux=0;
 float notaM=0;
    for (int i = 0; i < alumnos; i++) {
        
        aux+=notas[i];
        
    }

    *promedio=aux/alumnos;

    for (int i = 0; i < alumnos; i++)
    {
        if (notas[i]>notaM)
        {
            notaM=notas[i];
        }
        
    }
    
return notaM;
}
