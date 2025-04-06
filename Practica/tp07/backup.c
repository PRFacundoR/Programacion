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
    
        printf("nombre de la persona es:");
        puts(datos.Empleado.persona);
    
    
    

}