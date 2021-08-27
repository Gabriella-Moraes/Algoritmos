#include <stdio.h>
/*12. Desenvolva um algoritmo que receba o preço atual e a venda mensal média de um produto,
calcule e mostre o novo preço, sabendo que:
    se a venda média mensal for menor que 500 e o preço atual menor que 30,00, então o
produto sofre um aumento de 10%;
    se a venda média mensal for maior ou igual a 500 e menor que 1000 e o preço atual
maior ou igual a 30,00 e menor que 80,00, então o produto sofre um aumento de 15%;
    se a venda mensal média for maior ou igual a 1000 e o preço atual maior ou igual a
80,00, então o produto sofre uma diminuição de 5%.*/
main(){

	float preco_atual, venda_mensal, reajuste;
	
	printf("Qual o valor do preco atual: \n");
	scanf("%f", &preco_atual);
	
	printf("Qual o valor da venda mensal media de um produto: \n");
	scanf("%f", &venda_mensal);
	
	if(venda_mensal < 500 && preco_atual < 30){
		reajuste = preco_atual + (preco_atual * 0.10);
	}
	else
	if((venda_mensal >= 500) && (venda_mensal < 1000) && (preco_atual >= 30) && (preco_atual < 80)){
		reajuste = preco_atual + (preco_atual * 0.15);
	}
	else
	//if((venda_mensal >= 1000) && (preco_atual >= 80)){
		reajuste = preco_atual - (preco_atual * 0.05);
	//}
	
	printf("O novo valor do produto eh: %.1f \n", reajuste);
}
