#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op;
    double a, b, c;

    printf("=========================\n");
    printf("Caluladora que Calcula\n");
    printf("=========================\n \n");

    printf("Ingrese valor 1:");
    scanf("%lf",&a);

    printf("Ingresese valor 2:");
    scanf("%lf",&b);

    printf("¿Que operación Desea Realizar? \n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. multiplicacion\n");
    printf("4. División\n");

    scanf("%i",&op);
    printf("Su opcion fue: %i\n", op);
    switch (op)
    {
    case 1:
        c = a+b;
        printf("el resultado es: %.2f\n",c);
        break;
    case 2:
        c = a-b;
        printf("el resultado es: %.2f\n",c);
        break;
    case 3:
        c = a*b;
        printf("el resultado es: %.2f\n",c);
        break;
    case 4:
        c= a/b;
        printf("el resultado es: %.2f\n",c);
        break;
    default:
        printf("opcion invalida\n");
        break;
    }


    return 0;
}