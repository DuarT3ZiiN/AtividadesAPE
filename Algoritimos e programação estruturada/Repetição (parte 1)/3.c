#include <stdio.h>
#include <math.h>

main()
{
    /*
    Faça um programa que leia um número inteiro N
    e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional).
    */

    int n, x;

    x = 1;

    printf("Digite um numero Inteiro: ");
    fflush(stdout);
    scanf("%d", &n);

    if (n > 0)
    {
        while (n != 0)
        {
            if (x % 2 != 0)
            {
                printf("%d ", x);
                n--;
            }

            x++;
        }
    }
    else
    {
        printf("\nNumero Invalido!!!");
    }

    return 0;
}