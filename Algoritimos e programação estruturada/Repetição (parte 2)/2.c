#include <stdio.h>
#include <limits.h> // Para usar INT_MAX como valor inicial
#include <ctype.h>  // Para usar a função tolower

int main() {
    int contador_elevador_a = 0, contador_elevador_b = 0, contador_elevador_c = 0;
    int contador_matutino = 0, contador_vespertino = 0, contador_noturno = 0;
    char elevador, periodo;
    int menor_contagem_periodo = INT_MAX; // Inicializado com um valor alto

    char continuar; // Variável para decidir se a pesquisa deve continuar

    do {
        for (int i = 0; i < 5; i++) {
            printf("Pessoa %d:\n", i + 1);
            printf("Elevador mais utilizado (A/B/C): ");
            scanf(" %c", &elevador);
            elevador = tolower(elevador); // Converter para minúsculas
            printf("Periodo de utilizacao (M/V/N): ");
            scanf(" %c", &periodo);
            periodo = tolower(periodo); // Converter para minúsculas

            switch (elevador) {
                case 'a':
                    contador_elevador_a++;
                    break;
                case 'b':
                    contador_elevador_b++;
                    break;
                case 'c':
                    contador_elevador_c++;
                    break;
                default:
                    printf("Opcao de elevador invalida.\n");
                    i--; // Repetir a entrada
                    continue;
            }

            switch (periodo) {
                case 'm':
                    contador_matutino++;
                    break;
                case 'v':
                    contador_vespertino++;
                    break;
                case 'n':
                    contador_noturno++;
                    break;
                default:
                    printf("Opcao de periodo invalida.\n");
                    i--; // Repetir a entrada
            }

            // Atualizar a menor contagem de período se necessário
            if (contador_matutino < menor_contagem_periodo) {
                menor_contagem_periodo = contador_matutino;
            }
            if (contador_vespertino < menor_contagem_periodo) {
                menor_contagem_periodo = contador_vespertino;
            }
            if (contador_noturno < menor_contagem_periodo) {
                menor_contagem_periodo = contador_noturno;
            }
        }

        char elevador_mais_usado;
        int maior_contagem_elevador = 0;
        if (contador_elevador_a > maior_contagem_elevador) {
            maior_contagem_elevador = contador_elevador_a;
            elevador_mais_usado = 'A';
        }
        if (contador_elevador_b > maior_contagem_elevador) {
            maior_contagem_elevador = contador_elevador_b;
            elevador_mais_usado = 'B';
        }
        if (contador_elevador_c > maior_contagem_elevador) {
            maior_contagem_elevador = contador_elevador_c;
            elevador_mais_usado = 'C';
        }

        char periodo_mais_usado;
        int maior_contagem_periodo = 0;
        if (contador_matutino > maior_contagem_periodo){
            maior_contagem_periodo = contador_matutino;
            periodo_mais_usado = 'M';
        }
        if (contador_vespertino > maior_contagem_periodo) {
            maior_contagem_periodo = contador_vespertino;
            periodo_mais_usado = 'V';
        }
        if (contador_noturno > maior_contagem_periodo) {
            maior_contagem_periodo = contador_noturno;
            periodo_mais_usado = 'N';
        }

        float diferenca_percentual = ((float)(maior_contagem_periodo - menor_contagem_periodo) / menor_contagem_periodo) * 100;

        printf("Periodo mais usado de todos: %c (Elevador %c)\n", periodo_mais_usado, elevador_mais_usado);
        printf("Elevador mais frequentado: %c (Periodo %c)\n", elevador_mais_usado, periodo_mais_usado);
        printf("Diferenca percentual entre o mais usado e o menos usado: %.2f%%\n", diferenca_percentual);

        // Solicitar ao usuário se deseja continuar
        printf("Deseja continuar com a pesquisa (S/N)? ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    return 0;
}