#include<stdio.h>
#include<stdlib.h>

int main(){
	float m2, acres, hc;
	
	printf("Digite a area em metros quadrados:\n");
	scanf("%f",&m2);
	
	acres = m2 * 0.000247;
	
	printf("\nA area em acres eh:%f",acres);
	
	printf("\nDigite a area em acres:\n");
	scanf("%f",&acres);
	
	m2 = acres * 4048.58;
	
	printf("\nA area em metros quadrados eh:%f",m2);
	
	printf("\nDigite a area em metros quadrados:\n");
	scanf("%f",&m2);
	
	hc = m2 * 0.0001;
	
	printf("\nA area em hectares eh:%f",hc);
	
	printf("\nDigite a area em hectares:\n");
	scanf("%f",&hc);
	
	m2 = hc * 10000;
	
	printf("\nA area em metros quadrados eh:%f",m2);
}
