#include <stdio.h>

int main()
{
    int value, result;
    printf("Operadores de Incremento y Decremento \n");

    value = 27;
    printf("value antes del result: %i \n",value);
    result = value++; 
    printf("Valor inicial %i, Valor con incremento final ++  %i \n", value,result);
    printf("===================== \n");
    //primero se le asigna el valor al result, y lue se le suma al valor inicial
    // se me complica un poco. pero hagan esto:  dividan en tres parte: Result | Value | ++
    // se toma del centro a la izquierda. 0 | 27 | +1;
    // result = 27, valor (incial) despues del result = 28;


    value = 27;
    printf("value antes del result: %i \n",value);
    result = ++value;
    printf("valor inicial %i, Valor con incremento ++ inicial %i \n", value, result);
    printf("===================== \n");
    //primero se le suma el valor +1 al inicial y luego se asigna result
    // se me complica un poco. pero hagan esto:  dividan en tres parte: Result | Value | ++
    // si el incremento está en el centro
    // se toma del izquierda al centro y derecha. 0 | +1 | 27;
    // valor (incial) despues del result = 28, result = 28: ( +1 + 27);


    value = 27;
    printf("value antes del result: %i \n",value);
    result = value--;
    printf("valor inicial %i, valor con decremento final-- %i \n",value,result);
    printf("===================== \n");
    //primero se le asigna el valor al result, y lue se le resta al valor inicial
    // se me complica un poco. pero hagan esto:  dividan en tres parte: Result | Value | ++
    // se toma del centro a la izquierda. 0 | 27 | -1;
    // result = 27, valor (incial) despues del result = 26;

    value = 27;
    printf("value antes del result: %i \n",value);
    result = --value;
    printf("valor inicial %i, valor con incremento -- inicial %i \n", value, result);
    printf("===================== \n");
    //primero se le resta el valor -1 al valor inicial y luego se asigna result
    // se me complica un poco. pero hagan esto:  dividan en tres parte: Result | Value | ++
    // se toma del centro a la izquierda. 0 | -1 | 27;
    // result = 26, valor (incial) despues del result = 26;

    return 0;
}