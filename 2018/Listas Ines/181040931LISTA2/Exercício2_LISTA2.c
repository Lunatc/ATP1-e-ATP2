/*Nome:Cíntia Braz Mesquita                          			 */
/*RA:181040931                                       			 */
/*Exercício-Programa 2 -- Cálculo de operaçoes entre dois numeros*/
/*Compilador:DevC++ 5.11                           		     	 */

#include<stdio.h>
#include<stdlib.h>

	int fsoma(int x,int y){
		int soma;
		soma = x + y;
		return soma;
	}
	
	int fmenos(int x,int y){
		int menos;
		menos = x - y;
		return menos;
	}
	
	int fvezes(int x,int y){
		int vezes;
		vezes = x * y;
		return vezes;
	}
	
	int fdivisao(int x,int y){
		int divisao;
		divisao = x / y;
		return divisao;
	}
	
	int main(){
		int x,y,operacao;
		
		printf("Digite dois numeros inteiros para serem utilizados na operacao:");
		scanf("%d%d",&x,&y);
		printf("\nDigite o numero da operação desejada:");
		printf("\n  1-Soma\n  2-Subtracao\n  3-Multiplicacao\n  4-Divisao\n ");
		scanf("%d",&operacao);
			if(operacao == 1){
				printf("%d",fsoma(x,y));
			}
			else if(operacao == 2){
				printf("%d",fmenos(x,y));
			}
			else if(operacao == 3){
				printf("%d",fvezes(x,y));
			}
			else if(operacao == 4){
				printf("%d",fdivisao(x,y));
			}
	return 0;
	}
