#include <stdio.h>
#include <math.h>

main(){
	
	float ind, n1, n2, s1, s2, s3, s4, s5, s6, s7, s8, s9;
	
	printf("Escolha qual operacao voce deseja: \n");
	printf("1 - Somar dois numeros\n");
	printf("2 - O produto do primeiro pelo quadrado do segundo \n");
	printf("3 - O quadrado do primeiro numero \n");
	printf("4 - A raiz quadrada da soma dos quadrados \n");
	printf("5 - O seno da diferença do primeiro numero pelo segundo \n");
	printf("6 - O modulo do primeiro numero \n");
	printf("\n-");
	scanf ("%f", &ind);
	
	if (ind == 1){
		
		printf("\nDigite o primeiro numero: ");
		scanf("%f", &n1);
		
		printf("Digite o segundo numero: ");
		scanf("%f", &n2);
		
		s1=n1+n2;
		
		printf("\nA soma dos dois numeros eh: %.2f", s1);
		
	}
	
			if (ind == 2){
			
			printf("\nDigite o primeiro numero: ");
			scanf("%f", &n1);
			
			printf("Digite o segundo numero: ");
			scanf("%f", &n2);
			
			s2=n1*(n2*n2);
			
			printf("\nO produto do primeiro pelo quadrado do segundo eh: %f", s2);
			
		}
		
				if (ind == 3){
				
				printf("\nDigite o primeiro numero: ");
				scanf("%f", &n1);
				
				s3=n1*n1;
				
				printf("\nO quadrado do primeiro numero eh: %f", s3);
				
			}
			
					if (ind == 4){
					
					printf("\nDigite o primeiro numero: ");
					scanf("%f", &n1);
					
					printf("Digite o segundo numero: ");
					scanf("%f", &n2);
					
					s4=sqrt(n1);
					s5=sqrt(n2);
					s6=sqrt(s5+s4);
					
					printf("\nA raiz quadrada da soma dos quadrados eh: %f", s6);
					
				}
				
						if (ind == 5){
						
						printf("\nDigite o primeiro numero: ");
						scanf("%f", &n1);
						
						printf("Digite o segundo numero: ");
						scanf("%f", &n2);
						
						s7=n1/n2;
						s8=sin(s7);
						
						printf("\nO seno da diferença do primeiro numero pelo segundo eh: %f", s8);
						
					}
					
							if (ind == 6){
							
							printf("\nDigite o primeiro numero: ");
							scanf("%f", &n1);
							
							s9=n1;
							
							printf("\nO modulo do primeiro numero eh: %.2f", s9);
							
						}
			
	
	
	
}
