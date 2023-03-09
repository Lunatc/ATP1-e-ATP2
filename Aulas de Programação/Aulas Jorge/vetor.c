//Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.

#include<stdio.h>
#include<stdlib.h>


int main(){
	int vetor[6], i, soma;
	
	//printf("Digite os 6 numeros:\n");
	
//	for(i=0;i<6;i++){
//		scanf("%d",&vetor[i]);
//	}
	
	vetor[0] = 1;
	vetor[1] = 0;
	vetor[2] = 5;
	vetor[3] = -2;
	vetor[4] = -5;
	vetor[5] = 7;
	
	soma = vetor[0] + vetor[1] + vetor[5];
	
	for(i=0;i<6;i++){
		printf("%d\n",vetor[i]);
	}
	
	printf("A soma eh: %d",soma);
	
	vetor[4] = 100;
	
	printf("\n");
	
	for(i=0;i<6;i++){
		printf("%d\n",vetor[i]);
	}

	
	
	
	return 0;
}
