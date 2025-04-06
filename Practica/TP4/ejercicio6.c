#include <stdio.h>
#include <math.h>

void calcularAngulos(double a, double b, double c);

int main() {
    double a, b, c;
    
    // Pedir al usuario los lados del triángulo
    printf("Ingrese el lado a: ");
    scanf("%lf", &a);
    printf("Ingrese el lado b: ");
    scanf("%lf", &b);
    printf("Ingrese el lado c: ");
    scanf("%lf", &c);
    
    calcularAngulos(a, b, c);
    
    return 0;
}

void calcularAngulos(double a, double b, double c) {
    // Comprobar si el triángulo es rectángulo
    if (pow(a,2)+pow(b,2)!=pow(c,2)) {
        
        double A = acos((b * b + c * c - a * a) / (2 * b * c));
        double B = acos((a * a + c * c - b * b) / (2 * a * c));
        double C = acos((a * a + b * b - c * c) / (2 * a * b));
        printf("Angulo A: %.2f Radianes | %.2f Grados\n", A, A * 180 / M_PI);
        printf("Angulo B: %.2f Radianes | %.2f Grados\n", B, B * 180 / M_PI);
        printf("Angulo C: %.2f Radianes | %.2f Grados\n", C, C * 180 / M_PI);
    }else{ 
        printf("El triangulo es rectangulo. No se puede calcular los angulos con el teorema del coseno.\n");
    
    }
    
   
    
   
   
}





