/*Nome:Cíntia Braz Mesquita                          			                                             */
/*RA:181040931                                          			                                         */
/*Exercício-Programa 1-- Decidir se duas listas tem o mesmo conteúdo                                         */
/*Compilador:DevC++ 5.11                                    		                                         */


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

typedef struct no{
		int info;
		struct no *prox;
	}lista;
	
int Compara(lista *x ,lista *y){	
	if(x != NULL && y != NULL){
		if(x->info == y->info){
			printf("batata\n");
			return Compara(x->prox,y->prox);
		}
		else if(x->info != y->info){
			printf("As duas listas sao diferentes.");
			return 0;
		}
			
	}
	printf("As duas listas sao iguais");
	return 0;
}

lista *Insere(lista *l,int x){
	lista *novo;
	novo = (lista*) malloc(sizeof(lista));
	novo->info = x;
	novo->prox = l;
	return novo;
}

int main(){
	
	int i,tam1,tam2,x,z;
	lista *l;
	lista *m;
	
	l = NULL;
	m = NULL;
	
	printf("Digite o tamanho da primeira lista:\n");
	scanf("%d",& tam1);
	
	printf("Digite o conteudo da primeira lista:\n");
    for(i=0;i<tam1;i++){
       	scanf("%d",&x);
		l = Insere(l,x);	
   	}
	
	printf("Digite o tamanho da segunda lista:\n");
	scanf("%d",& tam2);

	printf("Digite o conteudo da segunda lista:\n");
    for(i=0;i<tam2;i++){
       	scanf("%d",&x);
		m = Insere(m,x);	
   	}

	Compara(l,m);	
return 0;
}



























































































