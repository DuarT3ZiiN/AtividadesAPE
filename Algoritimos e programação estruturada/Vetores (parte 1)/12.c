#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int valores[5];
    int maior, menor, Pmaior, Pmenor, media;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &valores[i]);
    }
    maior = valores[0];
    menor = valores[0];

    for (int i = 0; i < 5; i++)
    {
        if (valores[i] > maior)
        {
            maior = valores[i];
            Pmaior = i;
        }
        if (valores[i] < menor)
        {
            menor = valores[i];
            Pmenor = i;
        }
    }
    media = valores[0] + valores[1] + valores[2] + valores[3] + valores[4] / 5;
    printf("Maior: %d na posicao %d. \nmenor %d na posicao: %d. \nMedia: %d", maior, Pmaior, menor, Pmenor, media);
}