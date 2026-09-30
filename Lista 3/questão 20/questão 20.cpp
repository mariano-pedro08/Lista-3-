#include <stdio.h>
#include <math.h>
 
 main (){
 	
 	float n1,n2;
 	 char opera;
 	printf("Digite o primeiro numero");
 	scanf("%f",&n1);
 	
 	printf("Digite o segundo numero");
 	scanf("%f",&n2);
 	
 	printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &opera);
    
    switch (opera){
    	
    	case'+':
    		printf("Resultado:%.2f",n1+n2);
    	
		case '-':
		printf("Resultado:%.2f",n1-n2);
		case '*':
            printf("Resultado: %.2f\n", n1 * n2);
            break;
        case '/':
            
            if (n2 != 0) {
                printf("Resultado: %.2f\n", n1 / n2);
            } else {
                printf("Erro: Divisão por zero não é permitida!\n");
            }
            break;
        default:
            
            printf("Operação inválida!\n");	
    	
    	
    	
	}
 	
 	
 	
 }
