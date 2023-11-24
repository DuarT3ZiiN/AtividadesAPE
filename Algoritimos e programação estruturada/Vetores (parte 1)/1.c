#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{

    int num[5] = {1, 0, 5, -2, -5, 7};
    int soma;

    num[4] = 100;
    soma = num[0] + num[1] + num[5];
    printf("\nA soma das variaveis e: %d", soma);

    for (int i = 0; i < 5; i++)
    {
        printf("\n%d ", num[i]);
    }
}