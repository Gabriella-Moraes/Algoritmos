#include <stdio.h>
/*Desenvolva um algoritmo que receba três valores obrigatoriamente em ordem crescente e
um quarto valor não necessariamente nessa ordem. Esse algoritmo deve mostrar os quatro
números em ordem decrescente*/

 main(){
	int num1, num2, num3, num4;
	
	printf("\n Digite os tres primeiros numeros em ordem crescente \n ");
	printf("\n Digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("\n Digite o segundo numero: ");
	scanf("%d", &num2);
	
	printf("\n Digite o terceiro numero: ");
	scanf("%d", &num3);
	
	printf("\n Digite o quarto numero: ");
	scanf("%d", &num4);
	
	if(num4>num1)
		printf("\n A ordem decrescente: %d, %d, %d e %d \n", num4, num3, num2, num1);
	
	if(num4<num3){
		printf("\n A ordem decrescente: %d, %d, %d e %d \n", num1, num2, num3, num4);
	}
}
