#include <stdio.h>
#include <math.h>

main()
{
    int pedido;
    float preco, variavel = 0;

    do
    {
        printf("Qual e o seu pedido? \n100 Cachorro quente\n101 Bauru simples\n102 Bauru com ovo\n103 hamburguer\n104 cheeseburguer:");
        scanf("%d", &pedido);

        switch (pedido)
        {
        case 100:
            preco = 10.10;
            variavel += preco;
            break;

        case 101:
            preco = 8.30;
            variavel += preco;
            break;

        case 102:
            preco = 8.50;
            variavel += preco;
            break;

        case 103:
            preco = 12.50;
            variavel += preco;
            break;

        case 104:
            preco = 13.25;
            variavel += preco;
            break;
        }
    } while (pedido < 100 || pedido > 105);

    printf(" O valor e %2.f", variavel);
}