/*Nome:Cíntia Braz Mesquita                          			                                             */
/*RA:181040931                                          			                                         */
/*Exercício-Programa 7 -- Lista com cabeçalho função busca                                                   */
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

int BuscaEndereco(lista *l,int x){
	lista *aux;
	aux = l->prox;
	while(aux != NULL){
		if(aux->numero == x) return aux;
		else aux = aux->prox;
	}
	return NULL;
}

int main(){
	int i,n,x,b,ender;
	lista l;
	l = NULL;
	printf("Digite o tamanho da lista:\n");
	scanf("%d",&n);
	printf("Digite os valores a serem colocados na lista:\n");
	for(i=0;i<n;i++){
		scanf("%d",&x);	
		Inserir(&l,x);
	}
	printf("Digite o valor a ser procurado:\n");
	scanf("%d",&b);
	printf("O endereco de %d eh:\n",b);
	ender = BuscaEndereco(&l,b);
	if(ender == NULL) printf("Nao ha esse numero na lista");
	else printf("%d",ender);
	return 0;
}
