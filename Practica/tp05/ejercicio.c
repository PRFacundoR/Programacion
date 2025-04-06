#include <string.h>

#include <stdio.h>

#include <time.h>//srand(time(NULL))



#include <stdlib.h>// para generar numeros randoms

#define TAMA 15

void cargarArreglo(int arreglo[TAMA],  int num1, int num2);
void mostrarArreglo(int arreglo[TAMA]);
int buscarMayor(int arreglo[TAMA]);
void mostrarPromedio(int arreglo[TAMA]);


int main()
{
    srand(time(NULL));
    int num1, num2;
    int arreglo[TAMA];
    int mayor;
    printf("ingrese inicio y fin");
    scanf("%d %d",&num1,&num2);

    cargarArreglo( arreglo, num1, num2);
    for (int i = 0; i < TAMA; i++)
    {
        
        if (arreglo[i] > 300)
        {
            printf("cambiar numero\n ");
           fflush(stdin);
           scanf("%d",&arreglo[i]);
        }

        
        
     
    }
   

    mostrarArreglo( arreglo);


    mayor=buscarMayor(arreglo);
    printf("\nEL numero mayor es: %d",mayor);
    

    mostrarPromedio(arreglo);

    for (int i = 0; i < TAMA; i++){
    if (arreglo[i]%2==1)
        {
            arreglo[i]+=1;
        }
    }
    
    
    return 0;
}


void cargarArreglo(int arreglo[TAMA], int num1, int num2){
    
     for (int i = 0; i < TAMA; i++)
     {
        arreglo[i]=num1 + rand() % (num2 - num1 + 1);// para generar numeros randoms
        
        
    }
    

}

void mostrarArreglo(int arreglo[TAMA]){

    for (int i = 0; i < TAMA; i++)
    {
        printf("\n %d\n",arreglo[i]);
    }
    
}

int buscarMayor(int arreglo[TAMA]){
    int aux=0;
    for (int i = 0; i < TAMA; i++)
    {
        if (arreglo[i]>aux)
        {
            aux= arreglo[i];
        }
        
    }
    return aux;
    
}
void mostrarPromedio(int arreglo[TAMA]){
    int suma=0;
    int promedio;
    for (int j = 0; j < TAMA; j++)
    {
        if (arreglo[j]%2==1)
        {
            suma= suma + arreglo[j];
        }
        
        
        
    }
    promedio= suma/TAMA;
    
    printf( "\n El promedio es: %d\n",promedio );
}




