#include <stdio.h>
#include <math.h>

main()
{
    int ddd;

    printf("Qual e o seu ddd?");
    scanf("%d", &ddd);

    switch (ddd)
    {

    case 61:
        printf("\nVoce e de Brasilia!");
        break;

    case 71:
        printf("\nVoce e de Salvador!");
        break;

    case 11:
        printf("\nVoce e de Sao Paulo!");
        break;

    case 21:
        printf("\nVoce e do Rio de Janeiro!");
        break;

    case 32:
        printf("\nVoce e de Juiz de Fora!");
        break;

    case 19:
        printf("\nVoce e de Campinas!");
        break;

    case 27:
        printf("\nVoce e de Vitoria!");
        break;

    case 31:
        printf("\nVoce e de Belo Horizonte!");
        break;
    }
}