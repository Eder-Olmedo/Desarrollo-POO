#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cal;

    printf("=================================\n");
    printf("Lista de Aprobados y Desaprobados\n");
    printf("=================================\n");

    printf("Ingrese su nota: ");
    scanf("%i",&cal);

    if(cal>90)
    {
        printf("Manolito, es excelente.\n");
    }
    else
    {
        if(cal>60)
        {
            printf("Manolo aprobó satisfactoriamente\n");
        }
        else
        {
            printf("Manolito, vuelve el proximo año\n");
        }
    }

    return 0;
}