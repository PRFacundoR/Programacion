#include <stdio.h>

#include <time.h>//srand(time(NULL))

#include <stdlib.h>// para generar numeros randoms

/*int main() //ejercicio 1
{
    
    char frase,anterior=' ';
    int cantTP=0,cantRE=0;
    
    printf("ingrese una frase\n");
    fflush(stdin);
    scanf("%c", &frase);
 
    while (frase!='.')
    {
        if (anterior==' ')
        {
            cantTP=cantTP+1;
        }
        


        if (anterior==' ')
        {
            
            while (frase!=' '&& frase!='.')
            {
                if (frase=='r')
                {
                    scanf("%c",&frase);
                    
                    if (frase=='e')
                    {
                        cantRE++;
                        break;
                    }
                    
                }
                if(frase!=' '&& frase!='.'){
                  scanf("%c",&frase);  
                }
                
                
            }
            
        }

        
        anterior=frase;
        if (frase!='.')
        {
            scanf("%c",&frase);
        }
       
            
        
    }
    
    printf("la cantidad de palabras son:%d, la cantidad de palabras con 're' son: %d", cantTP, cantRE);

    return 0;
}*/






   int main() //ejercicio2
    {
        
        char frase,anterior=' ';
        float cantTP=0,cantVHV=0;
        float porcentaje;

        printf("ingrese una frase\n");
        fflush(stdin);
        scanf("%c", &frase);
    
        while (frase!='.')
        {
            if (anterior==' ')
            {
                cantTP++;
            }
            


            if (anterior==' ')
            {
                while (frase!=' '&& frase!='.')//si o si va este bicondiconal para evitat bucle infinito
                {


                    //aca realizo todo el analisis
                    if (frase=='a'|| frase=='e' ||frase=='i'|| frase=='o'|| frase=='u' )
                    {
                        scanf("%c",&frase);
                        
                        if (frase=='h')
                        {
                            scanf("%c",&frase);
                            if (frase=='a'|| frase=='e' ||frase=='i'|| frase=='o'|| frase=='u' ){
                                cantVHV++;
                                break;
                            }
                        }
                        
                    }



                    if(frase!=' '&& frase!='.'){//si o si va este bicondiconal para evitat bucle infinito, es para evitar que entre un espacio o punto final aca
                  scanf("%c",&frase);  
                }
                    
                }
                
            }

            anterior=frase;
            if (frase!='.')//si o si va este condiconal para evitat bucle infinito evito que se actualice un punto
        {
            scanf("%c",&frase);
        }
            
            
        }
        porcentaje=(100*cantVHV)/cantTP;
        printf("el porcentaje de palabras con V-H-V son:%f, la cantidad de palabras con 'V-H-V' son: %f", porcentaje, cantVHV);
        return 0;
    }

/*#define TAMA 1000 ejercicio3
void contarVocales(int cont, char array[TAMA]);


int main()
{
    
    int cont=0;
    char array[TAMA],frase;
    
    printf("Ingrese una frase terminada en punto\n");
    fflush(stdin);
    scanf("%c",&frase);


    while (frase!='.')
    {
        if (frase=='a'|| frase=='e' ||frase=='i'|| frase=='o'|| frase=='u' )
        {
            array[cont]=frase;
            cont++;
        }
        scanf("%c",&frase);

    }
    

    contarVocales(cont, array);
    printf("La cantidad total de vocales son:%d", cont);

    return 0;
}


void contarVocales(int cont, char array[TAMA]){

int Ca=0,Ce=0,Ci=0,Co=0,Cu=0;

    for (int i = 0; i < cont; i++)
    {
        
        switch (array[i])
        {
        case 'a':
            Ca++;
            break;
        
        case 'e':
            Ce++;
            break;

        case 'i':
            Ci++;
            break;

        case 'o':
            Co++;
            break;

        case 'u':
            Cu++;
            break;
          
        
        }
    }
    
    printf("La cantidad de letras a son: %d, La cantidad de letras e son: %d, La cantidad de letras i son: %d, La cantidad de letras o son: %d, La cantidad de letras u son: %d",Ca,Ce,Ci,Co,Cu);

}*/




/*#define TAMA 100 //ejercicio4
void generarNum(int array[TAMA], int min, int max, int N);


int main()
{
    
    int array[TAMA],min, max, N;

    printf("Ingrese dos numeros\n");
    scanf("%d %d",&min, &max);

    printf("\n Ingrese cuantos numeros impares quieres que se guarden\n");
    scanf("%d", &N);
    
    if (min > max) { 
        int temp = min;
        min = max;
        max = temp;
    }



    
    
        generarNum(array,min,max,N);
    
    
    

    return 0;
}

    void generarNum(int array[TAMA],int min, int max, int N){
    srand(time(NULL));
    int eje,aux,j=0,antes;
    eje=max-min;

   while (N>0){
        aux=min + rand() % (max - min + 1);

        if (aux%2==1)
        {
            array[j]=aux;
            if (array[j]==antes)
            {
                N++;
            }else{
                N--;
            }
            antes=array[j];
            j++;   
            
        }
        
    }

    for (int i = 0; i < eje; i++)
    {
        aux=min + rand() % (max - min + 1);

        if (aux%2==1)
        {
            array[j]=aux;
            //if (array[j]==antes)
            //{
                //N++;
            //}//else{
                
                if (N==0)
                {
                break;
                }
                
                N--;
            //}
            
            
            //antes=array[j];
            j++;   
            
        }

    }
 
    
    for (int i = 0; i < j; i++)
    {
        printf("Los numeros aleatoreos guardados son el numero %d es: %d\n",i+1,array[i]);

    }
    


}*/