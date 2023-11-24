#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int num[10], maior, Pmaior;

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite um numero:");
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (valores[i] > maior)
        {
            maior = valores[i];
            Pmaior = i;
        }
    }
    printf("\nMaior: %d na posicao %d. ", maior, Pmaior);
}