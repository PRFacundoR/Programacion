/* 3) Banco Fondos del Norte
Para ayudar a gestionar el acceso y las operaciones de los clientes de un banco, escribir una
versión simplificada de un programa donde luego de cargar los datos de un cliente (dni, cbu y
saldo) le muestre un menú para operar y de acuerdo a la opción seleccionada sea la salida.
Menú de operaciones:
1. Depositar dinero: debe sumar un valor a la cuenta del cliente.
2. Retirar dinero: resta el dinero siempre y cuando tenga el saldo disponible.
3. Consultar Saldo: muestra este dato.
4. Mostrar datos de la cuenta: muestra el dni del cliente y CBU.
5. Salir del programa
Nota: Por cada ejecución del programa el cliente solo podrá elegir una opción.
*/
#include <stdio.h>
int main(){
    int dni,cbu;
    float saldo,depo=0,retiro=0;
    int menu;
    printf(" \n Ingrese dni: ");
    scanf("%d",&dni );
    printf(" \n Ingrese cbu: ");
    scanf("%d",&cbu);
    printf("\n Ingrese saldo: ");
    scanf("%f",&saldo);
    do {
            printf("Elija estas opciones: 1: depositar dinero, 2: retirar dinero, 3: consultar saldo, 4:Mostrar datos, 5:Salir : \n");
    scanf("%d",&menu);
        switch (menu)
        {
        case 1:
            printf("Dinero a depositar : \n");
            scanf("%f",&depo);
            saldo+=depo;
            printf("Saldo: %f \n",saldo);
            break;
        case 2:
            printf("ingresar dinero a retirar : \n");
            scanf("%f",&retiro);
                if(saldo>=retiro){
                    saldo-=retiro;
                    printf("saldo: %f, retiro en total: %f \n",saldo,retiro);
                } else{
                       printf("No tiene suficiente dinero");
                      }
            
            break;
        case 3:
            printf("El saldo es %f", saldo);
            break;
        case 4:
            printf("su cbu es %d y su dni es %d \n", cbu, dni);
            break;
       case 5: dni=0;
       cbu=0;
        default:
            break;
        }
        return 0;
    }
    while ( dni!=0 && cbu!=0 );
    


}