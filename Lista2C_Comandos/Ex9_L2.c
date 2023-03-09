#include<stdio.h>
#include<stdlib.h>

int main(){
	float salario, prestacao;
	
	printf("Digite o salario do trabalhador:\n");
	scanf("%f",&salario);
	
	printf("Digite o valor da prestacao:\n");
	scanf("%f",&prestacao);
	
	if(prestacao > (salario * 0.2))
		printf("Emprestimo nao concedido");
	else
		printf("Emprestimo concedido");
}
