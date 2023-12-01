#include <stdio.h>
#include <math.h>

main()
{

    int valor[50];

    for (int i = 0; i < 50; i++)
    {
        valor[i] = (i + 5 * i) % (i + 1);
        printf("\n%d", valor[i]);
    }
}