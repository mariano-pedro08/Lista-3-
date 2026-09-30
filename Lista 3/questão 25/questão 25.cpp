#include <stdio.h>

int main() {
    int n, soma = 0;
    printf("Digite um número N positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    printf("A soma de 1 até %d é: %d\n", n, soma);
    return 0;
}
