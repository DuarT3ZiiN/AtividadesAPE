#include<stdio.h>

main(){
    char nome[20];
    int idade;
    char matricula[20];
    char endereco[40];
    char curso[30];
    int periodo;
    char disciplina[50];
    char disciplina1[50];
    char disciplina2[50];
    char disciplina3[50];
    float mensalidade;

//Cadastro de nome
printf("Digite o nome:\n");
fgets(nome, 20, stdin);

//Cadastro de idade
printf("Digite a idade:\n");
scanf("%d", &idade);
fflush(stdin);

//Cadastro de matricula
printf("Digite a matricula:\n");
fgets(matricula,50, stdin);

//Cadastro de endereço
printf("Digite o endereco:\n");
fgets(endereco, 50, stdin);

//Cadastro de curso
printf("Digite o curso:\n");
fgets(curso, 30, stdin);

//Cadastro de periodo
printf("Digite o periodo:\n");
scanf("%d", &periodo);
fflush(stdin);

//Cadastro de disciplinas
printf("Digite a disciplina:\n");
fgets(disciplina, 50, stdin);

printf("Digite outra disciplina:\n");
fgets(disciplina1, 50, stdin);

printf("Digite outra disciplina:\n");
fgets(disciplina2, 50, stdin);

printf("Digite outra disciplina:\n");
fgets(disciplina3, 50, stdin);

//Cadastro de valor da mensalidade
printf("Digite o valor da mensalidade:\n");
scanf("%f", &mensalidade);


//Mostrar os dados 

printf("\n---------Dados informados----------");
printf("\nNome: %s",nome);
printf("\nIdade: %d",idade);
printf("\nMatricula:%s",matricula);
printf("\nEndereco:%s",endereco);
printf("\nCurso:%s",curso);
printf("\nPeriodo%d",periodo);
printf("\nPrimeira disciplina:%s", disciplina);
printf("\nSegunda disciplina:%s", disciplina1);
printf("\nTerceira disciplina:%s", disciplina2);
printf("\nQuarta disciplina:%s", disciplina3);
printf("\nO valor da mensalidade:%.2f", mensalidade);



}