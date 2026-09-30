#include <stdio.h>
#include <math.h>
 
 main(){
 	
 	int  idade;
 	
 	printf("Digite a idade");
 	scanf("%i",&idade);
 	
 	if(idade<=12){
 		
 		printf("Criança");	
 		
	  }else if( idade<=17){

	  printf("Adolescente");
}
 	else if(idade<=59){
 		
 		printf("adulto");
 		
	 } else{
	 	printf("Idoso");
	 }
	 
 	return 0;
 	
 	
 }
