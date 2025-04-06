#include <stdio.h>
#include <ctype.h>

int main()
{
    char caracter;
    int tieneMayuscula = 0, tieneMinuscula = 0, tieneDigito = 0, tieneEspecial = 0;
    int longitud = 0;

    printf("Declare su contrasenia (termine con '.'): \n");
    scanf("%c", &caracter);

    while (caracter != '.')
    {

        longitud++;

        if (isupper(caracter))
            tieneMayuscula = 1;
        else if (islower(caracter))
            tieneMinuscula = 1;
        else if (isdigit(caracter))
            tieneDigito = 1;
        else if (caracter >= 33 && caracter <= 47)
            tieneEspecial = 1;

        scanf("%c", &caracter);
    }

    if (longitud >= 8 && tieneMayuscula && tieneMinuscula && tieneDigito && tieneEspecial)
    {
        printf("La contrasenia es valida\n");
    }
    else
    {
        if (!tieneMayuscula)
        {
            printf("Falta una mayuscula");
        }
        else if (!tieneMinuscula)
        {
            printf("Falta una minuscula");
        }
        else if (!tieneDigito)
        {
            printf("Falta un numero");
        }
        else if (!tieneEspecial)
        {
            printf("Falta un caracter especial");
        }
    }

    return 0;
}
