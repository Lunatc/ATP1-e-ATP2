//1. Fa�a um programa que receba dois n�meros e mostre qual deles � o maior

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n1, n2;
	
	printf("Escreva dois numeros:\n");
	scanf("%d%d",&n1,&n2);
	
	if(n1 > n2){
		printf("O primeiro numero eh maior\n");
	}
	else if(n1 == n2){
		printf("Os numeros sao iguais\n");
	}
	else{
		printf("O segundo numero eh maior\n");
	}
} 
