/*Nome:Cíntia Braz Mesquita                                     */
/*RA:181040931                                                  */
/*Exercício-Programa 5 -- Subsequencias de um vetor             */
/*Compilador:DevC++ 5.11   	   						            */

#include<stdio.h>
#include<stdlib.h>

void subsequencias(int n,int vetor[]){
	int i,aux = 0;
	scanf("%d",&n);
	printf("Digite os valores do vetor:\n");
	for(i=0;i<n;i++){
		scanf("%d",&vetor[i]);
	}
	aux = vetor[0];
	for(i=0;i<n;i++){
		if(vetor[i] > aux){
			printf("%d",vetor[i]);
			aux = vetor[i];
		}
		else if(vetor[i] <= aux){
			printf("\n%d",vetor[i]);
			aux = vetor[i];
		}
	}
}

int main(){
	int n,vetor[100];
	
	printf("Digite o valor de n:");
	subsequencias(n,vetor);
}
