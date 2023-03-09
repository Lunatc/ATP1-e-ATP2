/*Nome:Cíntia Braz Mesquita                          		              */
/*RA:181040931                                       			          */
/*Exercício-Programa 5(b) -Calculo da somatoria da equação apresentada    */
/*Compilador:DevC++ 5.11                           		     	          */

#include<stdio.h>
#include<stdlib.h>

int calculo(int n){
	if(n == 1){
		return n;
	}
	return (calculo(n-1)) + (((n*n)+1)/(n+3)); 
}

int main(){
	int n;
	printf("Digite o valor de n:");
	scanf("%d",&n);
	printf("O resultado eh: %d",calculo(n));
	return 0;
}
