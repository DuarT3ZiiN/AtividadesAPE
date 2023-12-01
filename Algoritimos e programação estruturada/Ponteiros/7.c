#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int soma(int *a, int *b)
{

    *a = *a + *b;
}

main()
{

    int num1;
    int num2;

    printf("Digite o valor 1:");
    scanf("%d", &num1);

    printf("\nDigite o valor 2:");
    scanf("%d", &num2);

    printf("\nValores: %d, %d", num1, num2);

    soma(&num1, &num2);

    printf("\nValores depois da alteracao A: %d, B: %d", num1, num2);
}