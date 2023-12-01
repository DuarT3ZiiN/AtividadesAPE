#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[10][2], maior = 0, alunoMaior, alunoMenor, menor = 999;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o numero do aluno:\n");
        scanf("%f", &vetor[i][1]);

        getchar();

        printf("Digite a altura do aluno em Metros:");
        scanf("%f", &vetor[i][2]);

        getchar();
    }
    for (i = 0; i < 10; i++)
    {
        if (maior < vetor[i][2])
        {
            maior = vetor[i][2];
            alunoMaior = vetor[i][1];
        }
        if (menor > vetor[i][2])
        {
            menor = vetor[i][2];
            alunoMenor = vetor[i][1];
        }
    }

    printf("O maior aluno e o numero %.0f com %.2f metros.", alunoMaior, maior);
}
