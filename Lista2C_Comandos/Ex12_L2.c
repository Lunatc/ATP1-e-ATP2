#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int num;
	
	printf("Digite o numero:\n");
	scanf("%d",&num);
	
	if(num < 0)
		printf("Numero invalido");

	else{
		printf("O logaritmo eh %d ",log( num));
	}
}
