#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct HORARIO{
	int hora;
	int min;
	int seg;
} horario;

typedef struct DATA{
	int dia;
	int mes;
	int ano;
} data;

struct estudante{
	char nome[10];
	int RA[8];
	char curso[10];
}aluno[4];

int main(){
	
	int i;
	
	for(i=0;i<2;i++){
		printf("Digite o nome do aluno:\n");
		scanf("%d",& aluno[i].nome);
		
		printf("Digite o RA do aluno:\n");
		scanf("%d",& compromisso[i].time.min);
		
		printf("Digite o curso do aluno:\n");
		fflush(stdin);
		scanf("%s",& compromisso[i].time.seg);
		fflush(stdin);
	}
	
	

	
	
	
	return 0;
}
