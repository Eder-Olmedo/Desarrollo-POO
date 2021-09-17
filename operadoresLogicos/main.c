#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;

    printf("Ingresa el primer valor:");
    scanf("%i",&a);
    printf("ingresa el segundo valor:");
    scanf("%i",&b);

    printf("el primer valor es: %i \n", a);
    printf("el segundo valor es: %i\n", b);

    if(a<b)
    {
        printf("EL numero menor es: %i \n", a);
    }
    else
    {
        printf("El numero menor es: %i \n", b);
    }
    
    return 0;
}