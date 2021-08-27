#include <stdio.h>
/*Desenvolva um algoritmo que receba os três coeficientes a, b e c de uma equação de segundo
grau da forma ax2 + bx + c = 0, verifique e mostre a existência de raízes reais e caso exista raíz(es)
real(is), calcule e mostre essa(s) raíz(es).*/

main(){ 
	
	int a, b, c;
	float delta, raiz1, raiz2;
	printf("digite os coeficientes a, b, c da equacao\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0){
		printf(" esta equacao eh de 1o. grau\n");
		raiz1= -c/b;
		printf(" sua raiz eh: %f \n", raiz1);
	}
	else{
		 delta=(pow(b,2)-4*a*c);
			if(delta >= 0){
				raiz1=(b+sqrt(delta))/(2*a);
				raiz2=(b-sqrt(delta))/(2*a);
				printf("as raizes sao:R1= %f,R2=%f \n",raiz1,raiz2);
		}
		else printf("Esta equacao nao possui raizes reais\n");
	}
system("PAUSE");
}	
