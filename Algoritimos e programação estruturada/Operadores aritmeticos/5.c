#include<stdio.h>
#include<locale.h>

main(){
float multi, num1;

/*Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.*/

printf("\nDigite um valor:");
scanf("%f",&num1);

multi = num1 * 4.98;

printf("\nO valor e: %.2f", multi);

}