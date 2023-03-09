#include<stdio.h>
#include<stdlib.h>

int main(){
	float kmh, ms;
	
	printf("Digite a velocidade em km/h:\n");
	scanf("%f",&kmh);
	
	ms = kmh/3.6;
	
	printf("\nA velocidade em ms eh:%f",ms);
	
	printf("\nDigite a velocidade em m/s:\n");
	scanf("%f",&ms);
	
	kmh = ms * 3.6;
	
	printf("\nA velocidade em km/h eh:%f",kmh);
	
}
