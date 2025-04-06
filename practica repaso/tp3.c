#include <stdio.h>
#include <ctype.h>
//ejercicio 1
/*int suma(int a, int b);
int resta(int a, int b);

int producto(int a, int b);
int division(int a, int b);

int potencia(int a, int b);

int main()
{
    float a,b,sumas,restas,productos,divisiones,potencias;
    char eleccion;
    printf("ingrese dos numeros\n");
    
    scanf("%f %f", &a,&b);
     fflush(stdin);
    printf("\n Seleccione una opcion S(suma),R(resta),P(prodructo),D(division),p(potencia),Y(parar)\n");
    scanf("%c", &eleccion);
   

    while (eleccion!='Y')
    {
        
        switch (eleccion)
        {
            case 'S':
                sumas=suma(a,b);
                printf("resultado de la operacio:%f\n",sumas);
                break;
        
            case 'R':
                restas=resta(a,b);
                printf("resultado de la operacio:%f\n",restas);
                break;
        
        
            case 'P':
                productos=producto(a,b);
                printf("resultado de la operacio:%f\n",productos);
                break;
        
                
    
            case 'D':
                divisiones=division(a,b);
                printf("resultado de la operacio:%f\n",divisiones);
                break;
        


            case 'p':
                potencias=potencia(a,b);
                printf("resultado de la operacio:%f\n",potencias);
                break;
        
        }
        
        printf("ingrese dos numeros\n");
        scanf("%f %f", &a,&b);
         fflush(stdin);
        printf("\n Seleccione una opcion S(suma),R(resta),P(prodructo),D(division),p(potencia),Y(parar)\n");
        scanf("%c", &eleccion);
       

    }
    

    return 0;
}


int suma(int a, int b){
    int sumar;
    sumar=a+b;
    return sumar;
}

int resta(int a, int b){

    int restar;
    restar=a-b;
    return restar;
}

int producto(int a, int b){
    int productor;
    for (int i = 0; i < b; i++)
    {
        productor=suma(a,a);
    }
    return productor;
}

int division(int a, int b) {
    int cociente = 0;
    while (a >= b) {  
        a = resta(a, b);  
        cociente = suma(cociente, 1);
    }
    return cociente;
}

int potencia(int a, int b){

    int potenciador=1;
    for (int i = 0; i < b; i++)
    {
        potenciador=producto(potenciador,a);
    }
    return potenciador;
}*/

/*int main() ejercicio 2
{
    char frase;
    int cant=0,lon=0,M=0,m=0,n=0,cE=0;
    printf("ingrese su contrasenia con punto final");
    scanf("%c",&frase);


    while (frase!='.')
    {
        cant++;
        if (cant>=8)
        {
            lon=1;
        } 
        if(isupper(frase)){
                M=1;
        }
        if (islower(frase))
        {
            m=1;
        }if (isdigit(frase))
        {
            n=1;
        }
        if (ispunct(frase))
        {
            cE=1;
        }
        
        
        scanf("%c",&frase);
        
    }
    
    if (lon!=1)
    {
        printf("Faltan caracteres");
    }
    if (M!=1)
    {
        printf("Falta poner letra mayuscula");
    }
    
    if (m!=1)
    {
        printf("Falta poner letra minuscula");
    }
    if(n!=1){
        printf("Falta poner un numero");
    }
    if(cE!=1){
        printf("Falta poner un caracter especial");

    }

    if (lon==1 && M==1 && m==1 && cE==1)
    {
        printf("contrasenia correcta");
    }
    
    
    return 0;
}*/




/*void categorias(); //ejercicio4
int precioProduc(char product);
int metodoDP(char mPago, int precio);

int main()
{
    char product,mPago;
    int pago,Rpago=0,cont=5;
    
    categorias();
    while (cont!=0)
    {
        printf("\ningrese el producto que desea comprar, seleccionando la letra entre parentesis\n");
        scanf("%c",&product);
        fflush(stdin);

        int precio=precioProduc(product);

        printf("\ningrese el metodo de pago segun el numero entre parentesis \n");
        scanf("%c",&mPago);
        fflush(stdin);

        pago=metodoDP(mPago,precio);

        cont--;
        Rpago+=pago;
    }
    
    
    printf("\nLa recaudacion total es:%d pesos\n",Rpago);
    
    return 0;
}




void categorias(){

    printf("Lista de electrodomesticos con sus precios:\n");
    printf("Heladera(H): $850.000\n");
    printf("Lavarropas(L): $759.000\n");
    printf("Microondas(M): $520.000\n");

    printf("\n Lista de productos informaticos con sus precios:\n");
    printf("Laptop(l): $1.500.000\n");
    printf("Tablet(T): $755.000\n");
    printf(" Smartphone(S): $539.000\n");

    printf("\nMetodos de pago:");
    printf("\n Pagas en efectivo(0), obtienes un 10 por ciento de descuento sobre el total.");

    printf("\n Pagas en tarjeta de credito a 1 cuota(1), no hay ningun descuento ni recargo");

    printf("\n Pagas en tarjeta de credito a 3 cuotas(2), hay un recargo del 15 por ciento sobre el total.");

    printf("\n Pagas en tarjeta de credito a 6 cuotas(3), hay un recargo del 25 por ciento sobre el total.");

}


int precioProduc(char product){

    int precio;
    switch (product)
    {
    case 'H':
        precio=850000;
        break;
        
    case 'L':
        precio=759000;
        break;
        
    case 'M':
        precio=520000;
        break;
        
    case 'l':
        precio=1500000;
        break;
        
    case'T' :
        precio=755000;
        break;
        
    case 'S':
        precio=539000;
        break;
        
    }

    return precio;
}

int metodoDP(char mPago,int precio){
    int aux;
    switch (mPago)
    {
    case '0' :
        aux=precio-(precio*10)/100;
        break;
    
    case '1':
        aux=precio;
        break;
    
    case'2':
        aux=precio+(precio*15)/100;
        break;

    case'3':
        aux=precio+(precio*25)/100;
        break;    
    }

    printf("\nEl total es:%d pesos\n",aux);
    return aux;

}*/