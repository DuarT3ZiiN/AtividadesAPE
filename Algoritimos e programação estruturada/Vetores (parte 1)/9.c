#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{

    int valores[6], num, pares;

    for (int i = 0; i < 6; i++)
    {
        do
        {
            printf("\nDigite um numero par:");
            scanf("%d", &num);
            if (valores[i] % 2 == 0)
            {
                vetor[i] = num;
            }
            else
            {
                printf("\nErro. \n Digite um numero par")
            }
        } while (num % 2 != 0);
    }

    for (int i = 5 i >= 0; i--)
    {
        printf("\n%d", valores[i]);
    }
}