#include <stdio.h>

void main (){
	int x, y, z;
	
	printf("\n Digite o primeiro numero: ");
	scanf("%d", &x);
	
	printf("\n Digite o segundo numero: ");
	scanf("%d", &y);
	
	if (x>y){
		z = x - y;
		printf("\n a diferenca e = %d", z);
	}
	else{
		z = y - x;
		printf("\n a diferenca e = %d", z);
	}
}

