#include <stdio.h>
#include <math.h>

main()
{

    int valor[10], X = 0;

    for (int i = 0; i < 10; i++)
    {

        printf("Digite um valor: ");
        scanf("%d", &valor[i]);
    }

    printf("Defina um valor para X:");
    scanf("%d", &X);

    for (int i = 0; i < 10; i++)
    {
        if ((valor[i] % X) == 0)
        {

            printf("%d, ", valor[i]);
        }
    }
}