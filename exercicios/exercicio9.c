#include <stdio.h>
/*Desenvolva um algoritmo que receba os valores da altura e do sexo de uma pessoa, calcule e
mostre o peso ideal dessa pessoa, utilizando as seguintes regras:
 para homens: (72.7 * altura) – 58;
 para mulheres: (62.1 * altura) – 44.7. */

 main(){
	float altura, peso;
	char sexo;
	
	printf("Digite sua altura: \n");
	scanf("%f", &altura);
	
	printf("Digite seu sexo: \n");
	scanf("%s", &sexo);
	
	if(sexo == 'M' || 'm'){
		peso = (72.7*altura)-58;
		printf("Seu peso ideal eh: %.1f \n", peso);
	}
	else
		if(sexo == 'F' || 'f'){
			peso = (62.1*altura)-44.7;
			printf("Seu peso ideal eh: %.1f \n", peso);
		}
}
