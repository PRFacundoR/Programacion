/*6) Reconociendo figuras geométricas
Se desea contar con un programa que a partir de las medidas en cm de los lados de una figura
determine de cuál se trata: cuadrado, rectángulo o un triángulo. Para este último caso, deberá
determinar además si es equilátero (tres lados iguales), isósceles (solo dos lados iguales) o
escaleno (tres lados distintos). Para todas las figuras, el programa debe mostrar su perímetro.
De acuerdo a la figuras que el programa reconoce, el máximo de lados a ingresar es 4: a, b, c y d.
Siendo este último el que puede o no tener un dato válido. En el caso de entrar datos para un
rectángulo, pueden cargarse como: a=2 b=5 c=2 d=5 o bien, a=2 b=2 c=5 d=5. Incluso no
conformar una figura válida, en este caso el perímetro devuelto debe ser cero.
*/
#include <stdio.h>
int main(){
int a,b,c;
int d;

printf("ingrese 4 numeros, si quiere entrar a los triangulos el 4to numero es 0");
scanf("%d", a );
scanf("%d", b );
scanf("%d", c );
scanf("%d", d );

if (a>=0 && b>=0 && c>=0 && d>=0 )
{
    

    if ((a==b && b==c && c==d)){
        //cuadrado
    }else if ( (a==b && c==d)||(a==c && b==d))
    {
        /*rectangulo */
    }else if (a==b && b==c)
    {
        /* triangulo equilatero*/
    } else if ((a==b && c!=b)|| ( a==c && a!=b) )
    {
        /* triangulo iscoles */
    }
    
    
    
    
}
 

}