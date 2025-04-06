/*1) Incrementando y Decrementando.
a) Declare una variable incremento de tipo entera.
b) Declare una variable decremento de tipo entera.
c) Solicite por pantalla al usuario que ingrese dos enteros y almacene los mismos en
incremento y decremento.
d) Incremente en uno la variable incremento. ¿Lo puede hacer de tres formas
diferentes?
e) Decrementa en uno la variable decremento. ¿Lo puede hacer de tres formas
diferentes?
f) Muestre por pantalla el contenido de las variables incremento y decremento.
g) Invierta las variables de tal forma que incremento tenga el valor de decremento y
decremento tenga el valor de incremento. Muestre en pantalla.
*/

/*
#include <stdio.h>

float main(){
    float resta;
   
    float suma;
    float aux;
    prfloatf("ingrese un numero: "); 
    scanf("%d", &resta);

    prfloatf("Ingrese el segundo :");
      scanf("%d", &suma);   
  
    aux= suma;
    suma= resta;
    resta= aux;

    prfloatf("variable suma: %d  y variable resta: %d",resta,suma);
    return 0;
} */
/*2) Promediando Notas
Una maestra de primer grado necesita sacar los promedios de sus alumnos, los cuales
tienen 3 materias: Lengua, Matemáticas y Ciencias.
Para ayudarla, escribe un programa que pida al usuario ingresar las calificaciones
correspondientes a las tres materias de un estudiante (cada una calificada sobre 10,
usando 2 decimales).
a) Calcule y muestre el promedio obtenido.
b) Clasifique el promedio y muestre de acuerdo con el siguiente criterio:
■ "Excelente" si el promedio es mayor o igual a 9.00.
■ "Muy Bueno" si el promedio es mayor o igual a 7.00 pero menor a 9.00.
■ "Regular" si el promedio es mayor o igual a 5.00 pero menor a 7.00.
■ "Reprobado" si el promedio es menor a 5.00.
*/
#include <stdio.h>
int main(){
    float len;
    float mat;
    float cien;
    int promedio;
    printf(" \n nota de lengua: ");
    scanf("%f",&len );
    printf(" \n nota de matematica: ");
    scanf("%f",&mat);
    printf("\n nota de ciencias: ");
    scanf("%f",&cien);
    promedio= (len+mat+cien)/3;
    printf("promedio: %.2f \n",  promedio);
        
    /*switch (promedio)
    {
        case 10:
        case 9:
            printf("Excelente \n");
            break;
        case 8:
        case 7:
            printf("muy bueno \n");
            break;
        case 6:
        case 5:
            printf("Regular \n");
            break;
        default:
            printf("Desaprobado \n");
            break;
        }*/
// se usa if no switch
    return 0;
}