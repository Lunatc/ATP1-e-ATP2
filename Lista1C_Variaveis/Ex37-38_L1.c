#include<stdio.h>
#include<stdlib.h>

int main(){
	float valor;
	
	printf("Digite o valor do produto:\n");
	scanf("%f",&valor);
	
	valor = valor/1.12;
	
	printf("\nO valor com desconto eh %f",valor);
	
	float salario;
	
	printf("Digite o salario do empregado:\n");
	scanf("%f",&salario);
	
	salario = salario * 1.25;
	
	printf("\nO novo salario eh:%f",salario);
}
