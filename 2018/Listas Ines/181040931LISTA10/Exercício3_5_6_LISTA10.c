/*Nome:Cíntia Braz Mesquita                          			                                             */
/*RA:181040931                                          			                                         */
/*Exercício-Programa 3,5 e 6 -- Lista com cabeçalho                                                          */
/*Compilador:DevC++ 5.11                                    		                                         */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>


typedef struct no{
	int numero;
	struct no *prox;
}lista;

void Inserir(lista *l,int x){
	lista *novo;
	novo = (lista*) malloc(sizeof(lista));
	novo->numero = x;
	novo->prox = l->prox; 
	l->prox = novo;
}

void Imprimir(lista *l){
	lista *aux;
	aux = l->prox;
	while(aux != NULL){
		printf("%d\n",aux->numero);
		aux = aux->prox;
	}                
}
int main(){
	int i,n,x;
	lista l;
	l.prox = NULL;
	printf("Digite o tamanho da lista:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Digite o valor a ser colocado na lista:\n");
		scanf("%d",&x);	
		Inserir(&l,x);
	}
	printf("A lista digitada:\n");
	Imprimir(&l);
	
}


