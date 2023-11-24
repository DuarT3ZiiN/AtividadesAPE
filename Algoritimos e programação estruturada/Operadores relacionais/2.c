#include<stdio.h>

main(){
float salario, salariominimo = 1320.00;

printf("Qual e o seu salario?");
scanf("%f", &salario);

if( salario > salariominimo ){
    printf("\nSeu salario e maior que o salario minimo");   
}else{
    printf("\nO seu salario e menor que o minimo");
}

    printf(" \ncontinua a execucao do algoritimo");


}