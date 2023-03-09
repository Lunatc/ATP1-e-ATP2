#include<stdio.h>
#include<stdlib.h>

int main(){
	float in1, in2, in3, premio, total, p1, p2 ,p3;
	
	printf("Digite o valor do premio:\n");
	scanf("%f",&premio);
	
	printf("Digite quanto cada um dos tres investiram:\n");
	scanf("%f%f%f",&in1,&in2,&in3);
	
	total = in1 + in2 + in3;
	
	p1 = in1/total;
	p2 = in2/total;
	p3 = in3/total;
	
	printf("O primeiro iria ganhar:%f", premio*p1);
	printf("\nO segundo iria ganhar:%f",premio*p2);
	printf("\nO terceiro iria ganha:%f",premio*p3);
}
