#include <stdio.h>
#include <math.h>

main()
{

    int valor[10], valorb[10], valorc[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para o grupo A:");
        scanf("%d", &valor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para o grupo B:");
        scanf("%d", &valorb[i]);
    }

    printf("Valores do grupo C:");

    for (int i = 0; i < 10; i++)
    {

        valorc[i] = valor[i] - valorb[i];
        printf("\n%d", valorc[i]);
    }
}