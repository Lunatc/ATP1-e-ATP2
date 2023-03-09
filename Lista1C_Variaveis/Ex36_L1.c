#include<stdio.h>
#include<stdlib.h>

int main(){
	float a, r, v;
	
	printf("Digite a altura do cilindro:\n");
	scanf("%f",&a);
	printf("Digite o raio do cilindro:\n");
	scanf("%f",&r);
	
	v = 3.141592 * (pow(r,2)) * a;
	
	printf("\nO volume eh:%f",v);
}
