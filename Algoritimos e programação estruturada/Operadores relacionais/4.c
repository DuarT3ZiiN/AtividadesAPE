#include<stdio.h>

main(){
float peso, pesominimo = 60.00;

printf("Qual e o seu peso?");
scanf("%f", &peso);

if( peso > pesominimo ){
    printf("\nVoce e gigante");   
}else{
    printf("\nVoce e uma vareta");
}

    printf(" \ncontinua a execucao do algoritimo");


}