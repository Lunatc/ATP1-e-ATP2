//47. Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
#include<stdio.h>
#include<stdlib.h>

int main(){
	int inteiro, p1, p2, p3, p4;
	
	printf("Digite um numero de 4 digitos:\n");
	scanf("%d",&inteiro);
	
	p1 = inteiro/1000;
	
	p2 = inteiro%1000;
	
	p3 = p2%100;
	
	p2 = p2/100;
	
	p4 = p3%10;
	
	p3 = p3/10;
	
	printf("Digito 1: %d\n", p1);
	printf(" Digito 2: %d\n", p2);
	printf("  Digito 3: %d\n", p3);
	printf("   Digito 4: %d\n", p4);
	
	
	
}
