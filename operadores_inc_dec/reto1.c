#include <stdio.h>

int main()
{
    //ingresar numero
    int num;
    printf("Ingrese un numero: ");
    scanf(" %i",&num);
    // operadores de asignacion, anadir modulo 5
    printf("Numero: %i \n",num);
    num %=5;
    printf("El numero con modulo 5, ahora es: %i \n",num);
    //imprimir resultado con incremento de +1
    num=num++;
    printf("resultado con incremento de 1: %i \n", num++);

    return 0;
}