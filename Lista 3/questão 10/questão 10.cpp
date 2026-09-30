#include <stdio.h>
#include <math.h>

main(){
	
	char nome_produto[30];
	int qtd_comprada;
	float vlr_unitario,vlr_total;
	
	printf("Digite o nome do produto");
	scanf("%s",&nome_produto);
	
	printf("Quantidade de produto escolhido");
	scanf("%d",&qtd_comprada);
	
	printf("o valor do produto escolhido");
	scanf("%f",&vlr_unitario);
	
	vlr_total= qtd_comprada * vlr_unitario;
	
	printf("Valor total da compra:%2.f\n",vlr_total);
	
	
}
