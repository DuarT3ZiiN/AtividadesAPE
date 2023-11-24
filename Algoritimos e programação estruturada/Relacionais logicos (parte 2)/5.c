#include <stdio.h>
#include <math.h>

main()
{
    /*Tabela no AVA*/
    float a, b, c, delta, x1, x2;

    printf("Qual e o valor de a?");
    scanf("%f", &a);
    printf("\nQual e o valor de b?");
    scanf("%f", &b);
    printf("\nQual e o valor de c?");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0)
    {
        printf("\nA raiz e inexistente!");
    }
    else if (delta == 0)
    {
        x1 = -b + sqrt(delta) / (2 * a);
        printf("\n(Essa e uma raiz unica)Os valores sao:%2.f ", x1);
    }
    else 
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("\n Os valores sao:%2.f %2.f", x1, x2);
        }
}