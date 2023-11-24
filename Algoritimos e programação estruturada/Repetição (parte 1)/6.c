#include <stdio.h>
#include <math.h>

main()
{
    int fruta, opcao;
    float variavel = 0;

    do
    {
        printf("Qual e a fruta desejada?\n\n Abacaxi = R$5,00, Opcao 1 \n\n Maca = R$1,00, Opcao 2 \n\n Pera = R$4,00, Opcao 3\n\n:");
        scanf("%d", &fruta);
         
        if (fruta == 1)
        {
            variavel += 5.00;
        }
        if (fruta == 2)
        {
            variavel += 1.00;
        }
        if (fruta == 3)
        {
            variavel += 4.00;
        }

        printf("\nDeseja escolher uma nova fruta? \n\n4-SIM \n\n0-NAO \n\n:");
        scanf("%d", &opcao);

    } while (opcao != 0);

    printf("\nO valor total e %2.f", variavel);

    return 0;

}