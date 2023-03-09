/*Nome:Cíntia Braz Mesquita                          			                                             */
/*RA:181040931                                          			                                         */
/*Exercício-Programa 2-- Criar uma terceira lista da interseção de L1 E L2                                   */
/*Compilador:DevC++ 5.11                                    		                                         */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

typedef struct no{
		int info;
		struct no *prox;
}lista;

lista *Insere(lista *l,int x){
	lista *novo;
	novo = (lista*) malloc(sizeof(lista));
	novo->info = x;
	novo->prox = l;
	return novo;
}

lista *Intersecao(lista *l1,lista *l2){
	lista *aux = l1;
	lista *aux2 = l2;
	lista *l3;
	l3 = NULL;
	while(aux != NULL){
		aux2 = l2;
		while(aux2 != NULL){
			if(aux->info == aux2->info){
				l3 = Insere(l3, aux->info);
			}
			aux2 = aux2->prox;
		}
		aux = aux->prox;
	}
	return l3;
}
 
void Imprime(lista *l){
	if(l == NULL)printf("Lista vazia");
	while(l != NULL){
		printf("%d\n",l->info);
		l = l->prox;
	}
}

int main(){
	lista *l1;
	lista *l2;
	lista *l3;
	
	l1 = NULL;
	l2 = NULL;
	l3 = NULL;
	
	int i,x,tam1,tam2;
	
	printf("Digite o tamanho da primeira lista:\n");
	scanf("%d",&tam1);
	
	printf("Digite os valores da lista 1:\n");
	for(i=0;i<tam1;i++){
		scanf("%d",&x);
		l1 = Insere(l1,x);
	}
	
	printf("Digite o tamanho da segunda lista:\n");
	scanf("%d",&tam2);
	
	printf("Digite os valores da lista 2:\n");
	for(i=0;i<tam2;i++){
		scanf("%d",&x);
		l2 = Insere(l2,x);
	}

	l3 = Intersecao(l1,l2);
	Imprime(l3);
	return 0;
}
