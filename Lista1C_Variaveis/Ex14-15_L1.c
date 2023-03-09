#include<stdio.h>
#include<stdlib.h>


int main(){
	float g,r;
	
	printf("Digite o angulo em graus:\n");
	scanf("%f",&g);
	
	r = (g * 3.1415)/180;
	
	printf("\nO angulo em radianos eh:%f",r);
	
	printf("\nDigite o angulo em radianos:\n");
	scanf("%f",&r);
	
	g = (r * 180)/3.1415;
	
	printf("\nO angulo em graus eh:%f",g);
}
