#include<stdio.h>
#include<stdlib.h>


int main(){
	float valort;
	
	printf("Digite o valor:\n");
	scanf("%f",&valort);
	
	printf("\nO total a pagar com desconto eh: %f", valort/1.1);
	
	printf("\nO valor de cada parcela eh %f", valort/3);
	
	printf("\nComissao se for a vista %f", (valort/1.1)*0.05);
	
	printf("\nComissao se for parcelada %f", valort*0.05);
}
