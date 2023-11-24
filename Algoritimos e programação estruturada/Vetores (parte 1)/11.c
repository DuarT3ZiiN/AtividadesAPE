#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
int num[10], negativos = 0, soma = 0;

for( int i = 0; i < 10; i++){
    printf("\nDigite os valores:");
    scanf("%d" , &num[i]);
    if(num[i] < 0 ){
        negativos++;
    }else{
        soma += num[i];
    }
}
printf("\nQuantidade de valores negativos : %d e a soma dos positivos %d", negativos, soma);
    
}