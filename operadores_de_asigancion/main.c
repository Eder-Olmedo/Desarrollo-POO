#include <stdio.h>

int main()
{
    printf("Operadores de Asigancion");
    int value1;

    value1 = 28;
    printf("operador de Asigancion: = %i \n", value1);

    value1 += 1;
    printf("operador de incremento: += %i \n", value1);

    value1 -= 2;
    printf("operador de decremento: -= %i \n", value1);

    value1 *= 3;
    printf("Operador de multiplicacion: *= %i \n", value1);
    
    value1 /= 5;
    printf("operador de division: /= %i \n",value1);
    
    value1 %=2;
    printf("operador de modulo: % =, %i \n",value1);
    

    return 0;
}