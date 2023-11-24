#include<stdio.h>
#include<locale.h>

main(){
int carros;
float comissao = 0.05, final, salario, comissaofixa;

/*Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, 
mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. 
Escrever um algoritmo que leia o número de carros por ele vendidos, 
o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. 
Calcule e escreva o salário final do vendedor.*/

printf("Quantos carros voce vendeu?");
scanf("%d", &carros);

printf("\nQual e o seu salario?");
scanf("%f", &salario);

printf("\nQual e a sua comissao fixa?");
scanf("%f", &comissaofixa);

final = comissaofixa * carros * comissao + salario;

printf("\nSeu salario final e:  %.2f", final);


}