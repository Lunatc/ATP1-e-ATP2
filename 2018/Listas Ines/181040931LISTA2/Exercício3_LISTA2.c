/*Nome:Cíntia Braz Mesquita                          			*/
/*RA:181040931                                  			    */
/*Exercício-Programa 3 -- Cálculo dos n primeiros numeros primos*/
/*Compilador:DevC++ 5.11                           				*/

#include<stdio.h>
#include<stdlib.h>

	int fprimo(int m){
		int j,cont=0;
		for(j=1;j<=m;j++){
			if((m%j) == 0){
				cont = cont + 1;
			}
		}
		if(cont == 2){
			return 1;
		}
		else return 0;
	} 
	
	int main(){
		int j,n,soma=0;
		printf("Digite o numero inteiro nao negativo a ser analisado:");
		scanf("%d",&n);
		for(j=0;j<=n;j++){
			if(fprimo(j+2) == 1){
				printf("%d ", j+2);
				soma += j+2;
			}	
		}
		printf("\n%d",soma);
	return 0;	
	}
