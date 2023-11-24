#include<stdio.h>
#include<locale.h>
#include<math.h>

main(){
float salario, reajuste, final, reajuste2;

/*Escreva um algoritmo para ler o salário mensal atual 
de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.*/

printf("Qual e o seu salrio?:");
scanf("%f", &salario);
fflush(stdin);

printf("\nQual e a porcentagem do reajuste?");
scanf("%f", &reajuste);


reajuste2 = salario * reajuste / 100;

final = reajuste2 + salario;

printf("\nO salario total e: %.2f", final);

}