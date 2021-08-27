#include <stdio.h>
/*Desenvolva um algoritmo que receba os valores referentes a quatro notas bimestrais de um
aluno, calcule a média desse aluno e mostre a mensagem de aprovação (média >= 5) ou
reprovação (média < 5) do aluno, juntamente com a média calculada.*/
 main () {
	float nota1, nota2, nota3, nota4, media;
	
	printf("Digite o valor da primeira nota: \n");
	scanf("%f", &nota1);
	
	printf("Digite o valor da segunda nota: \n");
	scanf("%f", &nota2);
	
	printf("Digite o valor da terceira nota: \n");
	scanf("%f", &nota3);
	
	printf("Digite o valor da quarta nota: \n");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4)/4;
	
	printf("Sua media foi: %.1f \n", media);
	
	if(media >= 5){
		printf("Parabens voce foi aprovado \n");
	}
	else{
		printf("Voce foi reprovado \n");
	}
}
