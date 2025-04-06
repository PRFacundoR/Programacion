#include <stdio.h>
#include <ctype.h>
#include <time.h> //srand(time(NULL))

#include <stdlib.h> // para generar numeros randoms
#include <math.h>
#include <string.h>

/*#define TAMA 15
void cargarArreglo(int arreglo[TAMA], int num1, int num2);
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

    cargarArreglo( arreglo,num1, num2);

    for (int i = 0; i < TAMA; i++)
    {
        if (arreglo[i]>300)
        {
            printf("ingrese otro numero\n");
            scanf("%d",&arreglo[i]);
        }

    }
    mostrarPromedio(arreglo);
    mayor=buscarMayor(arreglo);



    return 0;
}

void cargarArreglo(int arreglo[TAMA], int num1, int num2){

    for (int i = 0; i < TAMA; i++)
    {
       arreglo[i]=num1 + rand() % (num2 - num1 + 1);// para generar numeros randoms


   }


}

int buscarMayor(int arreglo[TAMA]){

    int aux=0;

    for (int i = 0; i < TAMA; i++)
    {
        if (aux<arreglo[i])
        {
            aux=arreglo[i];
        }

    }

    return aux;

}

void mostrarArreglo(int arreglo[TAMA]){

    for (int i = 0; i < TAMA; i++)
    {
        printf("\n %d\n",arreglo[i]);
    }

}
void mostrarPromedio(int arreglo[TAMA]){
    int aux=0, prom,j=0;
    for (int i = 0; i < TAMA; i++)
    {
        if(i%2!=1){
            aux+=arreglo[i];
            j++;
        }
    }
    prom=aux/j;
    printf("el promedio es:%d",prom);
}*/

/*#define TAMA 15
int main() //ejercicio 2
{
    char frase[TAMA], frase1[TAMA];
    int cant=0,lon=0,M=0,m=0,n=0,cE=0;
    printf("ingrese su contrasenia");
    scanf("%s",&frase);


    for (int i = 0; i < strlen(frase); i++)

    {
        cant++;
        if (cant>=8)
        {
            lon=1;
        }
        if(isupper(frase)){
                M=1;
        }
        if (islower(frase))
        {
            m=1;
        }if (isdigit(frase))
        {
            n=1;
        }
        if (ispunct(frase))
        {
            cE=1;
        }


        scanf("%c",&frase);

    }
        printf("ingrese nuevamente su contrasenia");
        scanf("%s",&frase1);

    if (lon!=1)
    {
        printf("Faltan caracteres");
    }
    if (M!=1)
    {
        printf("Falta poner letra mayuscula");
    }

    if (m!=1)
    {
        printf("Falta poner letra minuscula");
    }
    if(n!=1){
        printf("Falta poner un numero");
    }
    if(cE!=1){
        printf("Falta poner un caracter especial");

    }



    if (lon==1 && M==1 && m==1 && cE==1 && strcmp(frase,frase1)==0)
    {
        printf("contrasenia correcta");
    }


    return 0;
}*/

/*#define TAMA 100 ejercicio 3 a y b

int main()
    {
        char nom[TAMA],ape[TAMA],apenom[TAMA],nombre[TAMA],aux[TAMA];
        int i,j=0;

       /* printf("Ingrese su nombre\n");
        gets(nom);
        printf("\n Ingrese su apellido\n");
        gets(ape);*/

/*for (i = 0; i < strlen(nom); i++)
{
    apenom[i]=ape[i];
}

apenom[i]=',';
i++;
apenom[i]=' ';
i++;

for (int j = 0; j < strlen(ape); j++ ,i++)
{
    apenom[i]=nom[j];
}
apenom[i] = '\0';
printf("\nNombre completo: %s\n", apenom);*/

/* printf("Ingrese su nombre completo\n");
 gets(nombre);

 for (int i = 0; i < strlen(nombre); i++,j++)
 {
     if (nombre[i]!=' ')
     {

         aux[j]=nombre[i];

     }else{
         j--;
     }

 }

 aux[j]='.';
 printf("\nNombre completo: %s\n", aux);
 return 0;

}*/

/*//saber bien esto de matrices ejercicio 4

#define FILAS 2
#define COLUMNAS 2
void generarMatriz(int min, int max, int matriz[FILAS][COLUMNAS]);
void mostrarMatriz( int matriz[FILAS][COLUMNAS]);

int main()
{

    int matrizA[FILAS][COLUMNAS],matrizB[FILAS][COLUMNAS],suma[FILAS][COLUMNAS], min, max;

    printf("Ingrese dos numeros\n");
    scanf("%d %d", &min, &max);

    if (min>max)
    {
        int temp=min;
        min=max;
        max=temp;

    }


    generarMatriz(min,  max, matrizA);
    mostrarMatriz(matrizA);
    printf("\n");
    generarMatriz(min,  max, matrizB);
    mostrarMatriz(matrizB);

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            suma[i][j]=matrizA[i][j]+matrizB[i][j];
        }

    }

    printf("\n");
    mostrarMatriz(suma);


    return 0;
}


void generarMatriz(int min, int max, int matriz[FILAS][COLUMNAS]){

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            matriz[i][j]=min+rand()%(max - min + 1);
        }

    }

}

void mostrarMatriz( int matriz[FILAS][COLUMNAS]){

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j< COLUMNAS; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}*/

// Ejercicio 5

/*#define TAMA 20
int main()
{
    char aux[TAMA], frase[TAMA], letra;
    int inte = 3, auxi;

    printf("Ingrse una frase\n");
    gets(frase);

    for (int i = 0; i < strlen(frase); i++)
    {
        aux[i] = '_';
    }
    puts(aux);

    while (inte > 0)
    {
        printf("\n ingrese una letra para descubrir la palabra tienes %d intentos\n", inte);
        fflush(stdin);
        scanf("%c", &letra);

        auxi = 1;

        for (int i = 0; i < strlen(frase); i++)
        {

            if (letra == frase[i])
            {
                aux[i] = letra;
                puts(aux);
                auxi = 0;
            }
        }

        if (strcmp(frase, aux) == 0)
        {
            break;
        }

        if (auxi)
        {
            inte--;
            printf("\n  te quedan %d intentos\n", inte);
        }
        else
        {
            printf("\n  te quedan %d intentos\n", inte);
        }
    }

    if (inte > 0)
    {

        printf("ganaste");
    }
    else
    {
    }

    printf("LA palabra era: ");
    puts(frase);
    return 0;
}*/



//ejercicio 6



