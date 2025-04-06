#include <stdio.h>

int main(){
    int num1;
    int i = 0;
    
    while( i < 10 )
    {
    printf("\n ingrese un numero: \n");
    scanf("%d", &num1);
      if (num1 > 1 && (num1 == 2 || (num1 % 2 == 1 && num1 != 1))) {
            if (num1 == 3 || (num1 % 3 != 0)) { 
                printf("\nEs primo");
            } else {
                printf("\nNo es primo");
            }
        } else {
            printf("\nNo es primo");
        }
        
        i++;
    }
    


    return 0;
}