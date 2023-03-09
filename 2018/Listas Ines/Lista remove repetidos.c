#include<stdio.h>
#include<stdlib.h>


typedef struct no{
	int info;
	struct no *prox;
}lista;

lista *Insere(lista *l,int numero){
	lista *novo;
	novo = (lista*) malloc(sizeof(lista));
	novo->info = numero;
	novo->prox = l;
	return novo;
}

void Imprime(lista *l){
	lista *aux=l;
	
	if(l == NULL){
		printf("Lista vazia");
	}
	else{
		while(aux != NULL){
			printf("%d",aux->info);
			aux = aux->prox;
		}
	}
}

lista* Remove_Repetidos(lista *l){
	lista *aux, *proximo;
	aux = l;
	proximo = aux->prox;
	
	while(aux != NULL){
		printf("Batata");
		while(proximo != NULL){
			if(aux->info == proximo->info){
				aux->prox = proximo->prox;
				free(proximo);
				proximo = aux->prox;
			}
			else proximo = proximo->prox;
		}
		aux = aux->prox;
		proximo = aux->prox;
	}
	return l;
}

int main(){
	lista *l;
	l = NULL;
	
	int i,numero,tam;
	
	printf("Digite o tamanho da lista:\n");
	scanf("%d",&tam);
	
	printf("Digite os valores da lista:\n");
	
	for(i=0;i<tam;i++){
		scanf("%d",&numero);
		l = Insere(l,numero);
	}
	l = Remove_Repetidos(l);
	
	Imprime(l);
	
	return 0;
}
