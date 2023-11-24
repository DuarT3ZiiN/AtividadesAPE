#include <stdio.h>
#include <math.h>

main()
{
	/*
	Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
	*/

	int n, soma;

	soma = 0;

	printf("Os Primeiros 50 Numeros Pares sao:\n\n");

	for (n = 1; n <= 100; n++)
	{
		if (n % 2 == 0)
		{
			printf("%d ", n);
			soma += n;
		}
	}

	printf("\n\nA soma dos 50 primeiros numeros pares e: %d", soma);

	return 0;
}