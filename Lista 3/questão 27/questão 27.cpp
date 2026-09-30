#include <stdio.h>

int main() {
    float nota;
    int aprovados = 0, reprovados = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        if (nota >= 7.0) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    printf("\nAprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    printf("Percentual de aprovação: %.2f%%\n", (aprovados / 10.0) * 100);
    return 0;
}
