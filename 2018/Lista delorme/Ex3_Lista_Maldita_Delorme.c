//3) Faça um programa que leia um vetor de 10 posições e mostre os valores na tela de forma ordenada (crescente)

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int v[10],i,j,aux=0;
	
	printf("Digite os valores do vetor:\n");
	for(i=0;i<10;i++){
		scanf("%d",&v[i]);
	}
	
	printf("Vetor antes da ordenação:\n");
	for(i=0;i<10;i++){
		printf("%6d",v[i]);
	}
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(v[j] < v[i]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	
	printf("\n");
	
	printf("Vetor depois da ordenação:\n");
	for(i=0;i<10;i++){
		printf("%6d",v[i]);
	}
	
	
return 0;
}
