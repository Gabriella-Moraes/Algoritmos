#include <stdio.h>
/*Desenvolva um algoritmo que receba um valor numérico inteiro, verifique e mostre se esse
valor é divisível por 2 e por 3.*/

 main(){
	int x;
	
	printf("Digite um valor: \n");
	scanf("%d", &x);

	
	if( x % 2 == 0 && x % 3 == 0){
		printf("\n O numero %d eh divisivel por 2 e 3", x);
	}
	else
	if(x % 2 != 0 && x % 3 ==0){
		printf("\n O numero %d nao eh divisivel por 2 mas sim por 3", x);
	}
	else
	if(x % 2 == 0 && x % 3 != 0){
		printf("\n O numero %d eh divisivel por 2, mas nao por 3", x);
	}
	else
	if(x % 2 != 0 && x % 3 != 0){
		printf("\n O numero %d nao eh divisivel por 2 e 3", x);
	}
	
}
