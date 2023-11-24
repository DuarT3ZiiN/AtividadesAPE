#include <stdio.h>
#include <math.h>

main()
{

    /*Escreva um algoritmo que leia um número e imprima
    a raiz quadrada do número caso ele seja positivo ou igual a zero
    e o quadrado do número caso ele seja negativo.
    */
    float num, resultado;

    printf("Qual numero?");
    scanf("%f", &num);

    if (num >= 0)
    {
        resultado = sqrt(num);

        printf("\nEsse e o resultado: %f", resultado);
    }
    else
    {
        resultado = pow(num, 2);
        printf("\nEsse e o resultado: %f", resultado);
    }
}