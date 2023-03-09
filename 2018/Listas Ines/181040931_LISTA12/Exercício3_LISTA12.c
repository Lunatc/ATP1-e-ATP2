/*Nome:Cíntia Braz Mesquita                          			                                             */
/*RA:181040931                                          			                                         */
/*Exercício-Programa 3-- lista k                                                                             */
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

void Imprime(lista *l){
	if(l == NULL)printf("Lista vazia");
	while(l != NULL){
		printf("%d",l->info);
		l = l->prox;
	}
}

lista *Ordenada(lista *l,int tam){
	lista *aux = l;
	lista *aux2 = l;
	lista *k;
	k = NULL;
	
	int i,x;
	
	x = aux->info;
	while(aux != NULL){
		while(aux2 != NULL){
			if(k != NULL){
				if(aux->info != k->info){
					if(x < aux->info){
						x = aux->info;
						printf("batata");
					}	
					aux = aux->prox;
				}
				else aux = aux->prox;	
			}
			else{
				if(x < aux->info){
						x = aux->info;
						printf("batata");
					}	
					aux = aux->prox;
				
			}
		}
		k = Insere(k,x);
		aux = l;
		x = 0;
	}	
	return k;
}


int main(){
	lista *l;
	lista *k;
	
	l = NULL;
	k = NULL;
	
	int x,i,tam;
	
	printf("Digite o tamanho da lista l:\n");
	scanf("%d",&tam);
	
	printf("Digite os valores da lista:\n");
	
	for(i=0;i<tam;i++){
		scanf("%d",&x);
		l = Insere(l,x);
	}
	
	k = Ordenada(l,tam);
	
	Imprime(k);
	return 0;
}
