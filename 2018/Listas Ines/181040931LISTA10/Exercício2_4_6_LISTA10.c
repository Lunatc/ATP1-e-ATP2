/*Nome:Cíntia Braz Mesquita                          			                                             */
/*RA:181040931                                          			                                         */
/*Exercício-Programa 2,4 e 6 -- lista sem cabeçalho                                                          */
/*Compilador:DevC++ 5.11                                    		                                         */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h> 

typedef struct no{
	int numero;
	struct no *prox;
}lista;

lista *Inserir(lista *l,int x){
	lista *novo;
	novo = (lista*) malloc(sizeof(lista));
	novo->numero = x;
	novo->prox = l; 
	return novo;
}

void Imprimir(lista *l){
	lista *aux;
	aux = l;
	while(aux != NULL){
		printf("%d\n",aux->numero);
		aux = aux->prox;
	}                
}
int main(){
	int i,n,x;
	lista *l=NULL;
	printf("Digite o tamanho da lista:\n");
	scanf("%d",&n);
	printf("Digite os valores a serem colocados na lista:\n");
	for(i=0;i<n;i++){
		scanf("%d",&x);	
		l = Inserir(l,x);
	}
	printf("A lista digitada:\n");
	Imprimir(l);
	
}
