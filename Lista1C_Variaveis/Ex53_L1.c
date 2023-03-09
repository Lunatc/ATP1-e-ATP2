#include<stdio.h>
#include<stdlib.h>

int main(){
	float c, l, preco, custo;
	
	printf("Digite o comprimento do terreno:\n");
	scanf("%f",&c);
	
	printf("\nDigite a largura do terreno:\n");
	scanf("%f",&l);
	
	printf("\nDigite o preco por metro de tela:\n");
	scanf("%f",&preco);
	
	custo = c * l * preco;
	
	printf("O custo eh: %f",custo);
}
