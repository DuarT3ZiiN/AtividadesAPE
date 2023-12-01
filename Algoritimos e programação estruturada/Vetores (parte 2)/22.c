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

    printf("\nValores de C:\n");

    for (int i = 0; i < 10; i++)
    {

        if (valorc[i] % 2 == 1)
        {
            valorc[i] = valorb[i];
        }

        if (valorc[i] % 2 == 0)
        {
            valorc[i] = valor[i];
        }

        printf("\nValores de C: %d", valorc[i]);
    }
}