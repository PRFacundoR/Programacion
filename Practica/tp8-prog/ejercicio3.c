#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct 
{
   char nombre[MAX];
   char genero[MAX];
   char plataforma[MAX];
   int precio;

}typedef Juego;

struct 
{
   int dia, mes,anio;
}typedef Fecha;

struct 
{
    Fecha fecha;
    int numJC;
    int puntos;
    Juego *juego;
}typedef Compra;

struct 
{
    char nombre[MAX];
    int DNI, edad;
    int comprasR;
    Compra *compra;
    
    
}typedef Cliente;

void clienteMJ(Cliente *cliente, int cantCL);
void clienteMC(Cliente *cliente, int cantCL);
void clienteMCJ(Cliente *cliente, int cantCL);
void ventaMCostosa(Cliente *cliente, int cantCL);
void puntostotales(Cliente *cliente, int cantCL);
void juegosPlataforma(Cliente *cliente, int cantCL);
void juegosXIn(Cliente *cliente, int cantCL);


int main()
{

    int cantCL=3;
    Cliente *cliente=(Cliente*)malloc(cantCL*sizeof(Cliente));
    
    cliente[0]=(Cliente){"juan",34504464,19,2,(Compra*)malloc(2*sizeof(Compra))};
    cliente[0].compra[0]=(Compra){{12,8,2024},3,3000,(Juego*)malloc(3*sizeof(Juego))};
    cliente[0].compra[0].juego[0]=(Juego){"Far Cry 3", "Accion","PC",32000};
    cliente[0].compra[0].juego[1]=(Juego){"Far Cry 4", "Accion","PC",60000};
    cliente[0].compra[0].juego[2]=(Juego){"Far Cry 5", "Accion","PC",70000};

    cliente[0].compra[1]=(Compra){{25,9,2024},3,3000,(Juego*)malloc(3*sizeof(Juego))};
    cliente[0].compra[1].juego[0]=(Juego){"Far Cry 6", "Accion","PC",100000};
    cliente[0].compra[1].juego[1]=(Juego){"Call OF Duty BO6", "Accion","PS",120000};
    cliente[0].compra[1].juego[2]=(Juego){"Bioshock 2", "Accion","PS",14000};

    // Cliente 1
    cliente[1] = (Cliente){"Maria", 42988765, 25,3, (Compra *)malloc(3 * sizeof(Compra))};
    cliente[1].compra[0] = (Compra){{5, 7, 2024}, 2, 2000, (Juego *)malloc(2 * sizeof(Juego))};
    cliente[1].compra[0].juego[0] = (Juego){"The Sims 4", "Simulacion", "Xbox", 15000};
    cliente[1].compra[0].juego[1] = (Juego){"Stardew Valley", "Indie", "Switch", 8000};

    cliente[1].compra[1] = (Compra){{15, 8, 2024}, 3, 4000, (Juego *)malloc(3 * sizeof(Juego))};
    cliente[1].compra[1].juego[0] = (Juego){"Minecraft", "Aventura", "Xbox", 26000};
    cliente[1].compra[1].juego[1] = (Juego){"Animal Crossing", "Simulacion", "Switch", 45000};
    cliente[1].compra[1].juego[2] = (Juego){"Overcooked 2", "Multijugador", "PC", 12000};

    cliente[1].compra[2] = (Compra){{16, 8, 2024}, 3, 4000, (Juego *)malloc(3 * sizeof(Juego))};
    cliente[1].compra[2].juego[0] = (Juego){"Minecraft", "Aventura", "PS", 26000};
    cliente[1].compra[2].juego[1] = (Juego){"Animal Crossing", "Simulacion", "Switch", 45000};
    cliente[1].compra[2].juego[2] = (Juego){"Overcooked 2", "Multijugador", "PS", 12000};
    
    /*cliente[1].compra[3] = (Compra){{19, 8, 2024}, 3, 4000, (Juego *)malloc(3 * sizeof(Juego))};
    cliente[1].compra[3].juego[0] = (Juego){"Minecraft", "Aventura", "PS3", 26000};
    cliente[1].compra[3].juego[1] = (Juego){"Animal Crossing", "Simulacion", "Switch", 45000};
    cliente[1].compra[3].juego[2] = (Juego){"Overcooked 2", "Multijugador", "PS4", 12000};*/
  


    // Cliente 2
    cliente[2] = (Cliente){"Luis", 41234567, 30,1, (Compra *)malloc(1 * sizeof(Compra))};
    cliente[2].compra[0] = (Compra){{10, 6, 2024}, 10, 5000, (Juego *)malloc(10 * sizeof(Juego))};
    cliente[2].compra[0].juego[0] = (Juego){"FIFA 24", "Deportes", "PS", 70000};
    cliente[2].compra[0].juego[1] = (Juego){"NBA 2K24", "Deportes", "PC", 65000};
    cliente[2].compra[0].juego[2] = (Juego){"Minecraft", "Aventura", "PS", 26000};
    cliente[2].compra[0].juego[3] = (Juego){"Animal Crossing", "Simulacion", "Switch", 45000};
    cliente[2].compra[0].juego[4] = (Juego){"Overcooked 2", "Multijugador", "PS", 12000};
    cliente[2].compra[0].juego[5] = (Juego){"FIFA 24", "Deportes", "PS", 70000};
    cliente[2].compra[0].juego[6] = (Juego){"NBA 2K24", "Deportes", "PC", 65000};
    cliente[2].compra[0].juego[7] = (Juego){"Minecraft", "Aventura", "Xbox", 26000};
    cliente[2].compra[0].juego[8] = (Juego){"Animal Crossing", "Simulacion", "Switch", 45000};
    cliente[2].compra[0].juego[9] = (Juego){"Overcooked 2", "Multijugador", "PS", 12000};

    clienteMJ(cliente,  cantCL);
    clienteMC(cliente, cantCL);
    clienteMCJ(cliente, cantCL);
    ventaMCostosa(cliente, cantCL);
    puntostotales(cliente, cantCL);
    juegosPlataforma(cliente, cantCL);
    juegosXIn(cliente, cantCL);

    return 0;
}

