#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA = 1;
    float floatA = 1.1;
    double doubleA = 1.2;
    char charA = 'A';
    bool boolean = false;

    //imprimir valores de los datos inicializados
    //para indicar que dato se va a expresar, se usa un formateador(indicar dato)
    // que asigna el valor y se suma "i", que indica el tipo de datos
    printf("Entero es: %i \n",integerA);
    // se imprime la varibla flotante
    printf("Flotante es: %.2f \n",floatA);
    //imprime la varibal de tiple double
    printf("Double es: %.2f \n",doubleA);
    //imprimir el valor del caracter
    printf("Caracter es: %c \n",charA);

    //All of above, in one line.
    printf("Entero es: %i, Flotante es: %.2f ,Double es: %.2f ,Caracter es: %c \n",integerA, floatA,doubleA,charA);

    //now, how do you recive date of user?
    int entero;
    float flotante;
    char caracter;

    printf("ingrese el valor del entero: ");
    scanf("%i", &entero);
    

    printf("ingrese el valor del flotante: ");
    scanf("%f", &flotante);
    
    printf("ingrese el valor del caracter: ");
    scanf(" %c", &caracter);
    
    printf("el valor del entero es: %i \n",entero);
    printf("el valor del flotante es: %.2f \n",flotante);
    printf("el valor del caracter es: %c \n",caracter);

    return 0;
}