#include <stdio.h>
/*Desenvolva um algoritmo que receba tr�s valores num�rico real, calcule e mostre a m�dia
ponderada desses n�meros, considerando que o primeiro n�mero tem peso 2, o segundo
n�mero tem peso 3 e o terceiro n�mero tem peso 5. */

 main(){
	float x, y, z, x1, x2, x3;
	
	printf("Informe o primeiro valor: \n");
	scanf("%f", &x);
	
	printf("Informe o segundo valor: \n");
	scanf("%f", &y);
	
	printf("Informe o terceiro valor: \n");
	scanf("%f", &z);
	
	x1 = x * 2;
	x2 = y * 3;
	x3 = z * 5;
	
	float media_p = (x1 + x2 + x3)/10;
	
	printf("O resultado da media ponderada eh: %.1f ", media_p); 
	
}
