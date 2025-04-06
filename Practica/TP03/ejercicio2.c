#include <stdio.h>

int contL= 0, contC=50, cont=0;
char frase, espacio=' ';

int main(){
    printf("ingrese una frase con punto: \n");
    scanf("%c", &frase);
    while (frase != '.')
    {
        if(frase != ' '){//incrementa el contador
            cont++;
        }else{
            if (cont<contC){//al llegar a un espacio compara y asigna el valor a contador corto
                contC=cont;
            }
        }
        if(cont>contL){//compara y asigna el valor a contador largo
            contL=cont;
        }
        if(frase == ' '){//al llegar a un espacio el contador se vuelve 0
            cont = 0;
        }
        scanf("%c", &frase);
    }
    
    printf("La palabra mas larga tiene: %d\n", contL);
    printf("La palabra mas corta tiene: %d", contC);
    
    return 0;
}

