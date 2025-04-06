#include <stdio.h>

#include <ctype.h>//para trabajar con palabras
#include <string.h>//para trabajar con palabras
#define cant 60

int main()
{
    char name[cant];
    char apellido[cant];
    char nameApe[cant];
    int j=0;

    printf("Ingrese su nombre (Primera letra en mayuscula): ");
    gets(name); //usar esto en arrys de frase con espcaios, esto lo lee
    
    printf("Ingrese su apellido (Primera letra en mayuscula): ");
    gets(apellido); //usar esto en arrys de frase con espcaios, esto lo lee

    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i]!= ' ')
        {
            nameApe[j]=name[i];
             j++;
        }
        
       

    }

    for (int i = 0; i < strlen(apellido); i++) //string.h
    {
        if (apellido[i]!= ' '){
        nameApe[j]= apellido[i];
        j++;
        }
         
    }

    nameApe[j]='.';
    j++;
    nameApe[j]='\0';

    puts(nameApe); //usar esto en arrys de frase con espcaios, esto es salida
    
    
   
    return 0;
}
