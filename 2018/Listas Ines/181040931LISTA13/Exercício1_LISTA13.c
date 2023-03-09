/*Nome:Cíntia Braz Mesquita                          			                                             */
/*RA:181040931                                          			                                         */
/*Exercício-Programa 1-- Circulo com pessoas                                                                 */
/*Compilador:DevC++ 5.11                                    		                                         */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

typedef struct no{
	char nome[20];
	struct no *prox;
}listaC;

listaC *Insere(listaC *l,char *nome){
	listaC *novo,*p;
	novo = (listaC*) malloc(sizeof(listaC));
	strcpy(novo->nome,nome);
	if(l == NULL){
		novo->prox = novo;
		return novo;
	}
	novo->prox = l;
	p = l;
	while(p->prox != l) p = p->prox;
	p->prox = novo;
	return novo;		
}

listaC *Remove(listaC *l, char *nome){
	listaC *q;
	q=l->prox;
	strcpy(nome,q->nome);
	l->prox=q->prox;
	free(q);
	return l->prox; //retorna o sucessor do nó que foi removido.
}

void ImprimeCircular(listaC *L){
	listaC *p;
	if(L==NULL) printf("lista vazia");
	p = L;
	do{
		printf("%s \n",p->nome);
		p = p->prox;
	}while(p != L);		
}

listaC *Problema_Josephus(listaC *l,int *tam,int *m){
	int cont,i;
	cont = tam;
	while(cont != 1){
		for(i=0;i<tam;i++){
			if(i == m){
				l = Remove(l,l->nome);
			}
		}
		cont --;	
	}
	return l;
}

int main(){
	listaC *l;
	l = NULL;
	
	int tam,i,m;
	char nome[20];
	
	printf("Digite o tamanho da lista circular:\n");
	scanf("%d",&tam);
	
	printf("Digite os nomes da lista circular:\n");
	for(i=0;i<tam;i++){
		fflush(stdin);
		scanf("%[^\n]",nome);
		l = Insere(l,nome);
	}
	
	printf("Digite o valor do m:\n");
	scanf("%d",&m);
	
	l = Problema_Josephus(l,tam,m);
	ImprimeCircular(l);
	return 0;
}

