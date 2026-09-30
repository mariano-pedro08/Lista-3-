#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.00, valor;

    do {
        printf("\n--- CAIXA ELETRÔNICO ---\n");
        printf("1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;
            case 2:
                printf("Digite o valor para depósito: R$ ");
                scanf("%f", &valor);
                saldo += valor;
                printf("Depósito efetuado!\n");
                break;
            case 3:
                printf("Digite o valor para saque: R$ ");
                scanf("%f", &valor);
                if (valor <= saldo) {
                    saldo -= valor;
                    printf("Saque realizado com sucesso!\n");
                } else {
                    printf("Saldo insuficiente!\n");
                }
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 4);

    return 0;
}
