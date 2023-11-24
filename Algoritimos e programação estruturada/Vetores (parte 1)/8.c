#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int valores[6];

    for (int i = 0; i < 6; i++)
    {
        printf("\nDigite os valores:");
        scanf("%d", &valores[i]);
    }

    for (int i = 5 i >= 0; i--)
    {
        printf("\n%d", valores[i]);
    }
}