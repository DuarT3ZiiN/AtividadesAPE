#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int num[6];

    for (int i = 0; i < 6; i++)
    {
        printf("\nDigite um numero:");
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("\n%d", num[i]);
    }
}