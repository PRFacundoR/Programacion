#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int cantNumP=0;
    int sumaI=0;
    printf("Ingrese 2 numeros:\n");
    scanf("%d %d",&num1, &num2);
    for ( int i = num1; i <= num2; i++)
    {
        if (i%2==0)
        {
             cantNumP++;
        }else{
            sumaI += i;
        }
        
       
    }
    
    printf("Cantidad de numeros pares: %d", cantNumP );
     printf("\n Suma de impares: %d", sumaI );
    return 0;
}