void clienteMJ(Cliente *cliente, int cantCL){

    int aux=1000;
    char name[MAX];
    for (int i = 0; i < cantCL; i++)
    {
        
        if (aux > cliente[i].edad)
        {
           aux=cliente[i].edad;
           strcpy(name,cliente[i].nombre);
        }
        
    }
    printf("El cliente mas joven en comprar es: ");
    puts(name);
    printf("\n");


}

void clienteMC(Cliente *cliente, int cantCL){
    int aux=0;
    
    char name1[MAX];
   
    for (int i = 0; i < cantCL; i++)
    {
        
        if (cliente[i].comprasR>aux)
        {
            aux=cliente[i].comprasR;
            strcpy(name1,cliente[i].nombre);
        }
        

    }
    printf("El cliente que mas compras hizo fue: ");
    puts(name1);
    printf("\n");


}

void clienteMCJ(Cliente *cliente, int cantCL){

    int aux=0;

    char name2[MAX];
    for (int i = 0; i < cantCL; i++)
    {   
        int suma=0;
            
            for (int j = 0; j < cliente[i].comprasR; j++)
            {
                
                suma+=cliente[i].compra[j].numJC;
                if (suma>aux)
                {
                   aux=suma;
                   strcpy(name2,cliente[i].nombre);
                }
                
                
            }

        
    }
    printf("El cliente que mas juegos compro fue: ");
    puts(name2);
    printf("\n");
    
}

void ventaMCostosa(Cliente *cliente, int cantCL){

    int aux=0;
    char name[MAX];
    for (int i = 0; i < cantCL; i++)
    {
        
        for (int j = 0; j < cliente[i].comprasR ; j++)
        {

            if (cliente[i].compra[j].fecha.anio==2024)
            {
                for (int z = 0; z < cliente[i].compra[j].numJC; z++)
                {
                
                    if(cliente[i].compra[j].juego[z].precio>aux){

                        aux=cliente[i].compra[j].juego[z].precio;
                        strcpy(name,cliente[i].compra[j].juego[z].nombre);

                    }

                }
            }
              
        }
        
    }
    
    printf("La venta mas costosa en 2024 fue el juego:");
    puts(name);
    printf("\n");
}

void puntostotales(Cliente *cliente, int cantCL){
    char name[MAX];
    for ( int i = 0; i < cantCL; i++)
    {
        int aux=0;
        
        for (int j = 0; j < cliente[i].comprasR ; j++)
        {
            aux+=cliente[i].compra[j].puntos;
            strcpy(name,cliente[i].nombre);

        }
            printf("El cliente ");
            puts(name);
            printf("tiene %d puntos",aux);
            printf("\n");

    }
    
}

void juegosPlataforma(Cliente *cliente, int cantCL){
    int PC=0, PS=0, Xbox=0;
    
    for (int i = 0; i < cantCL; i++)
    {
        
        for (int j = 0; j < cliente[i].comprasR ; j++)
        {

           for (int z = 0; z < cliente[i].compra[j].numJC; z++)
            {
                if (strcmp(cliente[i].compra[j].juego[z].plataforma,"PC")==0)
                {
                    PC++;
                }
                
                if (strcmp(cliente[i].compra[j].juego[z].plataforma,"PS")==0)
                {
                    PS++;
                }
                if (strcmp(cliente[i].compra[j].juego[z].plataforma,"Xbox")==0)
                {
                    Xbox++;
                }
                   
            }
        }
        
    }

    printf("se vendieron %d juegos de PC, %d juegos de PlayStation y %d juegos de Xbox",PC,PS,Xbox);
    printf("\n");
}

void juegosXIn(Cliente *cliente, int cantCL){
    int Xbox=0;
   
    for (int i = 0; i < cantCL; i++)
    {
        
        for (int j = 0; j < cliente[i].comprasR ; j++)
        {
            if (cliente[i].compra[j].fecha.mes>=6 && cliente[i].compra[j].fecha.mes<=8)
            {
            
                for (int z = 0; z < cliente[i].compra[j].numJC; z++)
                {
                
                    if (strcmp(cliente[i].compra[j].juego[z].plataforma,"Xbox")==0 && strcmp(cliente[i].compra[j].juego[z].genero,"Aventura")==0)
                    {
                        Xbox++;
                    }
                   
                }
            }
        }
        
    }

    printf("se vendieron %d juegos de aventura en Xbox",Xbox);
    printf("\n");

}