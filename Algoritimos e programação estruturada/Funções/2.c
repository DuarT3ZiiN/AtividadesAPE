#include <stdio.h>

void calcular_locacoes_gratuitas(int filmes_retirados[], int locacoes_gratuitas[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        locacoes_gratuitas[i] = filmes_retirados[i] / 15;
    }
}

int main()
{
    int filmes_retirados[500];
    int locacoes_gratuitas[500];

    calcular_locacoes_gratuitas(filmes_retirados, locacoes_gratuitas, 500);

    return 0;
}