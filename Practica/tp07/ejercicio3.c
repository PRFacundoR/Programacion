#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 12
#define TAMA 50

struct 
{
    int dia;
    int mes;
    int anio;

}typedef FechaN;


struct 
{
    char nombre[TAMA];
    char apellido[TAMA];
    int DNI;
    char contra[TAMA];
    FechaN fechaN;

} typedef DatosC;

struct 
{
    int CVU;
    int saldoB;
    int *histiT;
} typedef DatosCu;


struct 
{
    DatosC datosC;
    DatosCu datosCu;

}typedef Clientes;

void preMenu(Clientes cliente[], int selecion);
void preMenu1(Clientes cliente[]);

int main()
{
    
    Clientes clientes[4]={
        {"000","0000",0,"0000",{00,00,0000},000, 0000,NULL},
        {"Juan","alcachofa",1234567,"hola123",{24,11,2000},2456, 450,NULL},
        {"Maria", "Lopez", 87654321, "pass456", {10, 8, 1985}, 987654321, 1500, NULL},
        {"Marcelo", "Navarro", 85651321, "pass789", {19, 2, 1979}, 123456789, 41500, NULL},
        {"Nazareno", "Medina", 11223344, "pass999", {21, 10, 1980}, 987654321, 25500, NULL}
    };

    preMenu1(clientes);
    

    return 0;
}


void preMenu(Clientes cliente[], int selecion){

printf("Apellido ");
puts(cliente[selecion].datosC.apellido);
printf("\nNombre ");
puts(cliente[selecion].datosC.nombre);
printf("DNI: %d",cliente[selecion].datosC.DNI);


}


void preMenu1(Clientes cliente[]){
int selecion;

    printf("seleccione un numero del 1 al 4 para ingresar a los usuarios y sus datos, 0 para salir del menu\n");
    scanf("%d",&selecion);

    switch (selecion)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        preMenu(cliente, selecion);
        break;
    
    default :
        printf("no eligio a nadie");
        break;
    }
    

}