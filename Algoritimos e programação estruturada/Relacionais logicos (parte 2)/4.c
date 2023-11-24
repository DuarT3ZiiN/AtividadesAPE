#include <stdio.h>
#include <math.h>

main()
{
    /*Tabela no AVA*/
    float salario, tempo, resultado;

    printf("qual e o seu salario?");
    scanf("%f", &salario);
    printf("qual e o tempo de servico prestado?");
    scanf("%f", &tempo);

    if ((salario <= 500) && (tempo < 1))
    {
        resultado = salario + (salario * 0.25);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 500) && (tempo >= 1 && tempo <= 3))
    {
        resultado = salario + 100.00 + (salario * 0.25);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 500) && (tempo >= 4 && tempo <= 6))
    {
        resultado = salario + 200.00 + (salario * 0.25);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 500) && (tempo >= 7 && tempo < 10))
    {
        resultado = salario + 300.00 + (salario * 0.25);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 500) && (tempo > 10))
    {
        resultado = salario + 500.00 + (salario * 0.25);

        printf("\nO seu salario e :%f", resultado);
    }
    if ((salario <= 1000) && (tempo < 1))
    {
        resultado = salario + (salario * 0.20);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 1000) && (tempo >= 1 && tempo <= 3))
    {
        resultado = salario + 100.00 + (salario * 0.20);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 1000) && (tempo >= 4 && tempo <= 6))
    {
        resultado = salario + 200.00 + (salario * 0.20);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 1000) && (tempo >= 7 && tempo < 10))
    {
        resultado = salario + 300.00 + (salario * 0.20);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 1000) && (tempo > 10))
    {
        resultado = salario + 500.00 + (salario * 0.20);

        printf("\nO seu salario e :%f", resultado);
    }
    if ((salario <= 1500) && (tempo < 1))
    {
        resultado = salario + (salario * 0.15);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 1500) && (tempo >= 1 && tempo <= 3))
    {
        resultado = salario + 100.00 + (salario * 0.15);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 1500) && (tempo >= 4 && tempo <= 6))
    {
        resultado = salario + 200.00 + (salario * 0.15);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 1500) && (tempo >= 7 && tempo < 10))
    {
        resultado = salario + 300.00 + (salario * 0.15);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 1500) && (tempo > 10))
    {
        resultado = salario + 500.00 + (salario * 0.15);

        printf("\nO seu salario e :%f", resultado);
    }
    if ((salario <= 2000) && (tempo < 1))
    {
        resultado = salario + (salario * 0.25);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 2000) && (tempo >= 1 && tempo <= 3))
    {
        resultado = salario + 100.00 + (salario * 0.10);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 2000) && (tempo >= 4 && tempo <= 6))
    {
        resultado = salario + 200.00 + (salario * 0.10);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 2000) && (tempo >= 7 && tempo < 10))
    {
        resultado = salario + 300.00 + (salario * 0.10);

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario <= 2000) && (tempo > 10))
    {
        resultado = salario + 500.00 + (salario * 0.10);

        printf("\nO seu salario e :%f", resultado);
    }
    if ((salario > 2000) && (tempo < 1))
    {
        resultado = salario;

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario > 2000) && (tempo >= 1 && tempo <= 3))
    {
        resultado = salario + 100.00;

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario > 2000) && (tempo >= 4 && tempo <= 6))
    {
        resultado = salario + 200.00;

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario > 2000) && (tempo >= 7 && tempo < 10))
    {
        resultado = salario + 300.00;

        printf("\nO seu salario e :%f", resultado);
    }
    else if ((salario > 2000) && (tempo > 10))
    {
        resultado = salario + 500.00;

        printf("\nO seu salario e :%f", resultado);
    }
}