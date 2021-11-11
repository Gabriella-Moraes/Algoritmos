/********************************************/
/* Aluna: Gabriella de Moraes               */
/* TURMA: DSM (ALP) - 2S21                  */
/* Profa.: Eliane Oliveira Santiago         */
/********************************************/

#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
char sexo;
float total = 0;
void imprimirInformacao(){
	printf("\n");
        printf("\n Calcule seu risco de infarto.");
		printf("\n Obs:  Use  o  programa  apenas  se  você  possui  entre  30  e  74 anos.");
        printf("\n ");
}

 
int main(){
	setlocale(LC_ALL, "Portuguese");
	int  idade, testeSexo, testeColesterol, testeDiabete, testeFumante, testeHdl, testePaspad;
	char diabete, fumante, colesterol, hdl, pasPad;
    
    
    	imprimirInformacao(); 
       //pergunta 1
	   do{
        	printf("\n 1) Qual seu sexo (F/M)? ");
			scanf("%s", &sexo);
			if((sexo != 'F')&& (sexo != 'M')&&(sexo != 'f')&&(sexo != 'm')){
				printf("\n Genero invalido! Favor informar novamente. \n" );
                testeSexo = 0;
                }else testeSexo = 1;
		}while(testeSexo==0);
        
        //pergunta 2
		printf("\n 2) Qual sua idade? ");
        scanf("%d", &idade);
        if(idade >= 30 && idade <= 70){
        	if(idade>=30 && idade<=34){
        		if(sexo == 'F'|| sexo == 'f'){
        			total += -9;
				}else total+= -1;
			}else if(idade>=35 && idade<=39){
        			if(sexo == 'F'|| sexo == 'f'){
        				total += -4;
					}else total += 0;
			}else if(idade>=40 && idade<=44){
        		if(sexo == 'F'|| sexo == 'f'){
        			total += 0;
				}else total += 1;
			}else if(idade>=45 && idade<=49){
        		if(sexo == 'F'|| sexo == 'f'){
        			total += 3;
				}else total += 2;
			}else if(idade>=50 && idade<=54){
        		if(sexo == 'F'|| sexo == 'f'){
        			total += 6;
				}else total += 3;
			}else if(idade>=55 && idade<=59){
        		if(sexo == 'F'|| sexo == 'f'){
        			total += 7;
				}else total += 4;
			}else if(idade>=60 && idade<=64){
        		if(sexo == 'F'|| sexo == 'f'){
        			total += 8;
				}else total += 5;
			}else if(idade>=64 && idade<=69){
        		if(sexo == 'F'|| sexo == 'f'){
        			total += 8;
				}else total += 6;
			}else if(idade>=70 && idade<=74){
        		if(sexo == 'F'|| sexo == 'f'){
        			total += 8;
				}else total += 7;
			}
		}else{
			printf("\n Idade invalida! \n");
			//return(0);
		}
        
        //pergunta 3
        do{
			printf("\n 3) Voce é diabético (S/N)? ");
        	scanf("%s", &diabete);
            	if((diabete!='s')&&(diabete!='S')&&(diabete!='n')&&(diabete!='N')){
                	printf("\n Invalido! Favor informar novamente. \n" );
                	testeDiabete = 0;
                }else testeDiabete = 1;
        }while(testeDiabete==0);
        if(diabete=='s' || diabete =='S'){
        	if(sexo == 'F'|| sexo == 'f'){
        		total += 4;
			}else total += 2;
			}else if(diabete=='n' || diabete=='N'){
        		if(sexo == 'F'|| sexo == 'f'){
        			total += 0;
				}else total += 0;
			}
        
        //pergunta 4
        do{
			printf("\n 4) Voce é fumante (S/N)? ");
        	scanf("%s", &fumante);
        		if((fumante!='s')&&(fumante!='S')&&(fumante!='n')&&(fumante!='N')){
                	printf("\n Invalido! Favor informar novamente. \n" );
                	testeFumante = 0;
                }else testeFumante = 1;	
    	}while(testeFumante==0);
        if(fumante =='s'||fumante =='S'){
        	if(sexo == 'F'||sexo == 'f'){
        		total += 2;
			}else total += 2;
			}else if(fumante =='n'||fumante =='N'){
        		if(sexo == 'F'|| sexo == 'f'){
        			total += 0;
				}else total += 0;
			}
            			
		//pergunta 5       
		do{
        	printf("\n 5) Indique o seu colesterol total, usando a legenda: ");
        	printf("\n   a) <160");
        	printf("\n   b) 160-199");
        	printf("\n   c) 200-239"); 
        	printf("\n   d) 240-279");
        	printf("\n   e) >=280");
        	printf("\n   ");
        	scanf("%s", &colesterol);
        	if((colesterol!='a')&&(colesterol!='A')&&(colesterol!='b')&&(colesterol!='B')&&(colesterol!='c')&&(colesterol!='C')&&(colesterol!='d')&&(colesterol!='D')&&(colesterol!='e')&&(colesterol!='E')){
			printf("\n Invalido! Favor informar novamente. \n" );
            testeColesterol = 0;
            }else testeColesterol = 1;	
    	}while(testeColesterol==0);
            if(colesterol =='a'||colesterol =='A'){
            	if(sexo == 'F'|| sexo == 'f'){
        			total += -2;
				}else total += -3;
			}else 
			if(colesterol =='b'||colesterol =='B'){
            	if(sexo == 'F'|| sexo == 'f'){
        			total += 0;
				}else total += 0;
			}else 
			if(colesterol =='c'||colesterol =='C'){
            	if(sexo == 'F'|| sexo == 'f'){
        			total += 1;
				}else total += 1;
			}else 
			if(colesterol =='d'||colesterol =='D'){
            	if(sexo == 'F'|| sexo == 'f'){
        			total += 1;
				}else total += 2;
			}else 
			if(colesterol =='e'||colesterol =='E'){
            	if(sexo == 'F'||sexo == 'f'){
        			total += 3;
				}else total += 3;
			}
	
		// pergunta 6
		do{
			printf("\n 6) Indique o seu HDL colesterol, usando a legenda: ");
        	printf("\n   a) <35");
        	printf("\n   b) 35-44");
        	printf("\n   c) 45-49"); 
        	printf("\n   d) 50-59");
        	printf("\n   e) >=60");
        	printf("\n   ");
        	scanf("%s", &hdl);
        	if((hdl!='a')&&(hdl!='A')&&(hdl!='b')&&(hdl!='B')&&(hdl!='c')&&(hdl!='C')&&(hdl!='d')&&(hdl!='D')&&(hdl!='e')&&(hdl!='E')){
        	printf("\n Invalido! Favor informar novamente. \n" );
            testeHdl = 0;
            }else testeHdl = 1;	
    	}while(testeHdl == 0);
		
            if(hdl =='a'||hdl =='A'){
            	if(sexo == 'F'||sexo == 'f'){
        			total += 5;
				}else total += 2;
			}else 
			if(hdl =='b'||hdl =='B'){
            	if(sexo == 'F'|| sexo == 'f'){
        			total += 2;
				}else total += 1;
			}else 
			if(hdl =='c'||hdl =='C'){
            	if(sexo == 'F'||sexo == 'f'){
        			total += 1;
				}else total += 0;
			}else 
			if(hdl =='d'||hdl =='D'){
            	if(sexo == 'F'||sexo == 'f'){
        			total += 0;
				}else total += 0;
			}else 
			if(hdl=='e'||hdl=='E'){
            	if(sexo == 'F'|| sexo == 'f'){
        			total += -3;
				}else total += -1;
			}
		
		//pergunta 7
		do{
			printf("\n 7) Indique o seu PAS e PAD, usando a legenda: ");
			printf("\n      PAS       PAD");
        	printf("\n   a) <120      <80");
        	printf("\n   b)120-129    80-84");
        	printf("\n   c)130-139    85-89"); 
        	printf("\n   d)140-159    90-99");
        	printf("\n   e)>=160      >=100 ");
        	printf("\n   ");
			scanf("%s", &pasPad);
        	if((pasPad!='a')&&(pasPad!='A')&&(pasPad!='b')&&(pasPad!='B')&&(pasPad!='c')&&(pasPad!='C')&&(pasPad!='d')&&(pasPad!='D')&&(pasPad!='e')&&(pasPad!='E')){
        	printf("\n Invalido! Favor informar novamente. \n" );
            testePaspad = 0;
            }else testePaspad = 1;	
    	}while(testePaspad==0);
            if(pasPad=='a'||pasPad=='A'){
            	if(sexo == 'F'|| sexo == 'f'){
        			total += -3;
				}else total += 0;
			}else 
			if(pasPad=='b'||pasPad=='B'){
            	if(sexo == 'F'|| sexo == 'f'){
        			total += 0;
				}else total += 0;
			}else 
			if(pasPad=='c'||pasPad=='C'){
            	if(sexo == 'F'|| sexo == 'f'){
        			total += 0;
				}else total += 1;
			}else 
			if(pasPad=='d'||pasPad=='D'){
            	if(sexo == 'F'|| sexo == 'f'){
        			total += 2;
				}else total += 2;
			}else 
			if(pasPad=='e'||pasPad=='E'){
            	if(sexo == 'F'|| sexo == 'f'){
        			total += 3;
				}else total += 3;
			}
		if(sexo == 'f' || sexo == 'F'){		
			if(total <= -2) printf("\n Risco de infarto: 1%%");
			else if (total == -1) printf("\n Risco de infarto: 2%%");
			else if (total == 0) printf("\n Risco de infarto: 2%%");
			else if (total == 1) printf("\n Risco de infarto: 2%%");
			else if (total == 2) printf("\n Risco de infarto: 3%%");
			else if (total == 3) printf("\n Risco de infarto: 3%%");
			else if (total == 4) printf("\n Risco de infarto: 4%%");
			else if (total == 5) printf("\n Risco de infarto: 4%%");
			else if (total == 6) printf("\n Risco de infarto: 5%%");
			else if (total == 7) printf("\n Risco de infarto: 6%%");
			else if (total == 8) printf("\n Risco de infarto: 7%%");
			else if (total == 9) printf("\n Risco de infarto: 8%%");
			else if (total == 10) printf("\n Risco de infarto: 10%%");
			else if (total == 11) printf("\n Risco de infarto: 11%%");
			else if (total == 12) printf("\n Risco de infarto: 13%%");
			else if (total == 13) printf("\n Risco de infarto: 15%%");
			else if (total == 14) printf("\n Risco de infarto: 18%%");
			else if (total == 15) printf("\n Risco de infarto: 20%%");
			else if (total == 16) printf("\n Risco de infarto: 24%%");
			else printf("\n Risco de infarto: >= 27%");
		}else if(sexo == 'm' || sexo == 'M'){
			if (total <= -1) printf("\n Risco de infarto: 2%%");
			else if (total == 0) printf("\n Risco de infarto: 3%%");
			else if (total == 1) printf("\n Risco de infarto: 3%%");
			else if (total == 2) printf("\n Risco de infarto: 4%%");
			else if (total == 3) printf("\n Risco de infarto: 5%%");
			else if (total == 4) printf("\n Risco de infarto: 7%%");
			else if (total == 5) printf("\n Risco de infarto: 8%%");
			else if (total == 6) printf("\n Risco de infarto: 10%%");
			else if (total == 7) printf("\n Risco de infarto: 13%%");
			else if (total == 8) printf("\n Risco de infarto: 16%%");
			else if (total == 9) printf("\n Risco de infarto: 20%%");
			else if (total == 10) printf("\n Risco de infarto: 25%%");
			else if (total == 11) printf("\n Risco de infarto: 31%%");
			else if (total == 12) printf("\n Risco de infarto: 37%%");
			else if (total == 13) printf("\n Risco de infarto: 45%%");
			else printf("\n Risco de infarto: >= 53%%");
		}
}
    
