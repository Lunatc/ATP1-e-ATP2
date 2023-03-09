/*Nome:Cíntia Braz Mesquita                      			    */
/*RA:181040931                                        			*/
/*Exercício-Programa 3 -- Cadastro                          */
/*Compilador:DevC++ 5.11                                		*/

#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro{
    int matricula;
    char sobrenome[20];
    char nascimento[11];
}Aluno;

void dados(Aluno *p){
	puts("Digite o sobrenome do aluno:");
	scanf("%[^\n]",p->sobrenome);
	getchar();
	puts("Digite a data de nascimento:");
	scanf("%[^\n]",p->nascimento);
	getchar();
	puts("Digite a matrÃ­cula:");
	scanf("%d",&p->matricula);
}

void imprimeDados(Aluno *p){
	printf("Data de Aniversario: %s\n",p->nascimento);
	printf("MatrÃ­cula: %d\n",p->matricula);
}

void main(){
	int n, i;
	puts("Quantos alunos serao cadastrados?");
	scanf("%d", &n);
	Aluno *p[n];
	*p = (Aluno *) malloc( n * sizeof(Aluno));
	for(i = 0; i < n; i++){
		getchar();
		dados(p[i]);
	}
	for(i = 0; i < n; i++){
		printf("Sobrenome: %s\n",p[i]->sobrenome);
		imprimeDados(p[i]);
		printf("\n\n\n");
	}
    free(*p);
}
