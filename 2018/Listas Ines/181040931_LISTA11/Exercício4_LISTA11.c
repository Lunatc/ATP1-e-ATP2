/*Nome:C�ntia Braz Mesquita                          			                                             */
/*RA:181040931                                          			                                         */
/*Exerc�cio-Programa 3 -- Contador de n�s por recurs�o                                                                  */
/*Compilador:DevC++ 5.11                                    		                                         */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

typedef struct no{
	int info;
	struct no *prox;
}lista;

int contar(lista *l){
	if(l == NULL) return 0;
	else return 1 + contar(l->prox);
}

