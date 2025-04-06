#include <stdio.h>

int main()
{
    char categoria;
    float sueldoB,sueldoF=0;
    float GTS = 0; // gastos totales en sueldo
    int antiguedad, titulo;

    
    printf("Ingrese 1 si tiene titulo, 0 si no lo tiene \n");
    scanf("%d", &titulo);
    printf("Ingrese la cantidad de años trabajados: \n");
    scanf("%d", &antiguedad);
    printf("ingrese la categoria a:administrativo, g:gerencial, m:maestranza \n");
    scanf(" %c", &categoria);
    while (categoria != 'q')
    {

        switch (categoria)
        {
        case 'g':
            sueldoB = 350000;
            break;

        case 'a':
            sueldoB = 250000;
            break;

        case 'm':
            sueldoB = 100000;
            break;
        }

        if (antiguedad >=1 )
        {
            sueldoF = sueldoB + sueldoB*0.02* antiguedad;
        }

        if (titulo == 1 && (categoria == 'a' || categoria == 'g'))
        {
            sueldoF += sueldoB*0.25;
        }
        else if (categoria == 'm')
        {
            sueldoF += sueldoB*0.15;
        }

        sueldoF+= sueldoB*0.12;
        
        GTS += sueldoF;

        switch (categoria)
        {
        case 'g':
            printf("\n El sueldo de la categoria gerencial es: %f", sueldoF);
            break;

        case 'a':
            printf("\n El sueldo de la categoria administrativo es: %f", sueldoF);
            break;

        case 'm':
            printf("\n El sueldo de la categoria maestranza es: %f", sueldoF);
            break;
        }
        printf("\n Ingrese 1 si tiene titulo, 0 si no lo tiene \n");
        scanf("%d", &titulo);
        printf("\n Ingrese 1 si tiene antiguedad, 0 si no la tiene \n");
        scanf("%d", &antiguedad);
        printf("\n ingrese la categoria a:administrativo, g:gerencial, m:maestranza \n");
        scanf(" %c", &categoria);
    }

    printf("Gastos generados por la empresa: %f", GTS);
    return 0;
}
