#include <stdio.h>
#include <math.h>
#include <string.h>

main()
{
    int prato, sobremesa, bebida, cal1, cal2, cal3, calt;
    char p[30], s[30], b[30];

    printf("Qual e o seu prato?\n 1  vegetariano\n2  Peixe\n3  Frango\n4  Carne:");
    scanf("%d", &prato);
    printf("\nQual e a sua sobremesa?\n 1  Abacaxi\n2  Sorvete diet\n3  Mouse diet\n4  Mouse chocolate:");
    scanf("%d", &sobremesa);
    printf("\nQual e a sua bebida?\n 1  Cha\n2  Suco de laranja\n3  Suco de melao\n4  Refrigerante diet:");
    scanf("%d", &bebida);

    switch (prato)
    {
    case 1:
        cal1 = 180;
        strcpy(p, "Vegetariano");
        break;

    case 2:
        cal1 = 230;
        strcpy(p, "Peixe");
        break;

    case 3:
        cal1 = 250;
        strcpy(p, "Frango");
        break;

    case 4:
        cal1 = 350;
        strcpy(p, "Carne");
        break;
    }
    switch (sobremesa)
    {
    case 1:
        cal2 = 75;
        strcpy(s, "Abacaxi");
        break;

    case 2:
        cal2 = 110;
        strcpy(s, "Sorvete diet");
        break;

    case 3:
        cal2 = 170;
        strcpy(s, "Mouse diet");
        break;

    case 4:
        cal2 = 200;
        strcpy(s, "Mouse chocolate");
        break;
    }
    switch (bebida)
    {
    case 1:
        cal3 = 20;
        strcpy(b, "Cha");
        break;

    case 2:
        cal3 = 70;
        strcpy(b, "Suco de laranja");
        break;

    case 3:
        cal3 = 100;
        strcpy(b, "Suco de melao");
        break;

    case 4:
        cal3 = 65;
        strcpy(b, "Refrigerante diet");
        break;
    }

    calt = cal1 + cal2 + cal3;
    printf("\nResumo refeicao: \nPrato: %s \nSobremesa: %s \n
    Bebida: %s", p, s, b);
    printf("\nA quantidade de calorias ingeridas e %d", calt);

}
