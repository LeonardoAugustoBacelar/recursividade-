#include <stdio.h>

// Função recursiva para calcular a soma de 1 até n
int soma(int n) {
    if (n == 0)
        return 0;
    return n + soma(n - 1);
}

int main() {
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Número inválido! Por favor, digite um número positivo.\n");
    } else {
        int resultado = soma(n);
        printf("A soma de 1 até %d é %d\n", n, resultado);
    }

    return 0;
}
