#include <stdio.h>
#include <math.h>
 
 main(){

    float valor_compra, percentual = 0.0, desconto, valor_final;
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor_compra);

    if (valor_compra > 500.0) {
        percentual = 10.0;
    } else if (valor_compra > 100.0) {
        percentual = 5.0;
    }

    desconto = valor_compra * (percentual / 100.0);
    valor_final = valor_compra - desconto;

    printf("Valor original: R$ %.2f\n", valor_compra);
    printf("Percentual de desconto: %.0f%%\n", percentual);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valor_final);
    return 0;
}
 	
 
 
 
 
