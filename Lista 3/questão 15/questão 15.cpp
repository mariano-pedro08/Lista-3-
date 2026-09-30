#include <stdio.h>
#include <math.h>

main(){
	
	float n1,n2,n3,maior;
	
	printf("Digite o numero 1");
	scanf("%f",&n1);
	
	printf("Digite o numero2");
	scanf("%f",&n2);
	
	printf("Digite o numero 3");
	scanf("%f",&n3);
	
if (n1 >= n2 && n1 >= n3) {
        printf("O numero 1 e o maior: %.2f\n", n1);
    } else if (n2 >= n1 && n2 >= n3) {
        printf("O numero 2 e o maior: %.2f\n", n2);
    } else {
        printf("O numero 3 e o maior: %.2f\n", n3);
    }



    
}

   


