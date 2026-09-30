#include <stdio.h>

int main() {
    float num, maior;

    printf("Digite o 1º número: ");
    scanf("%f", &num);
    maior = num;

    for (int i = 2; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%f", &num);
        if (num > maior) {
            maior = num;
        }
    }

    printf("O maior número digitado foi: %.2f\n", maior);
    return 0;
}
