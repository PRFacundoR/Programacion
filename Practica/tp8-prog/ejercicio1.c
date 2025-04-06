#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

//-> para puntero, '.' para dato normal;

typedef struct {
int dia;
int mes;
int anio;
} Fecha;

typedef struct {
char nombre[MAX];
short edad;
Fecha fechaPrestamo;
} Lector;

typedef struct {
char titulo[MAX];
char genero[MAX];
int numLectores;
Lector *lectores;
} Libro;

void mayorCantL(Libro *libros,int cantLibros);
void librosPrestados(Libro *libros,int cantLibros);
void filtroPoli(Libro *libros, int cantLibros);

int main(){
    int cantLibros=3;

    Libro *libros = (Libro *)malloc(cantLibros * sizeof(Libro));

    //inicializo libros

    libros[0]= (Libro){"el señor de los anillos", "fantasia", 2 ,(Lector*)malloc(2 * sizeof(Lector))};
    libros[0].lectores[0]=(Lector){"juan algo", 35, {2,10,2023}};
    libros[0].lectores[1]=(Lector){"pedro algo", 15, {26,11,2024}};
    
    libros[1]= (Libro){"sherlock holmes", "policial", 3 ,(Lector*)malloc(3 * sizeof(Lector))};
    libros[1].lectores[0]=(Lector){"juan aguilar", 55, {20,10,2023}};
    libros[1].lectores[1]=(Lector){"pedro gomez", 65, {6,11,2024}};
    libros[1].lectores[2]=(Lector){"pedro perez", 65, {6,12,2023}};

    libros[2]= (Libro){"la vaca lola", "infantil", 4 ,(Lector*)malloc(4 * sizeof(Lector))};
    libros[2].lectores[0]=(Lector){"juan pedro", 75, {5,10,2023}};
    libros[2].lectores[1]=(Lector){"maria jose", 5, {3,11,2024}};
    libros[2].lectores[2]=(Lector){"maria laura", 15, {30,11,2024}};
    libros[2].lectores[3]=(Lector){" jose maria", 45, {11,11,2011}};

    mayorCantL( libros, cantLibros);
    librosPrestados(libros , cantLibros);
    filtroPoli(libros,  cantLibros);
        
    free(libros);
    return 0;
    }

    void mayorCantL(Libro *libros,int cantLibros){
        
        int indiceLibroMax=0;
        
        int varAux=0;
        char nombre;
        for (int i = 0; i < cantLibros ; i++)
        {
           if(varAux < libros[i].numLectores){

            varAux= libros[i].numLectores;
             indiceLibroMax = i;
            
            
           }
        }
         printf("el libro con mayor cantidad de lectores es %s y tiene %d lectores:",libros[indiceLibroMax].titulo,varAux);
    }

    void librosPrestados(Libro *libros ,int cantLibros){
        int lectorMenor=0;

        for ( int i = 0; i < cantLibros; i++)
        {
            for (int j = 0; j < libros[i].numLectores ; j++)
            {
             
             if (libros[i].lectores[j].edad < 21)
            {
                lectorMenor++;
            }
            }
            
           
            

        }
         printf("La cantidad de Menores de 21 que Tomanron libros son:%d\n",lectorMenor);

    }

   void filtroPoli(Libro *libros, int cantLibros){

        int cantiLPoli=0;

        for (int i = 0; i < cantLibros; i++)
        {
            
            if(strcmp(libros[i].genero, "policial") == 0){
                //printf(" \nhola %d",i);
                
                for (int j = 0; j < libros[i].numLectores ; j++)
                {
                    
                        if(libros[i].lectores[j].fechaPrestamo.anio ==2023){
                        cantiLPoli++;
                    
                    }
                    
                    
                }
                
            }

        }

        printf("La cantidad de libros de genero polical que tomaron en 2023 son:%d",cantiLPoli);

        
    }