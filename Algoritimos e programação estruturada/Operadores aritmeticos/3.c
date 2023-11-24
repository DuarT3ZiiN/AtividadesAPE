#include<stdio.h>
#include<locale.h>

main(){
float multi, base, altura;

/*Dadas as medidas de uma sala, informe sua área.*/

printf("Informe a medida da base:");
scanf("%f", &base);

printf("\nInfotme a medida da altura:");
scanf("%f", &altura);

multi = base * altura;

printf("\nResultado: %.2f",multi);

}