//5. Faca um programa que receba um numero inteiro e verifique se este número é par ou ímpar

#include<stdio.h>
#include<stdlib.h>

int main(){
	int numero;
	
	printf("Escreva um numero:\n");
	scanf("%d",&numero);
	
	if(numero == 1 || numero%2 != 0)
		printf("Eh impar");
	else 
		printf("Eh par");
}
