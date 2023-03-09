/*Nome:Cíntia Braz Mesquita                      			    */
/*RA:181040931                                        			*/
/*Exercício-Programa 3 -- Funçao Gerar Vetor                    */
/*Compilador:DevC++ 5.11                                		*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>


void Gera_Vetor_Aleatoriamente(int v[],int n){
	int i;
	for(i=0;i<n;i++){
		v[i] = rand()%10;
	}
}

int main(){
	int i ,n;
	int v[100];
	srand(time(NULL));
	printf("Digite a quantidade de elementos no vetor:\n");
	scanf("%d",&n);
	printf("Vetor:\n");
	Gera_Vetor_Aleatoriamente(v,n);
	for(i=0;i<n;i++){
		printf("Posicao[%d]:%d\n",i,v[i]);
	}
}
