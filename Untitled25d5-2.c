/*#include <stdio.h>
#include <string.h>

int main(){
	int nom;
	int num;
	int end;
	int cid;
	int dat;
	int dat2; 
	int plac;
	int mod; 
	int ano; 
	int cpf;
	int mail;
	int ass;
	int tel;
	
	printf("Informe o nome completo: \n");
    scanf("%c",&nom);

	printf("endereco: \n");
    scanf("%d",&end);
    
    	printf("Informe cidade: \n");
    scanf("%c",&cid);
    
	printf("Informe placa carro: \n");
    scanf("%d",&plac);
    
    	printf("Informe modelo carro: \n");
    scanf("%c",&mod);
    
     	printf("Informe seu email: \n");
    scanf("%d",&mail);
    
    printf("Informe sua assinatura: \n");
    scanf("%c",&ass);
    
    	printf("Informe o data de nascimento: \n");
    scanf("%f",&dat);
    
    	printf("Informe o telefone: \n");
    scanf("%f",&tel);
    
    	printf("Informe ano do carro: \n");
    scanf("%f",&ano);
    
    	printf("Informe seu cpf: \n");
    scanf("%f",&cpf);
    
printf("Informe o numero da casa: \n");
		scanf("%f",&num);
	
    
    printf("\n =========================\t\n.");
    
    printf("\n seu nome: %c\n",&nom);
    
    printf("\n =========================\t\n.");
    
    printf("\n seu endereco: %d",&end);
    
    printf("\n =========================\t\n.");
    
    printf("\n seu numero da casa: %f",&num);
    
    printf("\n =========================\t\n.");
    
    printf("\n cidade: %c",&cid);
    
    printf("\n =========================\t\n.");
    
    printf("\n data nascimento: %f",&dat);
    
    printf("\n =========================\t\n.");
    
    printf("\n seu telefone: %f",&tel);
    
printf("\n =========================\t\n.");
    
    printf("\n placa: %d",&plac);
    
    printf("\n =========================\t\n");
    
    printf("\n modelo do carro: %c",&mod);
    
    printf("\n =========================\t\n");
    
    printf("\n ano do carro : %f",&ano);
    
    printf("\n =========================\t\n");
    
    printf("\n cpf: %f",&cpf);
    
    printf("\n =========================\t\n");
    
    printf("\n email: %d",&mail);
    
    printf("\n =========================\t\n");
    
    printf("\n assinatura: %c",&ass);
    
    printf("\n =========================\t\n");
	
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
#include <conio.h>
 
int main() {
 
	float n1,n2;
	char op, continuar = 's';
	int i = 0,  tam = 0;
 
 	do{
	 	printf("Deseja calcular (s/n)?");
		scanf(" %c",&continuar);
		
	printf("---------------\n");
	printf("CALC\n");
	printf("---------------\n");
 
	printf("N1: ");
	scanf("%f",&n1);
 
	printf("OP:");
	scanf(" %c",&op); 
 
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
		
	}while(i<10 && continuar=='s');
	
	char le_valida_operador(){
	char operador;
	int cont=0;
	do{
		if(cont!=0){
			textcolor(4);
			printf("-------\nERRO\n-------\n");
		}
		scanf(" %c",&operador);	
		cont++;
	}while(operador!='+' && operador!='-' && operador!='*' && operador!='/');	
 
	return operador;
}

 
	return 0;
}*/
