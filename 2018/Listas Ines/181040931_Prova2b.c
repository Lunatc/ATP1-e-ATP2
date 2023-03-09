#include<stdio.h>
#include<stdlib.h>


 typedef struct no{
 	int info;
 	struct no *prox;
 }lista;
 
 lista *Insere(lista * l,int numero){
 	lista *novo;
 	
 	novo = (lista*) malloc(sizeof(lista));
 	novo->info = numero;
 	novo->prox = l;
 	return novo;
 }
 
 void Imprime(lista *l){
 	lista *aux = l;
 	if(l == NULL) printf("Lista vazia.");
 	else{
 		while(aux != NULL){
 			printf("%d",aux->info);
 			aux = aux->prox;
		 }
	 }
 }
 
 lista *Remove_Repetidos(lista *k){
	lista *aux,*anterior,*aux2;
	int x;
	
	aux = k;
	aux2 = k;
	
	if(k == NULL){
		printf("Lista vazia");
		return 0;
	} 
	
	else{
		anterior = aux;
		aux = aux->prox;
		x = anterior->info;
		
		while(aux2 != NULL){
			while(aux != NULL){
				if(aux->info == x){
					anterior->prox = aux->prox;
					free(aux);
					aux = anterior->prox;
				}
				else{
					anterior = aux;
					aux = aux->prox;		
				}
			}
			
			anterior = aux;		
			x = anterior->info;
			aux = aux->prox;
			aux2 = aux2->prox;
		}
	}
	return k;
 }
 
 lista *Diferenca_lista(lista *l1,lista *l2){
 	lista *k,*aux1,*aux2,*proximo;
 	int x;
 
 	//Para l1 vazia
 	if(l1 == NULL){
 		printf("A primeira lista esta vazia, nao eh possivel fazer a subtracao.");
 		return 0;
	 }
	
	 //Para l2 vazia
	 else if(l2 == NULL){
		return l1;//Se l2 for vazia, nao ha o que subtrair, entao k é igual a lista l1;	 	
	 } 		
	
	//Verifica e adiciona os valores a k 
	 else{
	 	aux1 = l1;
	 	int cont = 0;
	 	
		 while(aux1 != NULL){
	 		
	 		aux2 = l2;
	 		
		 	while(aux2 != NULL){	
	 			if(aux1->info == aux2->info){
	 				aux2 = aux2->prox;
	 				cont = 1;
		 		}
		 		else{
		 			aux2 = aux2->prox;
				}
		 	}
		 	
			if(cont == 0){
				x = aux1->info;
				k = Insere(k,x);
				
			}
			cont = 0;
			aux1 = aux1->prox;
			
	 	}
	 	
		if(k != NULL){
	 		printf("batata");
		} 	
 	}
 
	return k;
}
 
 lista *Desaloca(lista *l){
 	lista *aux;
 	aux = l;
 	
	 while(aux != NULL){
 		l = l->prox;
 		free(aux);
 		aux = l;
	 }
	 
	 return l;
 }
 
 int main(){
 	lista *l1;
 	lista *l2;
 	lista *k;
 	
 	l1 = NULL;
 	l2 = NULL;
 	k = NULL;
 	
 	int i,tam,numero;
 	
 	printf("Digite o tamanho da lista 1:\n");
 	scanf("%d",&tam);
 	
 	printf("Digite os valores da lista 1:\n");
 	
	for(i=0;i<tam;i++){
		scanf("%d",&numero);
		l1 = Insere(l1,numero);
	}
	
	printf("Digite o tamanho da lista 2:\n");
	scanf("%d",&tam);
	
	printf("Digite os valores da lista 2:\n");
	for(i=0;i<tam;i++){
		scanf("%d",&numero);
		l2 = Insere(l2,numero);
	}
	
	printf("Lista1:\n");
	Imprime(l1);
	printf("\n");
	
	printf("Lista2:\n");
	Imprime(l2);
	printf("\n");
	
	k = Diferenca_lista(l1,l2);
	
	printf("\nLista k:\n");
	Imprime(k);
	printf("\n");
	
	if(l1 == NULL){
		return 0;
	}
	
	l1 = Desaloca(l1);
	l2 = Desaloca(l2);
	k = Desaloca(k);
	
	printf("Listas desalocadas:\n");
	
	printf("Lista1:\n");
	Imprime(l1);
	printf("\n");
	
	printf("Lista2:\n");
	Imprime(l2);
	printf("\n");
	
	printf("Lista k:\n");
	Imprime(k);
	printf("\n");
	
	return 0;
 }
