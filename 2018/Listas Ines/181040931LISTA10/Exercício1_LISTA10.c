/*Nome:Cíntia Braz Mesquita                          			                                             */
/*RA:181040931                                          			                                         */
/*Exercício-Programa 1 -- Teste                                                                              */
/*Compilador:DevC++ 5.11                                    		                                         */

#include<stdio.h>
#include<stdlib.h>


int main(){

	typedef struct no{
		int item;
		struct no *prox;
	}lista;
	lista *x;	
	x = (lista *) malloc(sizeof (lista));
	x->item = 99;
	x->prox = x;
	struct no inicio,y,*p;
	inicio.item = 10;
	inicio.prox = &y;
	y.item = 3;
	y.prox = NULL;
	p = &inicio;
	printf("%d",p->item);
	p = p->prox;
	printf("%d",p->item);
return 0;	
}
