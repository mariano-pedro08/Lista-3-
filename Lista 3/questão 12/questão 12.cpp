#include <stdio.h>
#include <math.h>

 main(){
 	
    float numero;
    
    printf("Digite o numero");
    scanf("%f",&numero);
    
    if(numero>0){
    	
      printf("numero positivo");
	}
	 else if(numero<0){
	 
	 printf("numero negativo");
	} else{

	printf("Zero");
	
  }


 return 0;	
 	
 }
