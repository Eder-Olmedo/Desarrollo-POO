#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("elija un camino sabiamente: \n");
    printf("camino 1: ...\n");
    printf("camino 2: ...\n");
    printf("camino 3: ...\n");
    printf("Eliges:");
    scanf("%i",&num);

    switch (num)
    {
    case 1:
        printf("has elegido el camino de la homosexualidad: \n");
        break;
    case 2:
        printf("Nunca mas despertarás....\n");
        break;

    case 3:
        printf("Oh mira un gatito <3 \n");
        break;

    default:
        printf("elegiste una opcion invalida\n");
        break;
    }

    return 0;
}