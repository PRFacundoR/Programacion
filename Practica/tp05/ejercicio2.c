#include <stdio.h>

#include <ctype.h> //para trabajar con palabras
#include <string.h>//para trabajar con palabras

#define cant 30

int main()
{
    int may = 0, min = 0, num = 0, longitud = 8;
    char pass[cant];
    char passOk[cant];

    printf("Ingrese su nueva contraseña: ");
    scanf("%s", pass);  // Lectura de la contraseña como cadena, sin espacion solo en contraseñas;

    int longitudActual = strlen(pass);  // Calculamos la longitud de la contraseña ingresada
    printf("Longitud de la contraseña: %d\n", longitudActual);

    // Verificar si cumple con los requisitos de mayúsculas, minúsculas y números
    
    while (strcmp(pass, passOk) !=0)
    {
       
    
    
    for (int i = 0; i < longitudActual; i++)
    {
        if (isupper(pass[i]))
        {
            may = 1;  // Hay al menos una mayúscula
        }
        
        if (islower(pass[i]))
        {
            min = 1;  // Hay al menos una minúscula
        }
        if (isdigit(pass[i]))
        {
            num = 1;  // Hay al menos un número
        }
    }

    // Verificar la longitud de la contraseña fuera del bucle
    if (longitudActual >= longitud && may == 1 && min == 1 && num == 1)
    {
        printf("La contraseña cumple los requisitos.\n");
        printf("Reingrese la contraseña para validar: ");
        scanf("%s", passOk);  // Lectura de la segunda contraseña

        // Comparar ambas contraseñas
        if (strcmp(pass, passOk) == 0)
        {
            printf("Las contraseñas son iguales.\n");
        }
        else
        {
            printf("Las contraseñas no coinciden.\n");
        }
    }
    else
    {
        // Mostrar los errores en caso de que no cumpla con los requisitos
        if (longitudActual < longitud)
            printf("Error: La contraseña es demasiado corta.\n");
        if (may == 0)
            printf("Error: La contraseña debe contener al menos una mayúscula.\n");
        if (min == 0)
            printf("Error: La contraseña debe contener al menos una minúscula.\n");
        if (num == 0)
            printf("Error: La contraseña debe contener al menos un número.\n");
    }

    }

    return 0;
}

