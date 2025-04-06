#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct 
{
    int cbu;
    char tipoC[MAX];
    int saldoA;

} CuentaBan;

typedef struct 
{
    char sucursal[MAX];
    int dni;
    char nombre[MAX];
    int *listaCuBanc; // Arreglo dinámico de enteros (para almacenar múltiples cuentas como números)
    int cantCB;
    CuentaBan *cuentaBan;
} Cliente;


void mayorNCuentas(Cliente *cliente, int cantC);
void mayorSUsu(Cliente *cliente, int cantC);
void sucuCentro(Cliente *cliente, int cantC);
void liberarMemoria(Cliente *cliente, int cantC) {
    for (int i = 0; i < cantC; i++) {
        // Liberar memoria de las cuentas bancarias
        free(cliente[i].cuentaBan);

        // Liberar memoria de los números de cuenta bancaria
        free(cliente[i].listaCuBanc);
    }
    // Liberar la memoria del array de clientes
    free(cliente);
}


int main(){

    int cantC=4;
    

    
    Cliente *cliente=(Cliente*)malloc(cantC* sizeof(Cliente));
   

    
    cliente[0]=(Cliente){"Centro", 45334790, "Juan", (int*)malloc(3*sizeof(int)), 3,(CuentaBan*)malloc(3*sizeof(CuentaBan))};
    cliente[0].listaCuBanc[0]=000112233;
    cliente[0].listaCuBanc[1]=000556767;
    cliente[0].listaCuBanc[2]=000155233;
    cliente[0].cuentaBan[0]=(CuentaBan){8900045,"Caja de ahorro",200000};
    cliente[0].cuentaBan[1]=(CuentaBan){6569566,"Inversiones",600000};
    cliente[0].cuentaBan[2]=(CuentaBan){2945545,"Dolares",45500};
    
        // Inicialización del segundo cliente
    cliente[1] = (Cliente){"Centro", 46878767, "Fran", (int*)malloc(2 * sizeof(int)), 2,(CuentaBan*)malloc(2 * sizeof(CuentaBan))};
    cliente[1].listaCuBanc[0] = 223344;
    cliente[1].listaCuBanc[1] = 667788;
    cliente[1].cuentaBan[0] = (CuentaBan){223344, "Caja de ahorro", 150000};
    cliente[1].cuentaBan[1] = (CuentaBan){667788, "Corriente", 250000};

    // Inicialización del tercer cliente
    cliente[2] = (Cliente){"Sur", 43435790, "Nacho", (int*)malloc(1 * sizeof(int)), 1,(CuentaBan*)malloc(1 * sizeof(CuentaBan))};
    cliente[2].listaCuBanc[0] = 334455;
    cliente[2].cuentaBan[0] = (CuentaBan){334455, "Ahorro", 180000};

    // Inicialización del cuarto cliente
    cliente[3] = (Cliente){"Este", 45656790, "Felipe", (int*)malloc(5 * sizeof(int)),5 ,(CuentaBan*)malloc(5 * sizeof(CuentaBan))};
    cliente[3].listaCuBanc[0] = 445566;
    cliente[3].listaCuBanc[1] = 778899;
    cliente[3].listaCuBanc[2] = 112233;
    cliente[3].listaCuBanc[3] = 556677;
    cliente[3].listaCuBanc[4] = 990011;
    cliente[3].cuentaBan[0] = (CuentaBan){445566, "Caja de ahorro", 800000};
    cliente[3].cuentaBan[1] = (CuentaBan){778899, "Corriente", 120000};
    cliente[3].cuentaBan[2] = (CuentaBan){112233, "Inversiones", 90000};
    cliente[3].cuentaBan[3] = (CuentaBan){556677, "Dolares", 35000};
    cliente[3].cuentaBan[4] = (CuentaBan){990011, "Caja de ahorro", 200000};

    // Inicialización del quinto cliente
    cliente[4] = (Cliente){"Centro", 47556565, "Caro", (int*)malloc(4 * sizeof(int)),4 ,(CuentaBan*)malloc(4 * sizeof(CuentaBan))};
    cliente[4].listaCuBanc[0] = 667788;
    cliente[4].listaCuBanc[1] = 223344;
    cliente[4].listaCuBanc[2] = 556677;
    cliente[4].listaCuBanc[3] = 112233;
    cliente[4].cuentaBan[0] = (CuentaBan){667788, "Caja de ahorro", 500000};
    cliente[4].cuentaBan[1] = (CuentaBan){223344, "Ahorros", 300000};
    cliente[4].cuentaBan[2] = (CuentaBan){556677, "Corriente", 450000};
    cliente[4].cuentaBan[3] = (CuentaBan){112233, "Dolares", 15000};
    

    mayorNCuentas(cliente, cantC);
    printf("\n");
    mayorSUsu(cliente,  cantC);
    printf("\n");
    sucuCentro(cliente, cantC);
    printf("\n");
    
    liberarMemoria(cliente, cantC);
    

   
    

    
   
    return 0;
}


void mayorNCuentas(Cliente *cliente, int cantC){

        char nombre[MAX];
        int aux=0;
    for (int i = 0; i < cantC ; i++)
    {
       
              if (cliente[i].cantCB>aux)
              {
                aux=cliente[i].cantCB;
                strcpy(nombre,cliente[i].nombre);
              }
                
                
          
        
        
    }
    
    printf("El cliente con mayor cantidad de cuentas es: ");
    puts(nombre);

}

void mayorSUsu(Cliente *cliente, int cantC){
        
    int saldoM;
    printf("ingrese un saldo el que quiera");
    scanf("%d",&saldoM);
        
        for (int i = 0; i < cantC; i++)
        {
            for (int j = 0; j <  cliente[i].cantCB; j++)
            {
                if (cliente[i].cuentaBan[j].saldoA > saldoM)
                {
                    printf("Las cuentas con mayor saldo al ingresado son: ");
                    puts(cliente[i].cuentaBan[j].tipoC);
                    printf(" de ");
                    puts(cliente[i].nombre);
                    printf("\n");
                }
                
            }
            
        }
        


}


void sucuCentro(Cliente *cliente, int cantC) {
    for (int i = 0; i < cantC; i++) {
        for (int j = 0; j < cliente[i].cantCB; j++) {
            // Filtra sucursal, tipo de cuenta y saldo mayor a 10.000
            if (strcmp(cliente[i].sucursal, "Centro") == 0 && strcmp(cliente[i].cuentaBan[j].tipoC, "Dolares") == 0 && cliente[i].cuentaBan[j].saldoA > 10000) {
                
                printf("Los clientes de la sucursal centro con cuenta en dolares con mas de 10000 dolares son: ");
                puts(cliente[i].nombre);
            }
        }
    }
}