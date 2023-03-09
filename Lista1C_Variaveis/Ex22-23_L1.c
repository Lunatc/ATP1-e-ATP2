#include<stdio.h>
#include<stdlib.h>

int main(){
	float m ,j;
	
	printf("Digite o comprimento em jardas:\n");
	scanf("%f",&j);
	
	m = 0.91 * j;
	
	printf("\nO comprimento em metros eh:%f",m);
	
	printf("\nDigite o comprimento em metros:\n");
	scanf("%f",&m);
	
	j = m/0.91;
	
	printf("\nO comprimento em jardas eh:%f",j);
}
