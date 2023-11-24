#include <stdio.h>
#include <math.h>

#define PI 3.14159265

float calcularVolumeCilindro(float altura, float raio)
{
    float volume = PI * pow(raio, 2) * altura;
    return volume;
}

int main()
{
    float altura, raio, volume;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    volume = calcularVolumeCilindro(altura, raio);

    printf("O volume do cilindro é: %.2f\n", volume);

    return 0;
}