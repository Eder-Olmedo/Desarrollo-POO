#include <stdio.h>

int main()
{
    int x;
    printf("valor de X = 10, sumar con incremento el doble de su valor \n");

    x = 10;
    x +=x*2;

    printf("El valor de x actual es: %i \n", x);
    
    return 0;
}