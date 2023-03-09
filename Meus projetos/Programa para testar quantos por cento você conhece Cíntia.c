#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int cont=0,beg=0,begaws=0,reg=0;
	char nome[20];
	do{
	printf("      Programa para testar quantos por cento você conhece de Cíntia.  \n\n");
	printf(" Está pronto para começar o teste?  \n");
	printf("  1-Sim.\n  2-Não.\n");
	scanf("%d",&beg);
	if ( beg == 2 );{
		printf("Porque não?\n\n");
		printf("  0-Porque não quero.\n");
		printf("  1-Porque entrei sem querer nesse programa.\n");
		printf("  2-Porque não sei nada sobre a Cíntia\n");
		scanf("%d",&begaws);
		if( begaws == 0) {
			printf(" Então tchau,você é chato(a).");
			return 0;
			}
		if( begaws == 1) {
			printf(" Então saia logo daqui,oras...");
			return 0;
			}
		if( begaws == 2) {
			printf("  Bem,mas você nem ao menos gostaria de tentar?\n");
			printf("1-Sim.\n2-Não.\n");
			scanf("%d",&reg);
			if (reg == 1);{
				printf("\nEntão tente novamente,vai que você sabe mais do que acha,não é mesmo?\n\n\n");
				}
			if (reg == 2);{
				printf("\nEntão tchau.");
				return 0;
				}	
			}
		}
	if ( beg == 1 );{
		printf("Então seja Bem vindo ao meu programa! ^~^");
		printf("\nPrimeiramente me diga seu nome,para que este teste fique um pouco mais interessante.\n");
		scanf("%c",& nome);
		printf("É um prazer realizar esse teste com voce %c",nome);
	}

	}while(cont == 0);
}
