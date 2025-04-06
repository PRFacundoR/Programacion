#include <stdio.h>

int cantTV= 0,cantA= 0,cantE= 0,cantO= 0;
char frase;

int main(){
    printf("ingrese una frase con punto: \n");
    scanf("%c", &frase);
    while (frase != '.')
    {
            switch (frase)
            {
            case 'a':
            cantA++;
                break;
            case 'e':
            cantE++;
                break;
            case 'o':
            cantO++;
                break;
            default:
                break;
            }
        
        cantTV= cantA + cantE + cantO;

        scanf("%c", &frase);
       
    }
    
    printf("cantidad de A: %d \n", cantA );

    printf("cantidad de E: %d \n", cantE );

    printf("Dcantidad de O: %d \n", cantO );

    printf("cantidad de vocales abierta: %d ", cantTV );
    return 0;
}