#include <stdio.h>

int main() {
    int total_alunos;
    float nota, soma_notas = 0.0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &total_alunos);

    for (int i = 1; i <= total_alunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma_notas += nota;
    }

    printf("Média geral da turma: %.2f\n", soma_notas / total_alunos);
    return 0;
}
