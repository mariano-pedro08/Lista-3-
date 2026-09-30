#include <stdio.h>
#include <math.h>

main(){
	
	float raio, area;
	const float PI=3.14159;
	
	printf("Digite o valor do raio do circulo:");
	scanf("%f",&raio);
	
	area= PI * raio * raio;
	
	
	printf("O valor da area do circulo:%2.f\n",area);
	
	
	
}
