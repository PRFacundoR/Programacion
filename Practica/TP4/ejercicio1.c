#include <stdio.h>

int calculadora(int num1, int num2, int operacion);
int suma(int num1, int num2);
int resta(int num1, int num2);
int division(int num1, int num2);
int producto(int num1, int num2);
int potencia(int num1, int num2);
int main()
{

    int resultadoOP;
    int num1;
    int num2;
    int operacion;

    printf("ingrese dos numeros \n");
    scanf("%d %d", &num1, &num2);
    printf("ingrese el numero 1: suma, 2: resta, 3: producto, 4: division, 5: potencia \n");
    scanf("%d", &operacion);

    while (operacion != 0)
    {
        resultadoOP = calculadora(num1, num2, operacion);

        printf("Su resultado fue: %d", resultadoOP);

        printf("ingrese dos numeros \n");
        scanf("%d %d", &num1, &num2);
        printf("\n ingrese el numero 1: suma, 2: resta, 3: producto, 4: division, 5: potencia \n");
        scanf("%d", &operacion);
    }

    return 0;
}

int calculadora(int num1, int num2, int operacion)
{
    switch (operacion)
    {
    case 1:
        return suma(num1, num2);

    case 2:
        return resta(num1, num2);

    case 3:
        return division(num1, num2);

    case 4:
        return producto(num1, num2);

    case 5:
        return potencia(num1, num2);
    }
}

int suma(int num1, int num2)
{
    return num1 + num2;
}

int resta(int num1, int num2)
{
    return num1 - num2;
}

int division(int num1, int num2)
{

    int resultado = 0;

    while (num1 >= num2)
    {
        num1 = resta(num1, num2);
        resultado++;
    }
    printf("El resto es: %d \n", num1);
    return resultado;
}

int producto(int num1, int num2)
{
    int resultado = 0;

    for (int i = 0; i < num2; i++)
    {
        resultado = suma(resultado, num1);
    }
    return resultado;
}

int potencia(int num1, int num2)
{
    int resultado = 1;
    for (int i = 0; i < num2; i++)
    {

        resultado = producto(resultado, num1);
    }
    return resultado;
}