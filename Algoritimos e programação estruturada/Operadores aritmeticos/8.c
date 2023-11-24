#include<stdio.h>
#include<locale.h>

main(){
int  idade, meses, mes, diast, diasa, diasm, dias, dia;


/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos,
 meses e dias e escreva a idade dessa pessoa expressa apenas em dias. 
 Considerar ano com 365 dias e mês com 30 dias.*/

 printf("Informe quantos anos voce tem:");
 scanf("%d", &idade);

 printf("\nInforme em qual mes voce nasceu:");
 scanf("%d", &mes);

 printf("\nInforme em qual dia voce nasceu:");
 scanf("%d", &dia);

dias = 30 - dia;
meses = 12 - mes;
diasa = idade * 365;
diasm = meses * 30;
diast = dias + diasa + diasm;

printf("\nSua idade em dias e: %d", diast);






}