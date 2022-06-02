#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
char nome [50];
char sexo;
int idade;
printf("Digite o nome: \n") ;
fgets (nome, 50, stdin);
printf("Digite o sexo: \n") ;
scanf("%c",&sexo);
printf ("Digite a idade: \n");
scanf("%d",&idade);

if(idade<0)
{
printf(" Idade menor que 0 nao nasceu \n ");
}
if(idade<16)
{
printf(" 0 ate 15 anos nao vota \n ");
}

if(idade==16)
{
printf(" voto dos 16 ou 17  anos e opcional \n ");
}

if(idade==17)
{
printf(" voto dos 16 ou 17  anos e opcional \n ");
}
if(idade>17)
{
printf(" voto com mais de 18 anos e obrigatorio \n ");
}
if(idade<65)
{
printf(" voto ate 64 anos e obrigatorio \n ");
}
if(idade>65)
{
printf(" voto 65 anos ou mais opcional \n ");
}
if(idade==41)
{
printf(" 41 anos parabens ganhou 1 premio \n ");
}
if(idade==82)
{
printf(" 82 anos ganha 1 premio \n ");
}
else{
	printf(" idade invalida \n ");
}

}
// -------------------------------
// -------------------------------

/*#include <stdio.h>
#include <string.h>

int main(){
	char nom[30];
	char num[30];
	char end[30];
	char cid[30];
	char dat[30];
	char dat2[30]; 
	char plac[30];
	char mod[30];
	char ano[30]; 
	char cpf[30];
	char mail[30];
	char ass[30];
	char tel[30];
	
	printf("Informe o nome completo: \n");
	gets(nom);
	
	printf("endereco: \n");
	gets(end);

printf("Informe cidade: \n");
gets(cid);

	printf("Informe placa carro: \n");
	gets(plac);

    	printf("Informe modelo carro: \n");
gets(mod);
     	printf("Informe seu email: \n");
gets(mail);
    printf("Informe sua assinatura: \n");
gets(ass);
    	printf("Informe o data de nascimento: \n");
gets(dat);
    	printf("Informe o telefone: \n");
gets(tel);
    	printf("Informe ano do carro: \n");
gets(ano);
    	printf("Informe seu cpf: \n");
gets(cpf);
printf("Informe o numero da casa: \n");
gets(num);

system("cls");
	
	printf("\n =========================\t\n.");
    
    printf("\n seu nome: %s \n",&nom);
    
    printf("\n =========================\t\n.");
    
    printf("\n seu endereco: %s \n",&end);
    
    printf("\n =========================\t\n.");
    
    printf("\n seu numero da casa: %s \n",&num);
    
    printf("\n =========================\t\n.");
    
    printf("\n cidade: %s \n",&cid);
    
    printf("\n =========================\t\n.");
    
    printf("\n data nascimento: %s \n",&dat);
    
    printf("\n =========================\t\n.");
    
    printf("\n seu telefone: %s \n",&tel);
    
printf("\n =========================\t\n.");
    
    printf("\n placa: %s \n",&plac);
    
    printf("\n =========================\t\n");
    
    printf("\n modelo do carro: %s \n",&mod);
    
    printf("\n =========================\t\n");
    
    printf("\n ano do carro : %s \n",&ano);
    
    printf("\n =========================\t\n");
    
    printf("\n cpf: %s \n",&cpf);
    
    printf("\n =========================\t\n");
    
    printf("\n email: %s \n",&mail);
    
    printf("\n =========================\t\n");
    
    printf("\n assinatura: %s \n",&ass);
    
    printf("\n =========================\t\n");




  return 0;
}*/



/*#include <stdio.h>                           
#include <conio.h>                          
#include <string.h>                          
#include <ctype.h>                          
char nome[51];                               
void abreviar(){
    int i=1,q,j,w=0;
    char k;

    for(j=0;j<nome[j]!='\0';j++){            
        if(nome[j]==' '){                    
            if(nome[j+1]==' '||nome[j+2]==' '||nome[j+3]==' '||nome[j+4]==' '){
                                             
                while(nome[j+i]!=' ')i++;    
                for(q=j;nome[q+i]!='\0';q++){
                    nome[q]=nome[q+i];       
                                             
                }
                nome[q]='\0';                
                                                                                         
            }
        }
    }
    for(j=strlen(nome);j>=0;j--){           
        if(nome[j]==' '){                    
            printf("%c",toupper(nome[j+1])); 
            for(i=j+2;nome[i]!='\0';i++){    
                printf("%c",nome[i]);       
            }
            printf(", ");                     
            for(i=0;i<j+1;i++){              
                if(w==0)k=nome[i];            
                w++;          
                if(nome[i]==' '){             
                    w=0;          
                    printf("%c. ",toupper(k));
                }
            }
            break;                            
        }
    }
}
int main(){
    int j,n;
    printf("quer escrever quantos nomes: ");
    scanf("%d",&n);
    printf("%d\n",n);
    for(j=0;j<n;j++){
        printf("Digite o nome : ");
        fflush(stdin);
        gets(nome);
        printf("\n");
        abreviar();
        printf("\n\n");
    }
    getch();
    return 0;
}*/


/*
#include <stdio.h>
 
 
void head();
float soma(float n1, float num2);
char le_valida_operador();
 
int main() {
 
	float n1,n2,result;
	char op;
 
	head(); 
 
	printf("N1: ");
	scanf("%f",&n1);
 
	printf("OP:");
	op = le_valida_operador();
 
	printf("N2: ");
	scanf("%f",&n2);
 
	printf("---------------\n");
 
	switch(op){
		case '+':
			result = soma(n1,n2);
			printf("RESULTADO:   %.1f\n",result); 
		break;
		case '-':
			printf("RESULTADO:   %.1f\n",n1-n2);
		break;
		case '*':
			printf("RESULTADO:   %.1f\n",n1*n2);
		break;
		case '/':
			printf("RESULTADO:   %.1f\n",n1/n2);
		break;						
 
		default:
			printf("OPERADOR INVALIDO");
 
	}
 
	return 0;
}
 

void head(){
	printf("---------------\n");
	printf("CALC\n");
	printf("---------------\n");	
}
 

float soma(float n1, float num2){
	float resultado;
	resultado = n1 + num2;
	return resultado;
}
 
 
char le_valida_operador(){
	char operador;
	int cont=0;
	do{
		if(cont!=0){
			printf("-------\nERRO\n-------\n");
		}
		scanf(" %c",&operador);	
		cont++;
	}while(operador!='+' && operador!='-' && operador!='*' && operador!='/');	
 
	return operador;
}*/
