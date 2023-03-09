//6.Faça um programa que leia 10 inteiros e imprima sua media.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, soma=0, auxiliar, media;
	
	printf("Digite 10 numeros interos:\n");
	
	for(i=0;i<10;i++){
		scanf("%d",&auxiliar);
		soma += auxiliar;
	}
	
	media = (soma/10);
	
	printf("A media eh: %d", media);
	
	return 0;
}

