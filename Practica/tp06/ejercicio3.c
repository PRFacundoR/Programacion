#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void mezclarCadenas(char *cad1, char *cad2, int pos );
#define TAMA 50
int main()
{
    char frase1[TAMA],frase2[TAMA],*cad1,*cad2;
    int pos;

    printf("Ingrese una palabra: \n");
    gets(frase1);
    
    //cad1=malloc(TAMA*sizeof(char));
    cad1=frase1;
    

    printf("\nIngrese otra palabra: \n");
    gets(frase2);
    
    //cad2=malloc(TAMA*sizeof(char));
    cad2=frase2;
    

    printf("ingrese la posicion:");
    scanf("%d", &pos);




mezclarCadenas(cad1, cad2, pos );



free(cad1);
free(cad2);

    return 0;
}

void mezclarCadenas(char *cad1, char *cad2, int pos ){
   
 for (int i = strlen(cad1); i >= pos; i--) {
        cad1[i + strlen(cad2)] = cad1[i];  // Mueve los caracteres una posición a la derecha
    }
    
    // Insertar los caracteres de cad2 en cad1 en la posición "pos"
    for (int i = 0; i < strlen(cad2); i++) {
        cad1[pos + i] = cad2[i];  // Inserta cada carácter de cad2 en cad1
    }

    // Asegurarse de que cad1 tenga el carácter nulo '\0' al final
    cad1[strlen(cad1) + strlen(cad2)] = '\0';
        
    
    printf("La frase concatenada es:");
    puts(cad1);
}