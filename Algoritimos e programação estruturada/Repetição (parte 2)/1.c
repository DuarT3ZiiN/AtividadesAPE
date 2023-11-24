#include <stdio.h>

int main() {
    int idade, contador_otimo = 0, contador_bom = 0, contador_regular = 0, contador_ruim = 0, contador_pessimo = 0;
    int idade_ruim_total = 0, idade_otimo_max = -1, idade_ruim_max = -1;
    int contador_geral = 0; // Contador geral de todas as pessoas cadastradas
    char continuar; // Variavel para decidir se a pesquisa deve continuar

    do {
        contador_geral++; // Incrementar o contador geral

        printf("Resposta %d:\n", contador_geral);
        printf("Idade: ");
        scanf("%d", &idade);

        char opiniao;
        printf("Opiniao (A/B/C/D/E): ");
        scanf(" %c", &opiniao);

        switch (opiniao) {
            case 'A':
                contador_otimo++;
                if (idade > idade_otimo_max) {
                    idade_otimo_max = idade;
                }
                break;
            case 'B':
                contador_bom++;
                break;
            case 'C':
                contador_regular++;
                break;
            case 'D':
                contador_ruim++;
                idade_ruim_total += idade;
                if (idade > idade_ruim_max) {
                    idade_ruim_max = idade;
                }
                break;
            case 'E':
                contador_pessimo++;
                break;
            default:
                printf("Opcao invalida.\n");
                contador_geral--; // Nao incrementar o contador geral se a opcao for invalida
                continue; // Repetir a entrada
        }

        printf("Deseja continuar a pesquisa (S/N)? ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("Quantidade de respostas Otimo: %d\n", contador_otimo);
    printf("Diferenca percentual entre respostas Bom e Regular: %.2f%%\n", (float)(contador_bom - contador_regular) / (contador_bom + contador_regular) * 100);
    
    if (contador_ruim > 0) {
        printf("Media de idade das pessoas que responderam Ruim: %.2f\n", (float)idade_ruim_total / contador_ruim);
        printf("Percentagem de respostas Pessimo: %.2f%%\n", (float)contador_pessimo / contador_geral * 100);
        printf("Maior idade que utilizou a opcao Pessimo: %d\n", idade_ruim_max);
        if (idade_otimo_max != -1) {
            printf("Diferenca de idade entre a maior idade que respondeu Otimo e a maior idade que respondeu Ruim: %d\n", idade_otimo_max - idade_ruim_max);
        }
    } else {
        printf("Nenhuma resposta Ruim.\n");
    }

    printf("Contador geral de todas as pessoas cadastradas: %d\n", contador_geral);

    return 0;
}