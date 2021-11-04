
/********************************************/
/*          Lab04 - Divisibilidade          */
/*                                          */
/*   Turma: DSM (ALP) - 2S21                */
/*  Profa.: Eliane Oliveira Santiago        */
/*                                          */
/* Aluno 1: Ana Caroline Ferreira Rodrigues */
/* Aluno 2: Bruno Bodê do Nascimento        */
/* Aluno 3: Gabriella de Moraes             */
/* Aluno 4: Gustavo do Carmo Vito           */
/********************************************/

#include <stdio.h>
#include <math.h>

void imprimirObjetivoLab(){
    printf("\n *===================================================*");
    printf("\n *                                                   *");
    printf("\n * O programa tem por objetivo informar se um        *");
    printf("\n * determinado numero eh ou nao divisivel por outro. *");
    printf("\n *                                                   *");
    printf("\n * Os testes de divisibilidade sao validos para os   *");
    printf("\n * seguintes divisores: 2, 3, 4, 5, 6, 7, 8, 9, 10,  *");
    printf("\n * 11, 12, 15 e 25.                                  *");
    printf("\n *                                                   *");
    printf("\n *===================================================*");
    printf("\n                                                      "); 
}

int testarDivisibilidade(int dividendo, int divisor){
    if(divisor==2){
        return divisibilidade2(dividendo);
    }
    if(divisor==3){
        return divisibilidade3(dividendo);
    }
    if(divisor==4){
        return divisibilidade4(dividendo);
    }
    if(divisor==5){
        return divisibilidade5(dividendo);
    }
    if(divisor==6){
        return divisibilidade6(dividendo);
    }
    if(divisor==7){
        return divisibilidade7(dividendo);
    }
    if(divisor==8){
        return divisibilidade8(dividendo);
    }
    if(divisor==9){
        return divisibilidade9(dividendo);
    }
    if(divisor==10){
        return divisibilidade10(dividendo);
    }
    if(divisor==11){
        return divisibilidade11(dividendo);
    }
    if(divisor==12){
        return divisibilidade12(dividendo);
    }
    if(divisor==15){
        return divisibilidade15(dividendo);
    }
    if(divisor==25){
        return divisibilidade25(dividendo);
    }
}

int divisibilidade2(int num){
    if((num%10==0)||(num%10==2)||(num%10==4)||(num%10==6)||(num%10==8)) num=0;
    else num=1;
    return num;
}

int divisibilidade3(int num){
    int i;
    int somaDigitos = 0;
    int resultadoDivisao = num/10;
    int quantidadeDigitos = 0;
    int ultimoDigito = num%10;
    
    do{
        for(i=1;i<=10;i++){
            somaDigitos = somaDigitos + ultimoDigito;
            if(resultadoDivisao!=0){
                ultimoDigito = resultadoDivisao%10;
            }else{
                ultimoDigito = 0;
                quantidadeDigitos = i;
                i = 10;
                num = somaDigitos;
            }
            resultadoDivisao = resultadoDivisao/10;
        }
        if(quantidadeDigitos!=1){
            somaDigitos = 0;
            resultadoDivisao = num/10;
            quantidadeDigitos = 0;
            ultimoDigito = num%10;
        }
    }while(quantidadeDigitos!=1);

    if((somaDigitos==3)||(somaDigitos==6)||(somaDigitos==9)) num=0;
    else num=1;
	return num;
}

int divisibilidade4(int num){
    if(divisibilidade2(num)==1){
        if(divisibilidade2(num/2)==1) num=1;
    }
    else num=0;
    return num;
}

int divisibilidade5(int num){
     while(num>=5){
    	num=num-5;
	}
        if((num==0)||(num==5)) num = 0;
        else num = 1;   
		return num;
}

int divisibilidade6(int num){
    if((divisibilidade2(num)==1)&&(divisibilidade3(num)==1)) num=1;
    else num=0;
	return num;
}

