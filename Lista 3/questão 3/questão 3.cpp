#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main (){
	
	int n1,n2, soma,subtra, multi, divi;
	
	printf("Digite o primeiro numero");
	scanf ("%i",&n1);
	
	printf("Digite o segundo numero");
	scanf("%i",&n2);
	
	 soma= n1 + n2;
	 subtra= n1 - n2;
	 multi= n1 * n2;
	 divi=  n1/n2;
	 
	 
	   printf("O valor de %i + %i e igual a :%i\n",n1,n2,soma);
	   printf("O valor de %i - %i e igual a :%i\n",n1,n2,subtra);
   	   printf("O valor de %i * %i e igual a :%i\n",n1,n2,multi);
	   printf("O valor de %i / %i e igual a :%i\n",n1,n2,divi); 
	 
	
}
