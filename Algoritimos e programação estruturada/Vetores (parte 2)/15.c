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
        for (int c = i + 1; c < 10; c++)
        {
            if (valor[i] == valor[c])
            {
                valor[i] = 0;
                valor[c] = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (valor[i] != 0)
        {

            printf("\n%d", valor[i]);
        }
    }
}