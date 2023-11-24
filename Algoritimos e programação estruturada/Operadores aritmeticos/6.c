#include<stdio.h>
#include<locale.h>

main(){
float valor, frete, venda, despesas, preco, lucro, final, margem;

/*Faça um programa em que o usuário 
digite o custo de uma determinada mercadoria, em seguida, 
adiciona-se ao custo o valor do frete e despesas eventuais 
(também solicitadas pelo teclado). Para concluir, 
o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.*/

printf("Qual e o valor da mercadoria?");
scanf("%f", &valor);

printf("\nQual e o custo do frete?");
scanf("%f", &frete);

printf("\nQual e o custo das despesas?");
scanf("%f",&despesas);

printf("\nQual e o valor de venda?");
scanf("%f", &venda);

preco = valor + frete + despesas;
lucro = venda - preco;
final = lucro / preco;
margem = final * 100;

printf("a margem de lucro E:%.2f%%",margem);


}