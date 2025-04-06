#include <stdio.h>
void impares(int numero);
int invertidos(int numero);

int main()
{
    int numero;
    int invertido;
    printf("Ingresa el numero:");
    scanf("%d", &numero);

    invertido = invertidos(numero);

    impares(numero, digito);

    return 0;
}

int invertidos(int numero)
{
    int invertido = 0;

    while (numero != 0)
    {
        int digito = numero % 10;

        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    return invertido;
}

void impares(int numero, int digito)
{
    int cuentaImapres = 0;
    int numeroOriginal = numero;

    while (numero != 0)
    {

        if (digito % 2 != 0)
        {
            cuentaImapres++;
        }

        numero /= 10;
    }

    printf("Impares: %d \n", cuentaImapres);
}