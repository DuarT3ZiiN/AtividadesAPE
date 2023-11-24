#include <stdio.h>
#include <math.h>

main()
{
    /*Faça um algoritmo que calcule a media ponderada das notas de 3 provas.
    A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2.
    Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado.
    A nota para aprovação deve ser igual ou  superior a 7.0 pontos.
    */

    float prova1, prova2, prova3, media, mediaap = 7.0;

    printf("Qual e a nota da sua primeira prova?");
    scanf("%f", &prova1);
    printf("\nQual e a nota da sua segunda prova?");
    scanf("%f", &prova2);
    printf("\nQual e a nota da sua terceira prova?");
    scanf("%f", &prova3);

    media = prova1 + prova2 + prova3 / 3;

    if (media >= mediaap)
    {
        printf("\nVoce esta aprovado(a)");
    }
    else
    {
        printf("Voce esta reprovado(a)");
    }
}