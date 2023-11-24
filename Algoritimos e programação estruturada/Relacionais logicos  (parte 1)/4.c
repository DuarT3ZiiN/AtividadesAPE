#include <stdio.h>
#include <math.h>

main()
{

    /*Dados três valores A, B e C,
    construa um algoritmo, que imprima os valores de forma descendente (do maior para o menor).
    */

    int A, B, C, maior, mid, menor;

    printf("Qual e o valor de A?");
    scanf("%d", &A);

    printf("\nQual e o valor de B?");
    scanf("%d", &B);

    printf("\nQual e o valor de C?");
    scanf("%d", &C);

    if ((A > B) && (A > C))
    {
        maior = A;
    }
    if ((A < B) && (B > C))
    {
        maior = B;
    }
    if ((C > B) && (A < C))
    {
        maior = C;
    }
    if (((A > B) && (A < C)) || ((A < B) && (A > C)))
    {
        mid = A;
    }
    if (((A < B) && (B < C)) || ((A > B) && (B > C)))
    {
        mid = B;
    }
    if (((C > B) && (A > C)) || ((C < B) && (A < C)))
    {
        mid = C;
    }
    if ((A < B) && (A < C))
    {
        menor = A;
    }
    if ((A > B) && (B < C))
    {
        menor = B;
    }
    if ((C < B) && (A > C))
    {
        menor = C;
    }

    printf("\nO maior numero e: %d", maior);
    printf("\nO numero do meio e: %d", mid);
    printf("\nO menor numero e: %d", menor);
}
