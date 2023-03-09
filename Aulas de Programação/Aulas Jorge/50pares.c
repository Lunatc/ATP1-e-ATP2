//10.Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int numero=1, i, soma = 0;
	
	for(i=0;i<50;i++){	
		if(numero%2 == 0){
			printf("%d\n",numero);
			numero++;
			soma += numero;
		}
		else{
			i--;
			numero++;
		}	
	}
	
	printf("A soma eh:%d",soma);
}

