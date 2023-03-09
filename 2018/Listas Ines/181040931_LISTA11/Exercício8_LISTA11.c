
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

typedef struct no{
	int info;
	struct no *prox;
}lista;

void Insere(lista *p, int x){
	lista *novo;
	novo = (lista*) malloc(sizeof(lista));
	novo->info = x;
	novo->prox = p->prox;
	p->prox = novo;
}

void Imprime(lista l){
	lista *p;
	p = l.prox;
	while(p!= NULL){
		printf("%d\n",p->info);
		p = p->prox;
	}
}

lista *Remove_Rec(lista *l,int y){
	lista *aux;
	aux = l->prox;
	if(aux != NULL){
		if(aux->info == y) free(aux);
		else return Remove_Rec(l->prox,y);
	}
	return 0;
}


int busca_e_remove(int y, lista *l){
   lista *p, *q;
   p = l;
   q = l->prox;
  while(q != NULL){
  	if(q->info == y){
  	p->prox = q->prox;
    free (q);
  	}
  	return busca_e_remove(y,l->prox);
  }
  return 0;
}

int main(){
	lista l;
	l.prox = NULL;
	int x,i,n,y;
	printf("Digite o tamanho da lista:\n");
	scanf("%d",&n);
	printf("Digite os valores:\n");
	for(i=0;i<n;i++){
		scanf("%d",&x);
		Insere(&l,x);
	}
	printf("A lista feita eh:\n");
	Imprime(l);
	printf("Digite o numero a ser procurado:\n");
	scanf("%d",&y);
	busca_e_remove(y,&l);
	Imprime(l);

}
