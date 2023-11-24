#include <stdio.h>
#include <math.h>

main()
{
    /*Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar.
    As condições para aposentadoria são:
    • Ter pelo menos 65 anos;
    • Ou ter trabalhado pelo menos 30 anos;
    • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
    */
    int idade, tempo;

    printf("qual e a sua idade?");
    scanf("%d", &idade);
    printf("qual e o tempo de servico prestado?");
    scanf("%d", &tempo);

    if (idade >= 65)
    {
        printf("\nVoce ja pode se aposentar!");
    }
    else if ((idade >= 60) && (tempo >= 25))
    {
        printf("\nVoce ja pode se aposentar!");
    }
    else if (tempo >= 30)
    {
        printf("\nVoce ja pode se aposentar!");
    }
    else
    {
        printf("\nVoce ainda nao pode se aposentar!");
    }
}