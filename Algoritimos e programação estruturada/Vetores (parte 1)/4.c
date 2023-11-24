#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int vetor[8], x, y, soma;

    for (int i = 0; i < 8; i++)
    {
        printf("\nDigite os valores");
        scanf("%d", &vetor[i]);
    }

    do
    {
        printf("\nDigite o valor de x(0-7)");
        scanf("%d", &x);
        printf("\nDigite o valor de y(0-7)");
        scanf("%d", &y);
        if ((x >= 0 && x < 8) && (y >= 0 && y < 8))
        {
            for (int i = 0; i < 8; i++)
            {
                if (i == x)
                {
                    soma += vetor[i];
                }
                if (i == y)
                {
                    soma += vetor[i];
                }
            }
        }
        else
        {
            printf("\nIndices errados.");
        }
    } while (x < 0 || x > 7 && y < 0 || y > 7);
    printf("\nSoma: %d", soma);
}