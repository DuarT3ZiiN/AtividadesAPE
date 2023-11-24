#include <stdio.h>

float converterFahrenheitParaCelsius(float fahrenheit)
{
    float celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
    return celsius;
}

int main()
{
    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = converterFahrenheitParaCelsius(fahrenheit);

    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", fahrenheit, celsius);

    return 0;
}