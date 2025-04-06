#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct{
   char razonS[MAX],
   nombre[MAX],
   apellido[MAX];
   int cantidad, telefono;
    
}typedef Cliente;

struct 
{
    char especie[MAX],
    categoria[MAX],
    nomV[MAX]; 
    int stock,
    precio, cantP;

    Cliente *pedidos;
}typedef DsEspecie;


void arbolesdispo(DsEspecie *especie, int cantPe);
void arbolesStock(DsEspecie *especie, int cantPe);
void pedidos(DsEspecie *especie, int cantPe);
void agregarPe(DsEspecie *especie,int cantPe);
void actualizarE(DsEspecie *especie,int cantPe);



int main()
{

    int cantPe=4;
    DsEspecie *especie=(DsEspecie*)malloc(cantPe*sizeof(DsEspecie));

    especie[0]=(DsEspecie){"nombre1", "caduca","Aromo",30,5000,2, (Cliente*)malloc(2*sizeof(Cliente))};
    especie[0].pedidos[0]=(Cliente){"empresa1 SA", "facundo", "peralta",5, 54334790 };
    especie[0].pedidos[1]=(Cliente){"empresa2 SA", "juan", "alcachofa",6, 55678945 };

    especie[1] = (DsEspecie){"nombre2", "perenne", "Eucalipto", 50, 8000, 2, (Cliente*)malloc(2 * sizeof(Cliente))};
    especie[1].pedidos[0] = (Cliente){"empresa3 SRL", "Marta", "Rodriguez", 10, 54567890};
    especie[1].pedidos[1] = (Cliente){"empresa4 SRL", "Luis", "Garcia", 15, 54789012};

    especie[2] = (DsEspecie){"nombre3", "caduca", "Pino", 25, 3000, 2, (Cliente*)malloc(2 * sizeof(Cliente))};
    especie[2].pedidos[0] = (Cliente){"empresa5 LTDA", "Ana", "Lopez", 7, 54234567};
    especie[2].pedidos[1] = (Cliente){"empresa6 LTDA", "Carlos", "Perez", 4, 54312345};
    
    especie[3] = (DsEspecie){"nombre4", "Frutal", "Naranjo", 25, 3000, 2, NULL};
    
    arbolesdispo(especie, cantPe);
    arbolesStock(especie,cantPe);
    pedidos(especie, cantPe);
    fflush(stdin);
    agregarPe(especie, cantPe);


    return 0;
}
void arbolesdispo(DsEspecie *especie, int cantPe){

    for (int i = 0; i < cantPe; i++)
    {
        printf("Los arboles disponibles son: ");
        puts(especie[i].especie);
       
        printf("\n");
    }
    
}

void arbolesStock(DsEspecie *especie, int cantPe){

    int cantI;
    printf("ingrese una cantidad de stock");
    scanf("%d", &cantI);
    printf("\n");

     for (int i = 0; i < cantPe; i++)
    {
        if (especie[i].stock<cantI)
        {
            
        
        printf("Los arboles disponibles son: ");
        puts(especie[i].especie);
        printf("Con %d unidades", especie[i].stock);
        printf("\n");
        printf("\n");
        }
    }
}

void pedidos(DsEspecie *especie, int cantPe){
    int aux=0;
    for (int i = 0; i < cantPe; i++)
    {
        
        for (int j = 0; j <especie[i].cantP ; j++)
        {
            aux=especie[i].pedidos[j].cantidad*especie[i].precio;
            
            printf("El pedido de la empresa ");
            puts(especie[i].pedidos[j].razonS);
            printf("CLiente:");
            puts(especie[i].pedidos[j].nombre);
            puts(especie[i].pedidos[j].apellido);
          
            printf("Su monto a pagar seria $%d",aux);
            printf("\n");
            printf("\n");
        }
        

    }
    

}

void agregarPe(DsEspecie *especie,int cantPe){
    int CantP;
    
    printf("Ingrese la cantidad de pedido que quiere hacer a una especie sin pedidos\n");
    scanf("%d",&CantP);
    fflush(stdin);
printf("\n");
    for (int i = 0; i < cantPe; i++)
    {
        
        if (especie[i].pedidos== NULL){
        
            especie[i].pedidos=(Cliente*)malloc(CantP*sizeof(Cliente));
                if (especie[i].stock>0){
                    
                    for (int j = 0; j < CantP; j++) {
                        fflush(stdin);
                        printf("Ingrese razón social del cliente %d: ", j + 1);
                        fflush(stdin);
                        gets(especie[i].pedidos[j].razonS);
                        fflush(stdin);
                        printf("Ingrese nombre del cliente %d: ", j + 1);
                        fflush(stdin);
                        gets(especie[i].pedidos[j].nombre);
                        fflush(stdin);
                        printf("Ingrese apellido del cliente %d: ", j + 1);
                        fflush(stdin);
                        gets(especie[i].pedidos[j].apellido);
                        fflush(stdin);

                        printf("Ingrese cantidad del pedido %d: ", j + 1);
                        fflush(stdin);
                        scanf("%d", &especie[i].pedidos[j].cantidad);
                        fflush(stdin);

       
    

                        printf("Ingrese teléfono del cliente %d: ", j + 1);
                        fflush(stdin);
                        scanf("%d", &especie[i].pedidos[j].telefono);
                        fflush(stdin);

                        especie[i].stock -= especie[i].pedidos[j].cantidad; // Reducir el stock
                        printf("Pedido registrado con éxito.\n");
                        fflush(stdin); // Limpiar el búfer después de usar scanf
                    }
                    
            
            }else{
                printf("No hay stock");
            }
        }
     
    }
    
}

void actualizarE(DsEspecie *especie,int cantPe){


}