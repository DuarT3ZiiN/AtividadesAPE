#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char cabelo, olhos, sexo;
    int contadorGeral = 0, contadorEspecifico = 0, idade;
    float salario, porcentagem;

    do
    {
        contadorGeral++;
        fflush(stdin);
        do
        {
            printf("\nDigite o sexo (m / f)\n:");
            scanf("%c", &sexo);
            fflush(stdin);
            if (sexo != 'm' && sexo != 'f')
            {
                printf("\nOpcao invalida. Digite novamente");
            }

        } while (sexo != 'm' && sexo != 'f');

        do
        {
            printf("\nDigite a idade entre 10 e 100\n:");
            scanf("%d", &idade);
            fflush(stdin);
            if (idade < 10 || idade > 100)
            {
                printf("\nOpcao invalida. Digite novamente");
            }

        } while (idade != -1 && (idade < 10 || idade > 100));

        do
        {
            printf("\nDigite a cor dos cabelos \nc => Castanho \nl => Loiro \nr => Ruivo \n p => Preto \n:");
            scanf("%c", &cabelo);
            fflush(stdin);
            if (cabelo != 'c' && cabelo != 'l' && cabelo != 'r' && cabelo != 'p')
            {
                printf("\nOpcao invalida. Digite novamente");
            }

        } while (cabelo != 'c' && cabelo != 'l' && cabelo != 'r' && cabelo != 'p');

        do
        {
            printf("\nDigite a cor dos olhos \nc => Castanho \na => Azuis \nv => verdes \n p => Preto \n:");
            scanf("%c", &olhos);
            fflush(stdin);
            if (olhos != 'c' && olhos != 'a' && olhos != 'v' && olhos != 'p')
            {
                printf("\nOpcao invalida. Digite novamente");
            }

        } while (olhos != 'c' && olhos != 'a' && olhos != 'r' && olhos != 'p');

        do
        {
            printf("\nDigite o seu salario\n:");
            scanf("%f", &salario);
            fflush(stdin);
            if (salario < 0)
            {
                printf("\nOpcao invalida. Digite novamente");
            }

        } while (salario < 0);

        if (sexo == 'f' && cabelo == 'c' && olhos == 'c' && (idade > 18 && idade < 35))
        {
            contadorEspecifico++;
        }

        printf("\nDigite -1 para parar ou 0 para continuar \n:");
        scanf("%d", &idade);

    } while (idade != -1);

    porcentagem = (float)contadorEspecifico * 100 / contadorGeral;

    printf("\nContador geral: %d", contadorGeral);
    printf("\n Porcentagem mulheres com caracteristicas especificas: %2.f", porcentagem);
}