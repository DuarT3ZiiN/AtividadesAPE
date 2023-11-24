#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite os numeros");
        scanf("%d", &vetor[i], repetido);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (vetor[i] == vetor[j])
            {
                int repetido = 0;
                for(int k = 0; k < i; k++){
                    if(vetor[i] == vetor[k]){
                        repetido = 1;
                        break;
                    }
                }
                if(!repetido){
                printf("\n%d", vetor[i]);
                }
                break;
            }
        }
    }
}