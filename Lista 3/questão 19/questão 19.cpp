#include <stdio.h>
#include <math.h>

main(){
	
	float  peso, altura, IMC;
	
	printf("Digite o peso em Kg:");
	scanf("%f",&peso);
	
	printf("Digite a altura (m):");
	scanf("%f",&altura);
	
	IMC = peso / (altura *altura);
	printf(" IMC:%.2f",IMC);
	
	if(IMC<18,5 ){
		
	   printf("A abaixo do peso\n");
	   
	} else if (IMC<=24,9){
		
	printf(" Peso adequado");
		
	} else  if (IMC<= 29,9 ){
		
		printf("Sobrepeso");
		
	} else{
		
		printf("Obesidade");
	}


	
}



