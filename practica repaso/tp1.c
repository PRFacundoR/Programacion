
//ejercicio 1
/*#include <stdio.h>

int main()
{
    int suma;
    int resta;

    printf("ingrese dos numeros ");
    scanf("%d", &suma);
    scanf("%d", &resta);

    suma+=1;
    resta-=1;

    printf("sus numeros modificados son, incremento:%d, decremento:%d", suma, resta);4

    return 0;
}*/





//ejercicio 2

/*#include <stdio.h>


int main(){

    float mate, lengua, ciencia, promedio;

    printf("Ingrese las notas de las materias con dos decimales, le vamos a sacar el promedio general del rendimiento, primero ingrese matematicas, luego lengua y por ultimo ciencias\n");
    scanf("%f", &mate );
    scanf("%f", &lengua);
    scanf("%f", &ciencia);

    promedio=(mate+ lengua+ ciencia)/3;

    if(promedio>=9){
        printf("excelente");

    }else if(promedio>=7.00 && promedio<=9.00){
        printf("muy bueno");
    }else if(promedio>=5.00 && promedio<=7.00){
        printf("regular");
    }else{
        printf("reprobado");
    }


    return 0;
}*/




//ejercicio 3

/*#include <stdio.h>

int main()
{
    int dni, cbu, opn;
    float saldo, deposito, retirar;

    printf("ingrese sus datos, primero dni, segundo cbu y por ultimo el saldo\n");
    scanf("%d", &dni );
    scanf("%d", &cbu);
    scanf("%f", &saldo);

    printf("ingrese 1 si desea depositar, 2 si quiere retirar, 3 consulta de sueldo, 4 mostrar datos de la cuenta, 5 o culaquier numero mayor si quiere salir del programa\n");
    scanf("%d", &opn );

    switch (opn)
    {
    case 1:
        printf("ingrse el monto que va a depositar");
        scanf("%f", &deposito);
        saldo+=deposito;
        break;
    
    case 2:
        printf("ingrse el monto que va a retirar");
        scanf("%f", &retirar);
        saldo-=retirar;
        break;

    case 3:
        printf("su saldo es:%f",saldo);
        break; 

    case 4:
    printf("sus datos son, cbu:%d y dni:%d",cbu, dni);
        break; 

    default:
    printf("usted salio del programa");
        break;
    }


    return 0;
}*/



//ejercicio 4
/*#include <stdio.h>

#define IVA 0.21

int main()
{
    float prod, prodF, desc;
    char categ;

    printf("ingrese el precio del producto y su categoria como cliente preferente");
    scanf("%f",&prod);
    scanf("%c", &categ);

    prodF=prod+(prod*IVA);
    switch (categ)
    {
    case 'A':
        printf("tienes un descuento del 20 por ciento");
        desc=0.20;
        prodF-=prodF*0.20;
        break;
    
    case 'B':
        printf("tienes un descuento del 10 por ciento");
        desc=0.10;
        prodF-=prodF*0.10;
        break;

    case 'C':
        prodF;
        break;
    
    default:
        printf("Categoría no reconocida. No se aplica descuento.\n");
        break;
    }

    if (prodF>10000)
    {
        prodF-=prodF*0.05;

    }
    
    printf("usted debe pagar %f pesos",prodF);


    return 0;
}*/







//ejercicio 5

#include <stdio.h>

int main()
{
    
    return 0;
}

