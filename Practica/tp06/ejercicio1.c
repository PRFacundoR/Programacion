#include <stdio.h>
int main(){
    int a,b,*p,*q;
    printf("ingrese un numero\n ");
    scanf("%d", &a);
    fflush(stdin);
    printf("\ningrese otro numero\n ");
    scanf("%d", &b);

    p=&a;//dirreccion de memoria de numero
    q=&b;

printf("los valores son %d,%d",a,b);


  /*1)d)*/  printf("El contenido de lo que apunta el puntero: %d,%d\n",*p,*q);//valor del puntero que contiene a "a" y "b"

   /*1)c)*/ printf("\nLo que contiene de dato el puntero: %p,%p\n", p,q);//direccion de memoria de p y q

    /*1)e)*/printf("\nLa direccion de memoria de la vble numero: %p,%p\n", &a,&b);//direccion de memoria

    //printf("\nLo que contiene de dato la vble numero: %d\n", numero);// valor de la variable numero

int c;
printf("ingrese un numero :\n");
scanf("%d",&c);
printf("el contenido de c es :%d",c);
printf("la duireccion de memoria  de c es :%p\n",&c);


c=*p;
printf("El valor de c modificado es %d y el valor de a es %d\n",c,a);

c=(*p+*q);
printf("\nEl valor de c es %d y el valor de a es %d y el valor de b es %d\n",c,a,b);

*p=*p+1; //suma un al valor donde apunta p ej:10+1=11
*p=a+1; //mueve un lugar el puntero
p=p+1;//suma un al valor donde apunta p ej:10+1=11
p=&a+1;//mueve un lugar el puntero
p=&a; //aaigna el valor de la memoria de a al puntero *p

return 0;

}