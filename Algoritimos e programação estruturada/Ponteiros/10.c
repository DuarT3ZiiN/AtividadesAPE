#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{

    int vetor[5];

    for (int i = 0; i < 5; i++)
    {

        printf("Digite 5 valores inteiros:");
        scanf("%d", &vetor[i]);
    }

    int *ptr = vetor;

    printf("\nO dobro de cada valor lido:");
    for (int i = 0; i < 5; i++)
    {

        printf("\t%d", (*ptr) * 2);
        ptr++;
    }
}