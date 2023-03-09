//6.Faça um programa que leia 10 inteiros e imprima sua media.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int cont=0, soma=0, auxiliar, media;
	
	printf("Digite 10 numeros interos:\n");
	
	while(cont != 10){
		scanf("%d",&auxiliar);
		soma += auxiliar;
		cont++;
		auxiliar = 0;
	}
	
	media = (soma/10);
	
	printf("A media eh: %d", media);
	
	return 0;
}

