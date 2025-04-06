
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 12
#define TAMA 50

struct 
{
    char nombre[TAMA], apellido[TAMA];
    int DNI;

}typedef Coordinador;

struct 
{
    char destinoV[TAMA];
    int fechaS[max];
    int fechaR[max];
    float precioV;
}typedef Destino;

struct 
{
    int *numerohabitR;
    int canthabit;
}typedef Hotel;

struct 
{
    Hotel hotel;
    Destino destino;
    Coordinador coordinador;

}typedef Agencia;

Agencia cargarDatos();
void mostrardatos( Agencia mostrar);
void actualizarP( Agencia actu);
void controlF( Agencia fechas);
void habitacionesReservadas( Agencia habit);

int main()
{
    Agencia cargar;
    srand(time(NULL));

    cargar=cargarDatos();
    mostrardatos(cargar);
    actualizarP(cargar);
    actualizarP( cargar);

    printf("\nsus datos con los datos actualizados\n");
    mostrardatos(cargar);


    return 0;
}

Agencia cargarDatos(){
    Agencia agencia;
    printf("\nIngrese el destino del viaje\n");
    gets(agencia.destino.destinoV);

    printf("ingrese los datos del coordinador en el siguiente orden: 1)Apellido, 2)Nombre, 3)DNI\n");
    gets(agencia.coordinador.apellido);
    gets(agencia.coordinador.nombre);
    
    fflush(stdin);

    scanf("\n%d",&agencia.coordinador.DNI);

    
   
    
    printf("\nIngrese el precio del viaje\n");
    scanf("%d",&agencia.destino.precioV);

    printf("\nIngrese la fecha de salida del viaje: dd/mm/aaaa\n");
    scanf("%d",&agencia.destino.fechaS[0]);
    scanf("%d",&agencia.destino.fechaS[1]);
    scanf("%d",&agencia.destino.fechaS[2]);    
        
    

    printf("\nIngrese la fecha de regreso del viaje: dd/mm/aaaa\n");
    scanf("%d",&agencia.destino.fechaR[0]);
    scanf("%d",&agencia.destino.fechaR[1]);
    scanf("%d",&agencia.destino.fechaR[2]);

    printf("\nIngrese el numero de habitaciones que quiere reservar\n");
    scanf("%d",&agencia.hotel.canthabit);

    agencia.hotel.numerohabitR=(int*)malloc(agencia.hotel.canthabit*sizeof(int));
    
    printf("\nIngrese el numero de las habitacion que quiere reservar ejemplo 221, 212\n");
    for (int i = 0; i < agencia.hotel.canthabit; i++)
    {
        printf("\nHabitación %d: ", i + 1);
        scanf( "%d",&agencia.hotel.numerohabitR[i]);
    }
    
    


    return agencia;
}


void mostrardatos( Agencia mostrar){
    
    printf("\nEl destino del viaje es:");
    puts(mostrar.destino.destinoV);
    printf("\nLos datos del coordinador son los siguiente en el siguiente orden: Apellido, Nombre, DNI");
    printf("\n");
    puts(mostrar.coordinador.apellido);
    printf("\n");
    puts(mostrar.coordinador.nombre);
    fflush(stdin);
    printf("\n");
    printf("%d",mostrar.coordinador.DNI);
    

    

   
    
    
    printf("\nEl precio del viaje es: %d",mostrar.destino.precioV);
    

    printf("\nLa fecha de salida del viaje es: %d/%d/%d",mostrar.destino.fechaS[0],mostrar.destino.fechaS[1],mostrar.destino.fechaS[2]);  

    printf("\nLa fecha de regreso del viaje es: %d/%d/%d",mostrar.destino.fechaR[0],mostrar.destino.fechaR[1],mostrar.destino.fechaR[2]);
    


    printf("\nNumero de habitaciones reservardas %d",mostrar.hotel.canthabit);
    

    
    
    printf("\nHabitaciones reservadas\n");
    for (int i = 0; i < mostrar.hotel.canthabit; i++)
    {

        printf( "%d\n",mostrar.hotel.numerohabitR[i]);
    }

}

void actualizarP( Agencia actu){
    float num;

    printf("Ingrese el monto extra por dia que se extendio la estadia 10 porciento del precio del viaje, se le vamos a sumar a viaje");
    scanf("%f",&num);

    actu.destino.precioV+= actu.destino.precioV * (num/ 100);


}

void controlF( Agencia fechas){
    int valido=0;
    while (valido != 6)
    {
    
    
       if (fechas.destino.fechaS[0] > 0 && fechas.destino.fechaS[0] <= 31) {
            valido++;
        } else {
            printf("Actualice el día de salida a uno válido (1-31): ");
            scanf("%d", &fechas.destino.fechaS[0]);
        }

        if (fechas.destino.fechaS[1] > 0 && fechas.destino.fechaS[1] <= 12) {
            valido++;
        } else {
            printf("Actualice el mes de salida a uno válido (1-12): ");
            scanf("%d", &fechas.destino.fechaS[1]);
        }

        if (fechas.destino.fechaS[2] >= 2023 && fechas.destino.fechaS[2] <= 2100) {
            valido++;
        } else {
            printf("Actualice el año de salida a uno válido (2023-2100): ");
            scanf("%d", &fechas.destino.fechaS[2]);
        }

        // Validación de la fecha de regreso (fechaR)
        if (fechas.destino.fechaR[0] > 0 && fechas.destino.fechaR[0] <= 31) {
            valido++;
        } else {
            printf("Actualice el día de regreso a uno válido (1-31): ");
            scanf("%d", &fechas.destino.fechaR[0]);
        }

        if (fechas.destino.fechaR[1] > 0 && fechas.destino.fechaR[1] <= 12) {
            valido++;
        } else {
            printf("Actualice el mes de regreso a uno válido (1-12): ");
            scanf("%d", &fechas.destino.fechaR[1]);
        }

        if (fechas.destino.fechaR[2] >= 2023 && fechas.destino.fechaR[2] <= 2100) {
            valido++;
        } else {
            printf("Actualice el año de regreso a uno válido (2023-2100): ");
            scanf("%d", &fechas.destino.fechaR[2]);
        }

        // Si todas las fechas son válidas, termina el bucle
        if (valido == 6) {
            printf("Las fechas son válidas.\n");
            printf("Fecha de salida: %d/%d/%d\n", fechas.destino.fechaS[0], fechas.destino.fechaS[1], fechas.destino.fechaS[2]);
            printf("Fecha de regreso: %d/%d/%d\n", fechas.destino.fechaR[0], fechas.destino.fechaR[1], fechas.destino.fechaR[2]);
        } else {
            printf("Por favor, ingrese fechas válidas.\n");
        }
    
    
    
    }
}

void habitacionesReservadas( Agencia habit){

int numH=0,piso;

for (int i = 0; i < habit.hotel.canthabit; i++)
{
    
       piso= habit.hotel.numerohabitR[i]/100;
       
        switch (piso)
        {
        case 1:
            numH++;
            break;
        
        default:
            break;
        }
       

}


}