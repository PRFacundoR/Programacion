#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TAMA 100

int main()
{
    char *punt;

    char frase[TAMA];

    //punt=frase;
    punt=&frase[0];

    

    int *c,consonantes = 0;

    c=&consonantes;

    printf("Ingrese una frase en minuscula: ");
    gets(frase);
  

        for (int i = 0;frase[i] != '\0' && i < TAMA; i++ )
        {
            if (isalpha(frase[i]) && frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u') {
            *c=*c+1;
            frase[i] = toupper(frase[i]);  // Convertir a mayúscula
        }   
        }
    
    printf("la frase es:%s\n", frase);
    printf("cantidad de consonantes son : %d\n", consonantes);
//2)03)
    printf("\nla dirreccion de memoria de p es: %p", punt);
    printf("\nla direccion de memoria del primer elemento es:%p",&frase[0]);
    printf("\nel contenido del primer elemento es %c",frase[0]);

    //2)04)

    printf("\ncontenido de la 4ta celda:%c\n",frase[3]);
    
    printf("contenido de la 4ta celda:%c\n",*(punt+3));
      //2)05)
     printf("contenido de la 6ta celda:%c\n",*(punt+5));
      printf("contenido memoria de la 6ta celda:%p\n",(punt+5));
        //2)06)
        /*for (int i = 0; i < TAMA; i++)
        {
            printf("el indice es: %d y su contenido:%c\n ",i,punt[i]);
        }*/
        
         for (int i = 0; i < TAMA; i++)
        {
            printf("el  contenido:%c\n ",*punt);
            punt++;//se movio a elemento 100
        }
        

    return 0;
}

