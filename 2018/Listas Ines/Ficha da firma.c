//Exercicio para treinar struct:Ficha da firma

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int i,diahoje,meshoje,anohoje,n;
	
	struct ficha{
		char nome[20];
		char sobrenome[20];
		char apelido[20];
		int  dia;
		int  mes;
		int  ano;
		int idade;
		char cor[20];
	}ficha[200];
	
	printf("Digite o dia em que voce esta:");
	scanf("%d",&diahoje);
	
	printf("Digite o mes em que voce esta:");
	scanf("%d",&meshoje);
	
	printf("Digite o ano em que voce esta:");
	scanf("%d",&anohoje);
	
	printf("\nDigite o numero de integrantes da firma:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("Digite o nome do integrante:");
		gets(ficha[i].nome);
		fflush(stdin);
	
		printf("\nDigite o sobrenome do integrante:\n");
		gets(ficha[i].sobrenome);		
		fflush(stdin);
		
		printf("\nDigite o apelido do integrante:\n");
		gets(ficha[i].apelido);		
		fflush(stdin);
	
		printf("Digite o dia do aniversario do integrante:");
		scanf("%d",&ficha[i].dia); 
		fflush(stdin);
		
		printf("Digite o mes do aniversario do integrante:");
		scanf("%d",&ficha[i].mes); 
		fflush(stdin);
	
		printf("Digite o ano de nascimento do integrante:");
		scanf("%d",&ficha[i].ano); 
		fflush(stdin);
		
		printf("\nDigite a cor de power ranger do integrante:\n");
		gets(ficha[i].cor);		
		fflush(stdin);
	}
	
	
	for(i=0;i<n;i++){
		if (ficha[i].mes > meshoje){
			ficha[i].idade = anohoje - ficha[i].ano;
		}
		else 
			ficha[i].idade = anohoje - ficha[i].ano - 1;
		
		printf("\n\n");
		printf("%s\n",ficha[i].nome);
		printf("   Sobrenome: %s\n",ficha[i].sobrenome);
		printf("   Apelido: %s\n",ficha[i].apelido);
		printf("   Data do aniversario: %d / %d",ficha[i].dia,ficha[i].mes);
		printf("   Idade:%d",ficha[i].idade);
		printf("   Cor de Power Ranger:%s",ficha[i].cor);
	}
	
return 0;
}
