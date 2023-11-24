#include <stdio.h>

void trocar_elementos(int matriz[10][10])
{

    for (int i = 0; i < 10; i++)
    {
        int temp = matriz[1][i];
        matriz[1][i] = matriz[7][i];
        matriz[7][i] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        int temp = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[i][9 - i];
        matriz[i][9 - i] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        int temp = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = temp;
    }
}

int main()
{
    int matriz[10][10];

    trocar_elementos(matriz);

    return 0;
}