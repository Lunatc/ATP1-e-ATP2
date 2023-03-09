#include<stdio.h>
#include<stdlib.h>

int main(){
	int num, soma=0, aux;
	
	printf("Digite o numero em que deseja somar:\n");
	scanf("%d",&num);
	
	if(num < 10)
		printf("Nao eh necessario somar");
		
	else if(num < 100){
		soma += aux/10;
		soma += aux%10;	
	}
	
	else if(num < 1000){
		soma += num/100;
		aux = num%100;
		soma += aux/10;
		soma += aux%10;	
	}		
	else{
		soma += num/1000;
		aux = num%1000;
		soma += aux/100;
		aux = aux%100;	
		soma += aux/10;
		soma += aux%10;	
	} 
	
	printf("A soma eh:%d",soma);
}
