#include <stdio.h>
#include <math.h>
float Acuadrado(float lado);
float Arectangulo(float base, float altura);
float Acirculo(float radio);
float AtrianguloEqui(float lados);
float Pcuadrado(float lado);
float Prectangulo(float base, float altura);
float Pcirculo(float radio);
float PtrianguloEqui(float lados);

int main()
{
    float lado, base, altura, radio, lados, Ac, Ar, AC, AtE, Pc, Pr, PC, PtE;
    char figura;
    printf("Para calcular las siguientes areas y perimetros, eliga las siguientes letras: (c: cuadrado, r: rectangulo, C: circulo, t: triangulo equilatero)\n");
    scanf(" %c", &figura);
    while (figura != 'P')
    {

        switch (figura)
        {
        case 'c':
            printf("ingrese la longitud de un lado");
            scanf("%d", &lado);
            Ac=Acuadrado(lado);
            Pc=Pcuadrado(lado);
            printf("Area del cuadrado: %.2f\n", Ac);
            printf("Perimetro del cuadrado: %.2f\n", Pc);
            break;

        case 'r':
            printf("Ingrese la base y altura del rectAngulo (base altura): ");
            scanf("%f %f", &base, &altura);
            Ar = Arectangulo(base, altura);
            Pr = Prectangulo(base, altura);
            printf("Area del rectAngulo: %.2f\n", Ar);
            printf("Perimetro del rectAngulo: %.2f\n", Pr);
            break;

        case 'C':
            printf("Ingrese el radio del circulo: ");
            scanf("%f", &radio);
            AC = Acirculo(radio);
            PC = Pcirculo(radio);
            printf("Area del circulo: %.2f\n", AC);
            printf("Perimetro del circulo: %.2f\n", PC);
            break;

        case't':
            printf("Ingrese la longitud de un lado del triAngulo equilAtero: ");
            scanf("%f", &lados);
            AtE = AtrianguloEqui(lados);
            PtE = PtrianguloEqui(lados);
            printf("area del triAngulo equilAtero: %.2f\n", AtE);
            printf("Perimetro del triangulo equilAtero: %.2f\n", PtE);
            break;

            break;
        }
        printf("\n Para calcular las siguientes areas y perimetros, eliga las siguientes letras: (c: cuadrado, r: rectangulo, C: circulo, t: triangulo equilatero)");
        scanf(" %c", &figura);
    }
    return 0;
}


float Acuadrado(float lado){
    return pow(lado,2);
}

float Arectangulo(float base, float altura){
    return base*altura;
}


float Acirculo(float radio){
    return M_PI * pow(radio,2);
}

float AtrianguloEqui(float lados){
    return (sqrt(3)/4)* pow(lados,2);
}

float Pcuadrado(float lado){
    return 4*lado;
}

float Prectangulo(float base, float altura){
    return 2*(base+altura);
}

float Pcirculo(float radio){
    return 2*M_PI*radio;
}

float PtrianguloEqui(float lados){
    return 3*lados;
}