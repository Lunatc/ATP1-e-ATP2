#include<stdio.h>
#include<stdlib.h>


int main(){
	float num, cot;
	
	printf("Digite um numero real:\n");
	scanf("%f",&num);
	
	printf("\nDigite a cotacao do dolar:\n");
	scanf("%f",&cot);
	
	printf("O resultado eh:%f",num * cot);
}
