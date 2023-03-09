#include<stdio.h>
#include<stdlib.h>

int main(){
	int num, e1, e2, e3, e4;
	
	printf("Digite o numero:\n");
	scanf("%d",&num);
	
	e1 = num/1000;
	e2 = num%1000;
	e3 = e2;
	e2 = e2/100;
	e3 = e3%100;
	e4 = e3;
	e3 = e3/10;
	e4 = e4%10;
	
	printf("%d \n%d \n%d \n%d\n",e1,e2,e3,e4);
	
	
}
