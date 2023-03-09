#include<stdio.h>
#include<stdlib.h>

int main(){
	int num, mun,e1,e2,e3;
	
	printf("Digite o numero:\n");
	scanf("%d",&num);
	
	e1 = num/100;
	
	e2 = num%100;
	
	e3 = e2;
	
	e2 = e2/10;
	
	e3 = e3%10;
	
	mun = (e3* 100) + (e2 * 10) + e1;
	
	printf("O inverso eh %d",mun);
	
}
