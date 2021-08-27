#include <stdio.h>

main(){
	int num, negativo;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	negativo = num - (2*num);
	
	if(num>0){
		printf("O modulo de %d eh %d", num, num);
	}
	else
		if(num < 0){
		printf("O modulo de %d eh %d", num, negativo);	
		}
	
	
}
