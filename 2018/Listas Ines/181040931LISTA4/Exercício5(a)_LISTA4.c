/*Nome:Cíntia Braz Mesquita                          		              */
/*RA:181040931                                       			          */
/*Exercício-Programa 5(a) -Conversão de um numero natural em base binaria */
/*Compilador:DevC++ 5.11                           		     	          */

#include<stdio.h>
#include<stdlib.h>

int Conversor_Binario(int n){
	if(n == 1){
		return n;
	}
	return (10 * Conversor_Binario(n/2)) + n%2;
}

int main(){
	int n;
	printf("Digite o numero natura a ser convertido:");
	scanf("%d",&n);
	printf("O numero %d em binario eh : %d",n,Conversor_Binario(n));
	return 0;
}
