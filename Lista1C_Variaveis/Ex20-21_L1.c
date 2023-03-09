#include<stdio.h>
#include<stdlib.h>

int main(){
	float kg, l;
	
	printf("Digite a massa em quilogramas:\n");
	scanf("%f",&kg);
	
	l = kg/0.45;
	
	printf("\nA massa em libras eh:%f",l);
	
	printf("\nDigite a massa em libras:\n");
	scanf("%f",&l);
	
	kg = l * 0.45;
	
	printf("\nA massa em quilogramas eh:%f",kg);
}
