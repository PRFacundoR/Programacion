#include <stdio.h>

int main()
{
    int cantA, cantC, distViaje;
    float aguaR, carbonR;

    printf("ingrese la cantidad de agua y carbon que tiene su tren, y que distacia va a recorrer se cuenta en Km \n");
    scanf("%d %d %d",&cantA, &cantC, &distViaje );
    if (cantA >= 0.33333333 && cantC >= 0.2)
    {
        aguaR=cantA;
        carbonR=cantC;

        for (int i = 1; i <= distViaje; i++)
        {

            if (aguaR >= 0 && carbonR >= 0)
            {
                
                aguaR= aguaR - 0.33333333;
                carbonR= carbonR - 0.2;
                printf("\n En el kilometro %d \n", i);
                printf("Su cantidad de agua restante es: %f \n", aguaR);
                printf("Y su cantidad de carbon restante es: %f \n", carbonR);
                
            }else{
                if (aguaR < 0.33333333 && carbonR < 0.2)
                {
                    printf("\nNo llegaste a tu destino ya que se agotaron el agua y el carbon.\n");
                }
                else if (aguaR < 0.33333333)
                {
                    printf("\nNo llegaste a tu destino ya que se agotó el agua.\n");
                }
                else if (carbonR < 0.2)
                {
                    printf("\nNo llegaste a tu destino ya que se agoto el carbon.\n");
                }
                break;
            }
            
            
        }
        printf("\n llegaste a tu destino");  
    }else{
        printf("No tiene suficiente agua o carbón para iniciar el viaje.\n");
    }
    
    return 0;
}
