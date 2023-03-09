/*Nome:Cíntia Braz Mesquita                          		                              */
/*RA:181040931                                       			                          */
/*Exercício-Programa 3 - Verificar se o número e o código fornecidos estao corretos       */
/*Compilador:DevC++ 5.11                           		     	                          */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void verificadora(char numero[]){
	int n,i,j,aux1 = 0,aux2 = 0,numbers;
	int digito_encontrado,digito_v;
	char aux_digito[1];
	
	n = strlen(numero);
	
	for(i=0;i<1;i++){
		for(j=1;j>0;j--){
			aux_digito[i] = numero[n-j];
		}
	}

	printf("\naux digito_v : %s",aux_digito);

	numbers = atoi(numero);

	digito_v = atoi(aux_digito);

	printf("\ndigito v : %d \n",digito_v);

	printf("\nnumbers : %d \n" ,numbers );

	printf("\nnumbers2: %d\n",numbers);

	for(i=0, j=2;i<n , j<n;i++ , j++){
		aux1 = numbers%10;
		printf("aux 1 :%d\n",aux1);
		numbers = numbers/10;
		printf("numbers3: %d\n",numbers);
		aux2 += aux1 * j;
		printf("aux 2 :%d\n",aux2);	
	}
	aux1 = 0;
//aux1 é zerado para servir de auxiliar novamente recebendo a divisao da soma ,feita no for de j, por 11	
	aux1 = aux2%11;
	printf("aux 1(pos for): %d\n",aux1);
	aux2 = 0;
//aux2 é zerado para receber a subtração de 11 pelo numero encontrado em aux1
	aux2 = 11 - aux1;
	printf("aux 2(pos for): %d\n",aux2);

	if(aux2 == 10 || aux2 == 11){
		digito_encontrado = 0;
		printf("digito encontrado: %d\n",digito_encontrado);
	}
	else digito_encontrado = aux2;
	printf("digito encontrado: %d\n",digito_encontrado);
	
	if(digito_encontrado == digito_v){
		printf("\nA sequencia de numeros esta correta.");
	}
	else printf("\nA sequencia esta incorreta");
}

int main(){
	char numero[50];
	printf("Digite a sequencia de numeros com o digito verificador:\n");
	scanf("%s",numero);
	printf("Valor digitado: %s",numero);
	verificadora(numero);	
}
