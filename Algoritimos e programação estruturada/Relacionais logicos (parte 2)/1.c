#include <stdio.h>
#include <math.h>

main()
{
    /*Codifique um programa que lê um número inteiro.
    A seguir o programa deve imprimir uma mensagem para o usuário dizendo se o número digitado é par.
    Se o número não for par, o programa não deve fazer nada.
    */
    int num, variavel;
    printf("Qual e o seu numero?");
    scanf("%d", &num);
    variavel = num;

    variavel = variavel / 2;

    variavel = variavel * 2;

    if (variavel == num)
    {
        printf("\nSeu numero e par");
    }
    else
    {
        printf("\nSeu numero e impar");
    }
}