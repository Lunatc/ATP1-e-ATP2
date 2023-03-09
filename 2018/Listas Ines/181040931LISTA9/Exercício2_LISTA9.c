#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
	char nome[100];
	char data[12];
	int  Cpf;
}Pessoa;

void dados(Pessoa *p){
	puts("Digite o nome da pessoa:");
	scanf("%[^\n]",p->nome);
	getchar();
	puts("Digite a data de nascimento desse ser humanuzinho:");
	scanf("%[^\n]",p->data);
	getchar();
	puts("Digite o cpf desse coiso ai:");
	scanf("%d",&p->Cpf);
	getchar();
}

void imprime_dados(Pessoa *p){
	printf("Data de aniversario: %s",p->data);
	printf("Cpf: %s",p->Cpf);
}

int main(){
	int n, i;
	puts("Quantas pessoas serao cadastradas?");
	scanf("%d", &n);
	Pessoa *p[n];
	(Pessoa *) malloc( n * sizeof(Pessoa));
	for(i=0;\	i<n;i++){
		getchar();
		dados(p[i]);
	}
	
	for(i=0;i<n;i++){
		printf("Nome: %s",p[i]->nome);
		fflush(stdin);
		imprime_dados(p[i]);
		printf("\n\n\n");
	}
	return 0;
}
