#include <stdio.h>

// Função recursiva para calcular base^expoente
int potencia(int base, int expoente) {
    if (expoente == 0)
        return 1;
    return base * potencia(base, expoente - 1);
}

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente (inteiro positivo): ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Expoente inválido! Por favor, digite um número inteiro não-negativo.\n");
    } else {
        int resultado = potencia(base, expoente);
        printf("%d elevado a %d é %d\n", base, expoente, resultado);
    }

    return 0;
}
