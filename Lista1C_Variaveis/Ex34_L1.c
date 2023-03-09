#include<stdio.h>
#include<stdlib.h>

int main(){
	float raio, area;
	
	printf("Digite o raio do circulo:\n");
	scanf("%f",&raio);
	
	area = 3.141592 * (pow(raio,2));
	
	printf("A area do circulo eh:%f",area);
}