int divisibilidade7(int num){
    int ultimoDigito;
    int resultadoDivisao;
    
    do{
        ultimoDigito = num%10;
        resultadoDivisao = num/10;
        num = fabs(resultadoDivisao - 2*ultimoDigito);
    }while(num>=70);

    if((num==0)||(num==7)||(num==14)||(num==21)||(num==28)||(num==35)||(num==42)||(num==49)||(num==54)||(num==63)||(num==70)) num=0;
    else num=1;
	return num;
}

int divisibilidade8(int num){
    if(divisibilidade2(num)==1){
        if(divisibilidade2(num/2)==1){
            if(divisibilidade2(num/4)==1) num=1;
        }
    }
    else num=0;
    return num;
}

int divisibilidade9(int num){
    if(divisibilidade3(num)==1){
        if(divisibilidade3(num/3)==1) num=1;
    }
    else num=0;
    return num;
}

int divisibilidade10(int num){
    while(num>=10){
    	num=num-10;
	}
        if(num==0) num = 0;
        else num = 1;   
	return num;
}

int divisibilidade11(int num){
    int i;
    int somaImpar = 0;
    int somaPar = 0;
    int ultimoDigito = num;
    int resultadoDivisao = num;
    int testeDiv11;

    do{
        for(i=1; i<=10; i++){
            if(resultadoDivisao!=0){
                ultimoDigito = ultimoDigito%10;

                if(divisibilidade2(i)==0){
                    somaImpar = somaImpar + ultimoDigito;
                }else{
                    somaPar = somaPar + ultimoDigito;
                }
        
                resultadoDivisao = resultadoDivisao/10;
                ultimoDigito = resultadoDivisao;
            }
        }
    
        if(somaImpar>=somaPar){
            testeDiv11 = fabs(somaPar-somaImpar);
        }else{
            testeDiv11 = fabs(somaImpar-somaPar);
        }
        
        somaImpar = 0;
        somaPar = 0;
        ultimoDigito = testeDiv11;
        resultadoDivisao = testeDiv11;
    }while(testeDiv11/10!=0);
    
    if(testeDiv11==0) num=0;
    else num=1;
	return num;
}

int divisibilidade12(int num){
    if((divisibilidade3(num)==1)&&(divisibilidade4(num)==1)) num=1;
    else num=0;
	return num;
}

int divisibilidade15(int num){
    if((divisibilidade3(num)==1)&&(divisibilidade5(num)==1)) num=1;
    else num=0;
    return num;
}

int divisibilidade25(int num){
    if(divisibilidade5(num)==1){
        if(divisibilidade5(num/5)==1) num=1;
    }
    else num=0;
    return num;
}

void main(){

    int dividendo, divisor;
    int testeDivisor;
    char novoTeste;

    imprimirObjetivoLab();

    do{
        printf("\n Dividendo: ");
        scanf("%d", &dividendo);
        
        do{
            printf("\n Divisor: ");
            scanf("%d", &divisor);
            if((divisor!=2)&&(divisor!=3)&&(divisor!=3)&&(divisor!=4)&&(divisor!=5)&&(divisor!=6)&&(divisor!=7)&&(divisor!=8)&&(divisor!=9)&&(divisor!=10)&&(divisor!=11)&&(divisor!=12)&&(divisor!=15)&&(divisor!=25)){
                printf("\n Divisor invalido! Favor informar novos valores." );
                testeDivisor = 0;
            }else{
                testeDivisor = 1;
            }
        }while(testeDivisor==0);

        if(testarDivisibilidade(dividendo, divisor)==0){
            printf("\n %d eh divisivel por %d", dividendo, divisor);
        }else{
            printf("\n %d NAO eh divisivel por %d", dividendo, divisor);
        }
        
        printf("\n ");
        printf("\n Deseja realizar novo teste (s/n)?");
        scanf("%s", &novoTeste);
        
        while((novoTeste!='s')&&(novoTeste!='S')&&(novoTeste!='n')&&(novoTeste!='N')){
            printf("\n Opcao invalida! Deseja realizar novo teste (s/n)?");
            novoTeste = getche();
        }
    }while((novoTeste=='s')||(novoTeste=='S'));

}
