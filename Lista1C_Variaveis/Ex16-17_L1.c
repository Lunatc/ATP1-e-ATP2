#include<stdio.h>
#include<stdlib.h>

int main(){
	float c, p;
	
	printf("Digite o comprimento em polegadas:\n");
	scanf("%f",&p);
	
	c = p*2.54;
	
	printf("\nO comprimento em centimetros eh: %f",c);
	
	printf("\nDigite o comprimento em centrimetros:\n");
	scanf("%f",&c);
	
	p = c/2.54;
	
	printf("\nO comprimento em centimentros eh: %f",p);
	
	
}
