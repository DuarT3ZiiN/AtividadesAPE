#include <stdio.h>

int main() {
    int num_pessoas = 10;
    char nome[50];
    char sexo;
    float altura, peso;
    int num_homens = 0, num_mulheres = 0;
    float altura_total_homens = 0, altura_total_mulheres = 0, altura_total_grupo = 0;
    float peso_total_homens = 0, peso_total_mulheres = 0, peso_total_grupo = 0;

    for (int i = 0; i < num_pessoas; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", nome);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Altura (em metros): ");
        scanf("%f", &altura);
        printf("Peso (em kg): ");
        scanf("%f", &peso);

        if (sexo == 'M' || sexo == 'm') {
            num_homens++;
            altura_total_homens += altura;
            peso_total_homens += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            num_mulheres++;
            altura_total_mulheres += altura;
            peso_total_mulheres += peso;
        } else {
            printf("Sexo invalido.\n");
            i--; // Repetir a entrada
        }

        altura_total_grupo += altura;
        peso_total_grupo += peso;
    }

    printf("Numero de homens: %d\n", num_homens);
    printf("Numero de mulheres: %d\n", num_mulheres);

    if (num_homens > 0) {
        printf("Altura media dos homens: %.2f metros\n", altura_total_homens / num_homens);
        printf("Peso medio dos homens: %.2f kg\n", peso_total_homens / num_homens);
    } else {
        printf("Nenhum homem no grupo.\n");
    }

    if (num_mulheres > 0) {
        printf("Altura media das mulheres: %.2f metros\n", altura_total_mulheres / num_mulheres);
        printf("Peso medio das mulheres: %.2f kg\n", peso_total_mulheres / num_mulheres);
    } else {
        printf("Nenhuma mulher no grupo.\n");
    }

    printf("Altura media do grupo: %.2f metros\n", altura_total_grupo / num_pessoas);
    printf("Peso medio do grupo: %.2f kg\n", peso_total_grupo / num_pessoas);

    return 0;
}