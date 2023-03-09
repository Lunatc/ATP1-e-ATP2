#include<stdio.h>
#include<stdlib.h>

int main(){
	int a, b, h;
	
	printf("Digite o valor de a:\n");
	scanf("%d",&a);
	printf("Digite o valor de b:\n");
	scanf("%d",&b);
	
	h = sqrt(pow(a,2) + pow(b,2));
	
	printf("A hipotenusa eh:%d", h);
}
