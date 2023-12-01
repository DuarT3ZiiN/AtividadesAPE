#include <stdio.h>
#include <math.h>

main()
{

    int valor[5], escolha;

    for (int i = 0; i < 5; i++)
    {

        printf("Digite um numero:");
        scanf("%d", &valor[i]);
    }

    printf("Digite um codigo [0 - Encerrar o programa, 1 - Ordem direta, 2 - Ordem inversa]:");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 0:

        break;

    case 1:

        for (int i = 0; i < 5; i++)
        {
            printf("%d", valor[i]);
        }
        break;
    case 2:

        for (int i = 4; i >= 0; i -= 1)
        {
            printf("%d", valor[i]);
        }
        break;
    default:

        printf("Codigo invalido!");
        break;
    }
}