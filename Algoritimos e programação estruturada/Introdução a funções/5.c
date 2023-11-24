#include <stdio.h>
#include <math.h>

#define PI 3.14159265

float calcularVolumeEsfera(float raio)
{
    float volume = (4.0 / 3.0) * PI * pow(raio, 3);
    return volume;
}

int main()
{
    float raio, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = calcularVolumeEsfera(raio);

    printf("O volume da esfera é: %.2f\n", volume);

    return 0;
}