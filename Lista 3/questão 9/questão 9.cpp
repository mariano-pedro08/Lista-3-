#include <stdio.h>
#include <math.h>

main(){
	
	float dis_percorrida,qtd_combustivel,consumo_medio;
	
	printf("Digite a distancia percorrida");
	scanf("%f",&dis_percorrida);
	
	printf("quantidade de combustivel ultilizado");
	scanf("%f",&qtd_combustivel);
	
   consumo_medio = dis_percorrida/qtd_combustivel;
	
	printf("O consumo medio de combustivel ultlizado na viagem é : %2.f km/L\n",consumo_medio);
	
	
	
  return 0;
}
