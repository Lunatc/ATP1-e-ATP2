//6.Faça um programa que leia 10 inteiros e imprima sua media.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int cont = 0, soma=0, auxiliar, media;
	
	printf("Digite um numero:\n");
	
	do{
		scanf("%d",&auxiliar);
		soma += auxiliar;
		cont++;
	}while(cont != 10);
	
	media = soma/10;
	
	printf("A media eh: %d", media);
	
	
}
