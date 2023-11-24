#include<stdio.h>

main(){
float altura, alturaminima = 1.8;

printf("Qual e a sua altura?");
scanf("%f", &altura);

if( altura > alturaminima ){
    printf("\nVoce nao e um anao");   
}else{
    printf("\nVoce e uma torre");
}

    printf(" \ncontinua a execucao do algoritimo");


}