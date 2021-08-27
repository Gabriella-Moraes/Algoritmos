#include <stdio.h>
//Desenvolva um programa em Linguagem C para informar o maior de 2 números
void main(){
    float x, y, maior;
    
    printf("\n Digite o primeiro numero: ");
    scanf("%f", &x);
    
    printf("\n Digite o segundo numero: ");
    scanf("%f", &y);
    
    if (x>y){                   
        maior = x;              
    }   
    else{                       
        maior = y;              
                                
    }
    
    printf("O maior entre %.1f e %.1f eh %.1f", x, y, maior);
}
