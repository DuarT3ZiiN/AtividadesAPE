#include<stdio.h>
#include<locale.h>
#include<math.h>


main(){
float multi, potencia, raio, pi = 3.1416;

/*Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.*/

printf("Informe o raio:");
scanf("%f", &raio);

potencia = pow(raio,2);
multi = pi * potencia;

printf("\nA area desse circulo e: %.2f", multi);

}