#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{

    int num[10], pares;

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite os valores");
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0)
        {
            pares++;
        }
    }
    printf("\nTotal de pares: %d", pares);
}