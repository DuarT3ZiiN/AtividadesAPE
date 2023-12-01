#include <stdio.h>
#include <math.h>

main()
{

    int valor[10];

    for (int i = 0; i < 10; i++)
    {

        printf("Digite um valor:");
        scanf("%d", &valor[i]);
    }

    for (int i = 0; i < 10; i++)
    {

        if (valor[i] < 0)
        {

            valor[i] = 0;
        }

        printf("\n%d", valor[i]);
    }
}