#include<stdio.h>
#include<stdlib.h>

int main(){
	float mc, l;
	
	printf("Digite o valor em metros cubicos:\n");
	scanf("%f",&mc);
	
	l = 1000 * mc;
	
	printf("\nO volume em litros eh:%f",l);
	
	printf("\nDigite o valor em litros:");
	scanf("%f",&l);
	
	mc = l/1000;
	
	printf("\nO volume em metros cubicos eh:%f",mc);
}
