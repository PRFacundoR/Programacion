#include <stdio.h>


struct fecha
{
   int dia, mes, anio;
};

struct persona
{
   int dni;
   char nombre[20], estadoC[20];
   struct fecha fechaDeNa;
   
};

typedef struct persona *puntPersona;
void cargarDatosPer(puntPersona nueva);

int main()
{

   puntPersona nuevopunP;
   cargarDatosPer(&nuevopunP);
      

      
      


   return 0;
}
