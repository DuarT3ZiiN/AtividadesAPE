#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void passando(int *pa, int *pb)
{

    int valor = *pa;

    *pa = *pb;
    *pb = valor;
}

main()
{

    int a, b;

    printf("Digite o valor de A:");
    scanf("%d", &a);

    printf("Digite o valor de B:");
    scanf("%d", &b);

    passando(&a, &b);

    printf("\nComo ficou o valor de A: %d", a);
    printf("\nComo ficou o valor de B: %d", b);
}