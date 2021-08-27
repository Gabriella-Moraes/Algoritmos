#include <stdio.h>

main(){
	float A, B, C, Max, Inter, Min;
	
	// ler os dados	
	printf("Digite um valor para A: \n");
	scanf("%f", &A);	
	printf("Digite um valor para B: \n");
	scanf("%f", &B);
	printf("Digite um valor para C: \n");
	scanf("%f", &C);
	
	// determinar quais são os valores
	if(A > B && A > C && B > C){
		Max = A;
		Inter = B;
		Min = C;
	}
	if(A > B && A > C && C > B){
		Max = A;
		Inter = C;
		Min = B;
	}
		if (B > A && B > C && A > C){
			Max = B;
			Inter = A;
			Min = C;
		}
		if(B > A && B > C && C > A){
			Max = B;
			Inter = C;
			Min = A;
		}
			if (C > A && C > B && A > B){
				Max = C;
				Inter = A;
				Min = B;
			}
			if(C > A && C > B && B > A){
				Max = C;
				Inter = B;
				Min = A;
			}
			
	printf("Menor valor: %4.1f \n", Min);
	printf("Valor intermediario: %4.1f \n", Inter);
	printf("Maior valor: %4.1f \n", Max);
}
