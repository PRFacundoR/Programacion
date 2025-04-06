#include <stdio.h>
#include <string.h>
#define TAMA 20

int main()
{
    char palabra[TAMA];
    char Poculta[TAMA];
    char letra;
    int j=0;
    int intentos=3;
    int acierto=1;

    printf("Este es el horcadito ingrese la palabra que quieres que adivinen :\n");
     gets(palabra);


   for (int i = 0; i < strlen(palabra); i++) {
        if ((palabra[i] >= 65 && palabra[i] <= 90) || (palabra[i] >= 97 && palabra[i] <= 122)) {
            Poculta[i] = '_';
        } 
    }
    puts( Poculta);
    
    printf(" intentos %d\n ", intentos);
    

    do
    {
    printf("ingrese una letra: ");
    fflush(stdin);
    scanf("%c", &letra);
    
      
        
        
        for(int i = 0; i < strlen(palabra); i++){
            if (letra == palabra[i])
            {
                Poculta[i]= letra;
                acierto=0;
                 puts(Poculta);

            } 
            
        } 
        if(acierto){
            intentos--;
            printf("la letra %c ",letra);
            printf(" no pertenece a la palabra");
            printf(", intentos restantes:%d\n ", intentos);
        }
        
        
       
           

        
    
    }while (intentos >0 && strcmp(palabra, Poculta) != 0);

      if (strcmp(palabra, Poculta) == 0) {
        printf("¡Has adivinado la palabra!\n");
    } else {
        printf("¡Has perdido!\n");
    }
   
    
    return 0;
}
