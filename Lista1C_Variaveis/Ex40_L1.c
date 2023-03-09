#include<stdio.h>
#include<stdlib.h>

int main(){
	int dias;
	float pagamento;
	
	printf("Digite o numero de dias:\n");
	scanf("%d",&dias);
	
	pagamento = (30 * dias)/1.08;
	
	printf("\nO pagamento eh: %f",pagamento);
}
