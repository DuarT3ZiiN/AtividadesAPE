#include <stdio.h>
#include <math.h>

main()
{
    int vetor[10], vetorImpar[10];

    for (int i = 0; i < 10; i++)
    {

        do
        {

            printf("Digite um numero de 0 a 50:");
            scanf("%d", &vetor[i]);

        } while (vetor[i] > 50 || vetor[i] < 0);
    }

    printf("\nValores:");

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 1)
        {

            vetorImpar[i] = vetor[i];
        }
        printf("%d, ", vetor[i]);
    }

    printf("\nValores Impar:");
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        if (vetorImpar[i] <= 50 && vetorImpar[i] >= 0)
        {

            printf("%d, ", vetorImpar[i]);
        }
    }
}