#include<stdio.h>
#include<stdlib.h>

int main(){
	float f, c, k;
	
	printf("Digite a temperatura em Celsius:\n");
	scanf("%f",&c);
	
	f = (c * 1.8) + 32;
	
	printf("\nA temperatura em Fahrenheit eh: %f",f);
	
	printf("\nDigite a temperatura em Fahrenheit:");
	scanf("%f",&f);
	
	c = 5 * ((f - 32)/9);
	
	printf("\nA temperatura em Celsius eh: %f",c);
	
	printf("\nDigite a temperatura em Kelvin:\n");
	scanf("%f",&k);
	
	c = k - 273.15;
	
	printf("\nA temperatura em Celsius eh:%f",c);
	
	printf("\nDigite a temperatura em Celsius:\n");
	scanf("%f",&c);
	
	k = c + 273.15;
	
	printf("\nA temperatura em Kelvin eh: %f",k);
	
}
