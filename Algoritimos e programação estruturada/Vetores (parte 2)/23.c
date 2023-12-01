#include <stdio.h>
#include <math.h>

main()
{

    int valor[5], valorb[5], valorc[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor para o grupo A:");
        scanf("%d", &valor[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor para o grupo B:");
        scanf("%d", &valorb[i]);
    }

    printf("Valores do produto escalar:");

    for (int i = 0; i < 5; i++)
    {

        valorc[i] = valor[i] * valorb[i];
        printf("\nX * Y = %d", valorc[i]);
    }
}