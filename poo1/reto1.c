#include <stdio.h>

//tipos de datos
int main()
{
    float pi = 3.1415;
    float radio, altura;
    double area, volumen;

    printf("ingrese el valor del Radio:");
    scanf("%f",&radio);

    printf("ingrese el valor de la altura:");
    scanf("%f",&altura);

    area = 2*pi*radio*(altura +radio) ;
    volumen = (pi*radio*radio)*altura;

    printf("el are total del cilindro es: %.2f \n", area);
    printf("el Volumen del cilindro es: %.2f \n",volumen);
    
    return 0;
}