

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

busca_e_remove (int y, lista *l)
{
   lista *p, *q;
   p = l;
   q = l->prox;
   while (q != NULL && q->info != y) {
      p = q;
      q = q->prox;
   }
   if (q != NULL) {
      p->prox = q->prox;
      free (q);
   }
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
	printf("A lista apos ser retirado o numero:");
	Imprime(l);

}
