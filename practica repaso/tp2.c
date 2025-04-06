#include <stdio.h>

/*int main() ejercicio 1
{
    char oracion;
    int cA=0,cE=0,cO=0;
    printf("ingrese una oracion con punto final\n");
    scanf("%c",&oracion);

    while (oracion!='.')
    {
       
        switch (oracion)
        {
        case 'a':
            cA++;
            break;
        
        case 'e':
            cE++;
            break;
        
        case 'o':
            cO++;
            break;
        
        
        } 
        
        scanf("%c",&oracion);
    }

    printf("la cantidad de a:%d  la cantidad de e:%d   la cantidad de o:%d", cA,cE,cO);

    return 0;
}*/


/*int main() //ejercicio 2
{
    
    char oracion;
    int PL,PC=10000, anteriorL=0,anteriorc=0;
    printf("ingrese una oracion con punto final\n");
    scanf("%c",&oracion);

    while (oracion!='.'){
        
        if (oracion!=' '){
            
            anteriorL++;
            anteriorc++;
        
            if (PL<=anteriorL){
                
                PL=anteriorL;
            }

            
            
            

            

        }else{

            if (anteriorc<=PC){
                
                PC=anteriorc;

            }
            anteriorc=0;
            anteriorL=0;
        }
        
        
        scanf("%c",&oracion);
    }

    printf("hola %d, %d", PL, PC);
    return 0;
}*/





/*int main() //ejercicio 3a incompleto
{
    int num,suma=0;

    printf("ingrese un numero\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&num);

        if (num>=2)
        {
            if (num==2)
            {
                suma+=num;
            }else if (num%2!=0 && (num/2==1 ||num/3==1 ||num/5==1 ||num/7==1 ))
            {
                suma+=num;
            }
            
            
            
        }
        

    }
    
    
    
    return 0;
}*/





/*int main() //ejercicio3b
{

    int min,max ,contador=0, contP=0, suma=0;
    
    printf("Ingrese 2 numeros para armar un rango de numeros, primero un minimo y luego un maximo\n");
    scanf("%d",&min);
    scanf("%d",&max);

    for (int i = min; i <=max; i++)
    {
        if (i%2==0)
        {
            contP++;
        }else
        {
            suma+=i;
        }
        
        


        contador++;
    }
    printf("La cantidad de numeros en el rango son: %d", contador);
    printf("La cantidad de numeros pares en el rango son: %d", contP); 
    printf("La suma de numeros impares en el rango son: %d", suma);
    return 0;
}*/




/*int main()//ejercicio 4
{
    float car,agua;
    int km;
    printf("Ingrese la cantidad de agua\n");
    scanf("%f",&agua);
    
    printf("\nIngrese la cantidad de carbon\n");
    scanf("%f",&car);
    
    printf("\nIngrese la distancia dek viaje\n");
    scanf("%d",&km);


    for (int i = 1; i <= km; i++)// carbon/km= 0.2 agua/km=0.333333
    {
        if (car>=0 && agua>=0)
        {
            car-=0.200000;
            agua-=0.333333;
            
            printf("\nEl agua que le queda es: %f",agua);
            printf("\nEl carbon que le queda es: %f",car);
            printf("\n");

        }else{

            if (agua<0.333333)
            {
                printf("\nNo llegaste a tu destino ya que se acabo el agua");
            }
        
            if (car<0.2 )
            {
                printf("\nNo llegaste a tu destino ya que se acabo el carbon");
            }
            break;
        }

    }
    
        printf("\n¡Felicidades! Llegaste al destino con recursos disponibles.\n");
    
   
    
    

    return 0;
}*/


/*int main() //ejercicio 5
{
    char frase, anterior='\0', letra;
    int contB=0,cantL=0;

    printf("Ingrese una frase con punto final\n");
    scanf("%c", &frase);

    fflush(stdin);

    printf("ingrese una letra para buscar al imicio de cada palabra\n");
    scanf("%c", &letra);

    fflush(stdin);
    while (frase!='.')
    {
        if (frase==' ')
        {
            
            contB++;
        }

        if (anterior==' ' && letra==frase)
        {
            cantL++;
        }
        
        
        anterior=frase;
        scanf("%c", &frase);
        
    }
    printf("cantidad de espacio blancos son %d y cantida de palabras que inician con la letra elegida son %d",contB, cantL);

    return 0;
}
*/



int main()
{
    float Suel,aux1, aux2, aux3, gasE=0, antiguedad, titulo;
    char categ;


    printf("Ingrese la categio del empleado G(gerente), M(maestranza), A(administrativo), P(pausar el programa)\n");
    scanf("%c",&categ);
    getchar(); 
    printf("ingrese la antiguedad del empleado en anios y si posee titulo un 1(uno) y si no posee un 0(cero)\n");
    scanf("%f %f",&antiguedad,&titulo);

    while (categ!='P')
    {
        switch (categ)
        {
        case 'M':
            
            Suel=100000;
            gasE+=Suel;
            break;    
        
            case 'G':
            
            Suel=350000;
            gasE+=Suel;
            break;
        
        
            case 'A':
            Suel=2500000;
            gasE+=Suel;
            break;
                
        }

        if(antiguedad>0){
           
            aux1=(Suel*antiguedad*2)/100;
            
        }

        if((categ=='A'|| categ=='G') && titulo==1){
            
            aux2=(Suel*25)/100;
        }else if(categ=='M'){
            
            aux2=(Suel*15)/100;

        }

        if(categ=='A'|| categ=='G'||categ=='M'){
            
            aux3=(Suel*12)/100;
        }
        
        Suel+=aux1+aux2+aux3;
        gasE+=Suel;
        

        printf("El sueldo del empleado es: %f",Suel);    

        printf("\nIngrese la categio del empleado G(gerente), M(maestranza), A(administrativo), P(pausar el programa)\n");
        scanf("%c",&categ);
        getchar(); 
        printf("ingrese la antiguedad del empleado en anios y si posee titulo un 1(uno) y si no posee un 0(cero)\n");
        scanf("%f %f",&antiguedad,&titulo);
    }
    
    printf("La empresa gasto en total:%f", gasE);
    
    return 0;
}
