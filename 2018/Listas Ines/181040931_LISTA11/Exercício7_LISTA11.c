/*Nome:Cíntia Braz Mesquita                          			                                             */
/*RA:181040931                                          			                                         */
/*Exercício-Programa 7 -- Função que irverte                                                                 */
/*Compilador:DevC++ 5.11                                    		                                         */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

typedef struct no{
	int info;
	struct no *prox;
}lista;

void Inserir(lista *l,int x){
	lista *novo;
	novo = (lista*) malloc(sizeof(lista));
	novo->info = x;
	novo->prox = l->prox; 
	l->prox = novo;
}

void Imprimir(lista *l){
	lista *aux;
	aux = l->prox;
	while(aux != NULL){
		printf("%d\n",aux->info);
		aux = aux->prox;
	}                
}

lista *Inverte_lista(lista *l){
	lista *p,*q;
	if(l == NULL) return l;
	p = l->prox;
	l->prox = NULL;
	while(p!= NULL){
		q = p->prox;
		p->prox = l;
		p = q;
		l = p;
		printf("%d",l);
	}
}

int main(){
	lista l;
	int x,i,n;
	l.prox = NULL;
	printf("Digite o tamanho da lista:\n");
	scanf("%d",&n);
	printf("Digite os valores contidos na lista:\n");
	for(i=0;i<n;i++){
		scanf("%d",&x);
		Inserir(&l,x);
	}
	printf("A lista na ordem normal:\n");
	Imprimir(&l);
	printf("A lista na ordem inversa:\n");
	Inverte_lista(&l);
	
	Imprimir(&l);
	return 0;
}
