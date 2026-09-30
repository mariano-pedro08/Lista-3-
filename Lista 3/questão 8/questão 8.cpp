#include <stdio.h>

main(){
	
	float salario_bruto,horas_trabalhadas,vlr_hora;
     
    printf("Digite a horas trabalhadas pelo profissional");
	scanf("%f",&horas_trabalhadas );	 
  	 	
	printf("Digite o valor recebido por hora");
	scanf("%f",&vlr_hora);
	
	salario_bruto= horas_trabalhadas*vlr_hora;
	
	printf("O valor do salario bruto a ser recebido é:%2.f\n",salario_bruto);
}
