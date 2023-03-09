#include<stdio.h>
#include<stdlib.h>

int main(){
	float valor, horas, pagamento;
	
	printf("Digite o valor da hora trabalho do funcionario:\n");
	scanf("%f",&valor);
	
	printf("\nDigite a quantidade de horas trabalhadas:\n");
	scanf("%f",&horas);
	
	pagamento = (valor * horas) * 1.1;
	
	printf("\nO pagamento sera de: %f",pagamento);
	
	float base, salario;
	
	printf("Digite o salario base:\n");
	scanf("%f",&base);
	
	salario = (base * 1.05)/1.07;
	
	printf("\nO salario eh %f",salario);	
}
