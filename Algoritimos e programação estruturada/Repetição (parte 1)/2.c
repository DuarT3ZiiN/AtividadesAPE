#include <stdio.h>
#include <math.h>

main()
{

    /*
    Faça um programa que leia um número inteiro positivo N
    e imprima todos os números naturais de 0 até N em ordem decrescente.
    */

    int x, n;

    printf("Digite um numero Inteiro Positivo: ");
    fflush(stdout);
    scanf("%d", &n);

    if (n > 0)
    {
        printf("\nNumeros Naturais de 0 ate %d:\n\n", n);

        for (x = n; x >= 0; x--)
        {
            printf("%d ", x);
        }
    }
    else
    {
        printf("\nNumero Invalido!!!");
    }

    return 0;
}