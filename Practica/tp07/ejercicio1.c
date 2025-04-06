#include <stdio.h>
#include <stdlib.h>
#define max 12
#define TAMA 50
struct 
{
    int dia;
    int mes;
    int anio;

}typedef tFecha;

struct 
{
    char persona[TAMA];
    int puesto;
    
}typedef tEmpleado;

struct 
{
    char nombreP[TAMA];
    int duracionP;
    int horasT[max];
    tEmpleado Empleado;
    tFecha fecha;

}typedef tProyecto;

tProyecto cargarDatos();

void mostrarDatos(tProyecto datos);


int main()
{
    tProyecto datos;

    datos=cargarDatos();
    mostrarDatos(datos);
    return 0;
}




tProyecto cargarDatos(){

    tProyecto proyecto;
    
    printf("ingrese fecha del proyecto(dd-mm-aaaa)\n");
    fflush(stdin);
    scanf("%d",&proyecto.fecha.dia);
  
    fflush(stdin);
    scanf("%d",&proyecto.fecha.mes);
   
    fflush(stdin);
    scanf("%d",&proyecto.fecha.anio);
   
    
    if(proyecto.fecha.mes>=1 && proyecto.fecha.anio>=2024){
        
        printf("ingrese el nombre del proyecto:\n");
        fflush(stdin);
        scanf("%s",proyecto.nombreP);

       do 
            {
        
            printf("ingrese la duracion del proyecto(meses)");
            scanf("%d",&proyecto.duracionP);
        
                
        
        
        }   while (proyecto.duracionP!=0 && proyecto.duracionP>=12);
        
        printf("ingrese horas trabajadas\n");
        fflush(stdin);
        /*proyecto.horasT[max]=(int)malloc(max*sizeof(int)); 
        int horasAux=(int)realloc(proyecto.horasT[max],proyecto.duracionP*sizeof(int));
        proyecto.horasT[max]=horasAux; */

        for (int i = 0; i < proyecto.duracionP ; i++)
        {
            printf("mes %d:", i+1);
            scanf("\n%d",&proyecto.horasT[i]);
            //printf("\n%d",proyecto.horasT[i]);

        }
        
        printf("Ingrese el nombre del trabajador :\n");
        fflush(stdin);
        scanf("%s",proyecto.Empleado.persona);//por ser arreglo
        
        printf("Ingrese el Puesto (1 - FRONTEND\n 2 - BACKEND \n ):");
        fflush(stdin);
        scanf("%d",&proyecto.Empleado.puesto);



    }else{
        printf("fecha invalida"); 
    }

     
   

    
    return(proyecto);
    
    
    
}

void mostrarDatos(tProyecto datos){
     if (datos.duracionP == 0) {
        printf("No hay datos válidos para mostrar.\n");
        return;
    }

    printf("\n--- Datos del Proyecto ---\n");
    printf("Nombre del proyecto: %s\n", datos.nombreP);
    printf("Fecha: %02d-%02d-%04d\n", datos.fecha.dia, datos.fecha.mes, datos.fecha.anio);
    printf("Duración: %d meses\n", datos.duracionP);

    printf("Horas trabajadas por mes:\n");
    for (int i = 0; i < datos.duracionP; i++) {
        printf("Mes %d: %d horas\n", i + 1, datos.horasT[i]);
    }

    printf("\n--- Datos del Empleado ---\n");
    printf("Nombre: %s\n", datos.Empleado.persona);
    printf("Puesto: %s\n", (datos.Empleado.puesto == 1) ? "FRONTEND" : "BACKEND");
}
    
    

