/*Nome:Cíntia Braz Mesquita                           */
/*RA:181040931                                        */
/*Exercício-Programa 1 -- Cálculo da soma de n números*/
/*Compilador:DevC++ 5.11                              */

#include<stdio.h>
#include<stdlib.h>

	int soma_n(int n)
	{	
		int soma=0,i;
		for(i=1;i<=n;i++){
			soma = soma + i;
		}
		return soma;
	}
	
	int main(){
		int n;
		printf("Digite o ultimo numero da soma:");
		scanf("%d",&n);
		printf("%d",soma_n(n));
	}
