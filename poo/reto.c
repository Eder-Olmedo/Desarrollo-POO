#include <stdio.h>

int main()
{
    int x;
    int y;
    int aux;

    printf("ingresa el valor de X: ");
    scanf("%i",&x);

    printf("ingrese el valor de Y: ");
    scanf("%i",&y);

    aux = x;
    x = y;
    y = aux;

    printf("el valor intercambiado de X : %i \n",x);
    printf("el valor intercambiado de Y : %i \n",y);


    return 0;
}