#include <stdio.h>

int main()
{
    printf("Operadores de Asigancion");
    int value1;

    value1 = 28;
    printf("operador : = %i \n", value1);

    value1 += 1;
    printf("operador : += %i \n", value1);

    value1 -= 2;
    printf("operador : -= %i \n", value1);

    value1 *= 3;
    printf("Operador : *= %i \n", value1);
    
    value1 /= 5;
    printf("operador : /= %i \n",value1);
    
    value1 %=2;
    printf("operador : % =, %i \n",value1);
    

    return 0;
}