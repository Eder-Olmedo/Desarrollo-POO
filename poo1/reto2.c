#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tem;
    float tempc;

    printf("ingrese su temperatura en Farenheit: ");
    scanf("%f",&tem);

    tempc = (tem - 32)/(1.8);

    printf("Su temperatura en Celcius es: %.2f\n",tempc);

    return 0;

}