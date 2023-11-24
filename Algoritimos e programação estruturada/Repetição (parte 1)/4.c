#include <stdio.h>
#include <math.h>

main()
{

	/*
	Faça um programa que determine e mostre os cinco primeiros múltiplos de 3
	considerando números maiores que 0.
	*/
	int mult = 0, n;

	for (n = 1; n <= 5; n++)
	{
		mult = mult + 3;
		printf("%d ", mult);
	}

	return 0;
}