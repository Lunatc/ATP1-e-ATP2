
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
	int i,n,x,b,ender;
	lista l;
	
	l.prox = NULL;
	printf("Digite o tamanho da lista:\n");
	scanf("%d",&n);
	printf("Digite os valores a serem colocados na lista:\n");
	for(i=0;i<n;i++){
		scanf("%d",&x);	
		Inserir(&l,x);
	}
	printf("\n");
	Imprimir(&l);
	return 0;
}
