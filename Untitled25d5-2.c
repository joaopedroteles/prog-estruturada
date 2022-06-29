#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
char nome [50];
char sexo;
int idade;

printf ("Digite a idade: \n");
scanf("%d",&idade);

/*
x- 0 até 15 não vota
x- 16 ou 17 opcional
x- 18 até 64 obrigatório
x- 65 ou mais opcional
x- Exatamente 41 ganha prêmio 1 (não deverá apresentar obrigatório)
x- Exatamente 82 ganha prêmio 2 (não deverá apresentar opcional)
*/

if(idade<=0)
{
printf(" Idade menor que 0 nao nasceu e");
}

if(idade <=64 ){
	
if(idade <=15){printf(" nao pode votar \n ");
}
else{
	
if(idade == 16 ){printf(" opcional \n ");
}
if(idade == 17 ){printf(" opcional \n ");
}

	if(idade == 41){printf(" 41 ganha premio \n ");
	}else{
	printf(" acima de 18 ate 64 obrigatorio \n ");
	}}}
	
	if(idade >=65 ){
	if(idade == 82){printf(" 82 ganha premio 2 \n ");
	}else{
	printf(" 65 ou mais opcional \n ");
	}}

	

	
return 0;

}
// -------------------------------
teste de mesa
|| A || B|| C || D|| E ||
||  0|| 0||  0|| 0||  0||
||  1|| 2||  3|| 4||  5||
||  2|| 2|| 25||29||  2||
||  2||29|| 25||29||  2||
||   ||  ||100||  ||   ||
|| 3 ||30||101||  ||   ||
||104||  ||   ||24||261||
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
	char op,continuar = 's';
 
 do{
 printf("Deseja calcular (s/n)?");
 scanf(" %c",&continuar);
 
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
			printf("RESULTADO:   %.1f\n",n1+n2); 
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
 
 }while(result<10 && continuar=='s');
 
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
			printf("-------\nERRO,DIGITE UM OPERADOR VALIDO \n-------\n");
		}
		scanf(" %c",&operador);	
		cont++;
	}while(operador!='+' && operador!='-' && operador!='*' && operador!='/');	
 
	return operador;
}
=======================================================================================================================================
projeto 03

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMAMANHO 1
void main(){
	
	int i = 0, tam = 0, menor, maior;
;
	int sel;
	int VarLoop = 1;
	char operar();
    char op;	
    char continuar = 's';

do{
    while (VarLoop == 1){
	
		printf("~*~~*~~*~~*~*~~*~*~~*~~*~~*~*~~*~*~~*~ \n");
		printf("             FORMULA 1 \n");
		printf("~*~~*~~*~~*~*~~*~*~~*~~*~~*~*~~*~*~~*~ \n");
		printf("         faça seu cadastro. \n");
        printf("~*~~*~~*~~*~*~~*~*~~*~~*~~*~*~~*~*~~*~ \n \t");
	
	struct Piloto{
		int age;
        char sex[12];
        char pais[50];
		char plt[100];
		float vlt[20];
		float temp[10];
		char dat[8];
		char eqp[30];
		char circt[20];
		char date[10];
		char rc[50];
        char paiss[50];
        char tamc[50];	    
	
	
};	struct Piloto plto[TAMAMANHO];
 
	for(i=0;i<TAMAMANHO;i++){
 
		fflush(stdin);
		printf("Informe o nome do %do piloto: \n",i+1);
		scanf("%[^\n]s",&plto[i].plt);
		
		fflush(stdin);
		printf("Informe idade do %do piloto: \n",i+1);
		scanf("%i",&plto[i].age);
		
		fflush(stdin);
		printf("Informe o sexo do %do piloto (F/M): \n",i+1);
		scanf("%[^\n]s",&plto[i].sex);
		
		fflush(stdin);
		printf("Informe o nome do %do país de origem do piloto: \n",i+1);
		scanf("%[^\n]s",&plto[i].pais);
		
		fflush(stdin);
		printf("Informe o nome da equipe %do piloto: \n",i+1);
		scanf("%[^\n]s",&plto[i].eqp);
		
		fflush(stdin);
		printf("Informe Data da volta com dia, mês e ano %do piloto: \n",i+1);
		scanf("%[^\n]s",&plto[i].date);
//------------------------------------------------------------------------------------------------------------		
		fflush(stdin);
		printf("Informe o nome do %do circuito: \n",i+1);
		scanf("%[^\n]s",&plto[i].rc);
		
		fflush(stdin);
		printf("Informe pais do %do circuito: \n",i+1);
		scanf("%[^\n]s",&plto[i].paiss);
		
		fflush(stdin);
		printf("Informe tamanho do %do circuito em kilometros: \n",i+1);
		scanf("%[^\n]s",&plto[i].tamc);
		
		fflush(stdin);
		printf("Informe menor tempo  %do piloto no circuito Min,Seg,Milisegundos: \n",i+1);
		scanf("%.8f",&plto[i].temp);
}
//------------------------------------------------------------------------------------------------------------

        printf("~*~~*~~*~~*~*~~*~*~~*~~*~~*~*~~*~*~~*~ \n");
		printf("               FORMULA 1 \n");
		printf("~*~~*~~*~~*~*~~*~*~~*~~*~~*~*~~*~*~~*~ \n");
		printf("(1)Consulta Pilotos, Circuitos e Voltas \n");
		printf("(2)Pesquisar os pilotos registrados. \n");
		printf("(3)Relacionar todos os pilotos que realizaram voltas em um circuito \n");
		printf("(4)Pesquisar todos os pilotos, equipes e circuitos que realizaram um \n tempo de volta menor ou igual ao fornecido pelo usuário (minutos, segundos \n e milissegundos). \n");
		printf("~*~~*~~*~~*~*~~*~*~~*~~*~~*~*~~*~*~~*~ \n \t");
		
		printf("o que quer fazer?: \n");
		scanf("%d%*c",&sel);
		
		switch (sel){
			case 1:
					for(i=0;i<TAMAMANHO;i++){
		printf("Nome: %[^\n]s \n",plto[i].plt);
		printf("volta: %8.f \n",plto[i].temp);
		printf("circuito: %[^\n]s \n",plto[i].rc);
		}
		    break;
			case 2:
						printf("qual piloto quer verificar registro?: %[^\n]s \n",plto[i].plt);
		scanf("%[^\n]s",&plto[i].plt);
 if(plto[i].plt != 0){
 printf("piloto %[^\n]s encontrado \n",plto[i].plt);
 }else { printf("piloto não registrado");
 }
				break;
			case 3:
		printf("circuito: %s \n",plto[i].rc);
		scanf("%[^\n]s",&plto[i].rc);
			for(i=0;i<TAMAMANHO;i++){
		printf("pilotos: %[^\n]s \n", plto[i].plt, plto[i].rc);
}
				break;
			case 4:	
			tam = i;
for(i=0;i<tam;i++){
 
		if(i==0){
			menor = plto[i].temp;
			maior = plto[i].temp;
		}else{
			if(plto[i].temp<menor){
				menor=plto[i].temp;
			}			
			if(plto[i].temp>maior){
				maior=plto[i].temp;
			}
		}
 
	}
	
	printf("A melhor volta foi: %.8f\n",menor);
				break;
			default:
				printf("voltando ao menu...");
				
		}
		
		printf("\n ...ENTER para continuar... \n");
		getchar();
}
printf("Deseja continuar (s/n)?");
		scanf(" %c",&continuar);	
	}while(i<10 && continuar=='s');
	
return 0;
}

