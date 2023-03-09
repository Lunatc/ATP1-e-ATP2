#include<stdio.h>
#include<stdlib.h>

typedef struct no{
	int info;
	struct no *prox;
}listaC;

listaC *Insere(listaC *l,int numero){
	listaC *novo,*aux = l;
	
	novo = (listaC*) malloc(sizeof(listaC));
	novo->info = numero;
	if(l == NULL){
		novo->prox = novo;
		return novo;
	}
	
	else{
		if(numero < l->info){
			novo->prox = l;
			while(aux->prox != l) aux = aux->prox;
			aux->prox = novo;
			return novo;
		}
		
		while(aux->prox != l && aux->prox->info < numero) aux = aux->prox;
		
		novo->prox = aux->prox;
		aux->prox = novo;
		
		return l;
	}
}

void Imprimir(listaC *l){
	listaC *aux = l;
	
	if(l == NULL) printf("Lista vazia");
	
	else{		
		do{
			printf("%d",aux->info);
			aux = aux->prox;
		}while(aux != l);		
	}
}

listaC *Remove(listaC *l,int escolhido){
	listaC *aux = l,*anterior=NULL,*final=l;
	
	if(l == NULL){
		printf("Lista vazia");
		return l;
	}
	
	else{
		
		while(aux->prox != l && aux->info != escolhido){
			anterior = aux;
			aux = aux->prox;
		}
		while(final->prox != l)	final = final->prox;	
		
		if(anterior == NULL){
			final->prox = aux->prox;
			free(aux);
		}
		else if(aux == final){
				anterior->prox = l;
				free(aux);
			}
		
		else{
			anterior->prox = aux->prox;
			free(aux);
		}
		
		
	}
}


int main(){
	listaC *l;
	l = NULL;
	
	int i,numero,tam,escolhido;
	
	printf("Digite o tamanho da lista:\n");
	scanf("%d",&tam);
	
	printf("Digite os valores da lista:\n");
	for(i=0;i<tam;i++){
		scanf("%d",&numero);
		l = Insere(l,numero);
	}
	
	printf("Digite o escolhido:\n");
	scanf("%d",&escolhido);
	
	printf("Lista:\n");
	
	l = Remove(l,escolhido);
	
	Imprimir(l);
	
	return 0;
}

