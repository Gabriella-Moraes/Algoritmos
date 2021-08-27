#include <stdio.h>
/*Desenvolva um algoritmo que receba a data de nascimento de uma pessoa e a data atual,
calcule e mostre se essa pessoa é maior de idade.*/

 main(){
	int nasc, atual, difereca;
	
	printf("Digite qual o seu ano de nascimento: \n");
	scanf("%d", &nasc);
	
	printf("Digite qual o ano estamos: \n");
	scanf("%d", &atual);
	
	int diferenca = atual - nasc;
	
	if(diferenca >= 18){
		printf("Sua idade eh: %d e voce eh maior de idade. ", diferenca);
	}
	else{
		printf("Sua idade eh: %d e voce eh menor de idade. ", diferenca);
	}
}
