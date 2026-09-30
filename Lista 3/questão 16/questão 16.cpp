#include <stdio.h>
#include <math.h>
 
 main(){
 	
 	float n1,n2,media;
 	
 	printf("Digite a sua nota 1");
 	scanf("%f",&n1);
 	printf("Digite a sua nota 2");
 	scanf("%f",&n2);
 	
 	
 	media= (n1+n2)/2;
 	
 	if(media>=7.0){
 		
 		printf("Aprovado\n");
 		
	 } else if(media>= 5 ){
	 	
	 	printf("Recuperacao\n");
	 	
	 } else{
	 
	 	printf("reprovado\n");  
	 }
	 	
      printf("Apresenta a media= %2.f\n",media);
       
	 }
 	
 	
 	
 	
