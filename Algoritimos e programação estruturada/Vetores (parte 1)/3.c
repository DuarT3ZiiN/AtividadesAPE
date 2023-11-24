#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int vetorP[10];
    int vetorQuadrado[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite um numero:");
        scanf("%d", &vetorP[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        vetorQuadrado[i] = vetorP[i] * vetorP[i];

        printf("\n%d", vetorP[i]);
        printf("\n%d", vetorQuadrado[i]);
    }
}