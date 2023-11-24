#include <stdio.h>
#include <math.h>

main()
{

    /*Construa um algoritmo que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor.
     */

    int a, b, c, d;

    printf("Qual e o valor de A?");
    scanf("%d", &a);
    printf("\nQual e o valor de B?");
    scanf("%d", &b);
    printf("\nQual e o valor de C?");
    scanf("%d", &c);
    printf("\nQual e o valor de D?");
    scanf("%d", &d);

    if ((a > b) && (a > c) && (a > d))
    {
        printf("O A e o maior");
        if ((b < c) && (b < d))
        {
            printf("\nB e o menor");
        }
        else if ((c < b) && (c < d))
        {
            printf("\nC e o menor");
        }
        else
        {
            printf("\nD e o menor");
        }
    }
    else if ((b > a) && (b > c) && (b > d))
    {
        printf("O B e o maior");
        if ((a < c) && (a < d))
        {
            printf("\nA e o menor");
        }
        else if ((c < a) && (c < d))
        {
            printf("\nC e o menor");
        }
        else
        {
            printf("\nD e o menor");
        }
    }
    else if ((c > a) && (c > b) && (c > d))
    {
        printf("O C e o maior");
        if ((a < b) && (a < d))
        {
            printf("\nA e o menor");
        }
        else if ((b < a) && (b < d))
        {
            printf("\nB e o menor");
        }
        else
        {
            printf("\nD e o menor");
        }
    }
    else
    {

        printf("O D e o maior");
        if ((a < b) && (a < d))
        {
            printf("\nA e o menor");
        }
        else if ((b < a) && (b < d))
            printf("\nB e o menor");
    }
    else
    {
        printf("\nC e o menor");
    }
}
