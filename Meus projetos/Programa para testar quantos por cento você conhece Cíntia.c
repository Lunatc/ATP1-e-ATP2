#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int cont=0,beg=0,begaws=0,reg=0;
	char nome[20];
	do{
	printf("      Programa para testar quantos por cento voc� conhece de C�ntia.  \n\n");
	printf(" Est� pronto para come�ar o teste?  \n");
	printf("  1-Sim.\n  2-N�o.\n");
	scanf("%d",&beg);
	if ( beg == 2 );{
		printf("Porque n�o?\n\n");
		printf("  0-Porque n�o quero.\n");
		printf("  1-Porque entrei sem querer nesse programa.\n");
		printf("  2-Porque n�o sei nada sobre a C�ntia\n");
		scanf("%d",&begaws);
		if( begaws == 0) {
			printf(" Ent�o tchau,voc� � chato(a).");
			return 0;
			}
		if( begaws == 1) {
			printf(" Ent�o saia logo daqui,oras...");
			return 0;
			}
		if( begaws == 2) {
			printf("  Bem,mas voc� nem ao menos gostaria de tentar?\n");
			printf("1-Sim.\n2-N�o.\n");
			scanf("%d",&reg);
			if (reg == 1);{
				printf("\nEnt�o tente novamente,vai que voc� sabe mais do que acha,n�o � mesmo?\n\n\n");
				}
			if (reg == 2);{
				printf("\nEnt�o tchau.");
				return 0;
				}	
			}
		}
	if ( beg == 1 );{
		printf("Ent�o seja Bem vindo ao meu programa! ^~^");
		printf("\nPrimeiramente me diga seu nome,para que este teste fique um pouco mais interessante.\n");
		scanf("%c",& nome);
		printf("� um prazer realizar esse teste com voce %c",nome);
	}

	}while(cont == 0);
}
