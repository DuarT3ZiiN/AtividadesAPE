#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O valor de n deve ser maior ou igual a zero.\n");
    } else {
        int resultado = fibonacci(n);
        printf("O %do termo da sequencia de Fibonacci e: %d\n", n, resultado);
    }

    return 0;
}