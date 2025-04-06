#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void cargarTiros(int *puntos, int tiros);
float calcularGanancia(int *puntos, int tiros, float *perdida, float
*totalPerdida, float *totalGanancia);


int main()
{
    int partida, tiros,vuelto=0, *puntos;
    float horas=24;
    float perdida=0,ganancia,totalPerdida=0,totalGanancia=0;

     srand(time(NULL));
    
    
    while (horas>0)
    {
        printf("\n ingrese el monto para jugar que es 350 pesos por tiro ");
        scanf("%d",&partida);
    
    
        if (partida>=350 )
        {   
            tiros=partida/350;
            vuelto = partida % 350;
            
            puntos=(int *)malloc(tiros*sizeof(int));
    
        }
    
         printf("\n usted tiene %d tiros y su vuelto es %d",tiros,vuelto);
         cargarTiros(puntos, tiros);

         ganancia= calcularGanancia(puntos,tiros,&perdida,&totalPerdida, &totalGanancia);
         printf("\n su saldo final es %f y su perdida es %f",ganancia,perdida);
         printf("\n su ganancia es %f",ganancia - perdida + (350 * tiros));

         free(puntos);
         horas=horas-4;

    }

    printf("\n total de perdidas de los jugadores es %f y total de ganancia de los jugadore es %f",totalPerdida,totalGanancia);

    return 0;
}

void cargarTiros(int *puntos, int tiros){
    for (int i = 0; i < tiros; i++)
    {
        puntos[i]=rand() % 10 + 1;
        printf("\n tus puntos son %d\n",puntos[i]);
    }
    
}

float calcularGanancia(int *puntos, int tiros, float *perdida, float*totalPerdida, float *totalGanancia){
    float auxG=0,saldoF=0;
   

      for (int i = 0; i < tiros; i++)
    {
        switch (puntos[i])
        {
        case 1:
        case 2:
            *perdida -= 100;  // Pierde 100
            break;
        case 7:
            *perdida -= 50;  // Pierde 50
            break;     
            
        case 8:
            *perdida -= 0;  // No pierde ni gana nada
            break;
            
        case 9:
            auxG += 350 + 850;  // Gana 350 + 850            
            break;
            
        case 10:
            auxG += 350 + 1000;  // Gana 350 + 1000            
            break;
        }
    }
        *totalPerdida += -(*perdida);

        saldoF=auxG;
        *totalGanancia += auxG;

    return saldoF;
}
    
    
    
    
    
