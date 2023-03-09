#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int num, soma, area;
	
	printf("Digite um numero:\n");
	scanf("%d",&num);
	
	printf("\nO sucessor do numero eh %d\n",num + 1);
	printf("\nO antecessor do numero eh %d\n",num - 1);
	
	soma = (((3*num)+1) + ((2*num) - 1));
	printf("\nA soma do sucessor de seu triplo com o antecessor de seu dobro eh: %d", soma);
	
	area = pow(num,2);
	printf("\nA area do quadrado eh: %d",area);
}
