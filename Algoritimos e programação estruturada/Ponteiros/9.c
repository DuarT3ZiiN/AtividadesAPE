#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{

    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("\t%d", &matriz[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}