#include <stdio.h>

float precio(char categoria, char electrodomesticos, char informatica);
float precioF(float precioPro, int metoPago);
void menu();

int main()
{
    char categoria;
    char electrodomesticos;
    char informatica;
    int metoPago;
    float precioPro;
    float pago;
    float RT = 0; // recaudacion total

    menu();
    printf("\n\nIngrese la categoria (e: electrodomesticos, i: informatica, A: salir): ");
    scanf(" %c", &categoria);
    if (categoria == 'e')
    {
        printf("\nIngrese el producto (h: heladera, l: lavarropas, m: microondas): ");
        scanf(" %c", &electrodomesticos);
    }
    else
    {
        printf("\nIngrese el producto (l: laptop, t: tablet, s: smartphone): ");
        scanf(" %c", &informatica);
    }

        printf("\nIngrese el metodo de pago (0: efectivo, 1: tarjeta 1 cuota, 3: tarjeta 3 cuotas, 6: tarjeta 6 cuotas): ");
        scanf("%d", &metoPago);
        
    while (categoria != 'A')
    {
        precioPro = precio(categoria, electrodomesticos, informatica);
        pago = precioF(precioPro, metoPago);

        RT += pago;

        printf("El precio final a pagar es: %.2f\n", pago);

        printf("\nIngrese la categoria (e: electrodomesticos, i: informatica, A: salir): ");
        scanf(" %c", &categoria);

        if (categoria == 'e')
        {
            printf("\nIngrese el producto (h: heladera, l: lavarropas, m: microondas): ");
            scanf(" %c", &electrodomesticos);
        }
        else
        {
            printf("\nIngrese el producto (l: laptop, t: tablet, s: smartphone): ");
            scanf(" %c", &informatica);
        }
        printf("\nIngrese el metodo de pago (0: efectivo, 1: tarjeta 1 cuota, 3: tarjeta 3 cuotas, 6: tarjeta 6 cuotas): ");
        scanf("%d", &metoPago);
    }

    printf("Recaudacion total del día: %.2f\n", RT);

    return 0;
}

void menu()
{

    printf("Lista de electrodomesticos con sus precios:\n");
    printf("Heladera: $850.000\n");
    printf("Lavarropas: $759.000\n");
    printf("Microondas: $520.000\n");

    printf("\n Lista de productos informaticos con sus precios:\n");
    printf("Laptop: $1.500.000\n");
    printf("Tablet: $755.000\n");
    printf(" Smartphone: $539.000\n");

    printf("\nMetodos de pago:");
    printf("\n Pagas en efectivo, obtienes un 10 por ciento de descuento sobre el total.");

    printf("\n Pagas en tarjeta de credito a 1 cuota, no hay ningun descuento ni recargo");

    printf("\n Pagas en tarjeta de credito a 3 cuotas, hay un recargo del 15 por ciento sobre el total.");

    printf("\n Pagas en tarjeta de credito a 6 cuotas, hay un recargo del 25 por ciento sobre el total.");
}

float precio(char categoria, char electrodomesticos, char informatica)
{
    float precioP;
    switch (categoria)
    {
    case 'e':
        switch (electrodomesticos)
        {
        case 'h':
            precioP = 850000;
            break;

        case 'l':
            precioP = 759000;
            break;

        case 'm':
            precioP = 520000;
            break;
        }
        break;

    case 'i':
        switch (informatica)
        {
        case 'l':
            precioP = 1500000;
            break;

        case 't':
            precioP = 755000;
            break;

        case 's':
            precioP = 539000;
            break;
        }
        break;
    }
    return precioP;
}

float precioF(float precioPro, int metoPago)
{
    float precioFinal;
    switch (metoPago)
    {
    case 0:
        precioFinal = precioPro * 0.9;
        break;
    case 1:
        precioFinal = precioPro;
        break;
    case 3:
        precioFinal = precioPro * 1.15;
        break;
    case 6:
        precioFinal = precioPro * 1.25;
        break;
    }
    return precioFinal;
}