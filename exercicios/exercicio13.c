#include <stdio.h>
/*Desenvolva um algoritmo que receba o salário de um funcionário, calcule e mostre o
valor do aumento salarial e o salário final a ser recebido pelo funcionário, considerando
que se o funcionário:
 - recebe menos que 500,00, terá reajuste de 100%;
 - recebe mais ou igual a 500,00 e menos que 1.000,00, terá reajuste de 75%;
 - recebe mais ou igual a 1.000,00 e menos que 1.500,00, terá reajuste de 50%;
 - recebe mais ou igual a 1.500,00 e menos que 2.000,00, terá reajuste de 25%;
 - recebe mais ou igual a 2.000,00 e menos que 3.000,00, terá reajuste de 10%;
 - recebe mais ou igual a 3.000,00 e menos que 5.000,00, terá reajuste de 5%;
 - recebe mais ou igual a 5.000,00, terá reajuste de 2%.*/
main(){
	float salario, novo_salario, aumento;
	
	printf("\n Qual eh o salario atual do funcionario: \n ");
	scanf("%f", &salario);
	
	if(salario < 500)
		novo_salario = salario + salario;
	else
		if(salario >= 500 && salario < 1000)
			novo_salario = salario + (salario * 0.75);
		else
			if(salario >= 1000 && salario < 1500)
				novo_salario = salario + (salario * 0.50);
			else
				if(salario >= 1500 && salario < 2000)
					novo_salario = salario + (salario * 0.25);
				else
					if(salario >= 2000 && salario < 3000)
						novo_salario = salario + (salario * 0.10);
					else
						if(salario >= 3000 && salario < 5000)
							novo_salario = salario + (salario * 0.05);
						else
							if(salario >= 5000)
								novo_salario = salario + (salario * 0.02);
	
	aumento = novo_salario - salario;
	printf("\n O seu novo salario eh: %.1f \n", novo_salario);
	printf("A diferenca do seu salario antigo comparado com o novo eh: %.1f \n", aumento);
			
}
