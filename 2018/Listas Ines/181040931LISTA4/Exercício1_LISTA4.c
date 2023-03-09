/*Nome:Cíntia Braz Mesquita                      			    */
/*RA:181040931                                        			*/
/*Exercício-Programa 1 -- Imprimir quantos digitos tem um numero*/
/*Compilador:DevC++ 5.11                                		*/

#include<stdio.h>
#include<stdlib.h>

int Conta_Digitos(int n){
	if(n<10){
		return 1;
	}
	else return (Conta_Digitos(n/10)+1);
}

int main(){
	int n;
	printf("Digite o numero:");
	scanf("%d",&n);

	Conta_Digitos(n);
	printf("O numero possui %d digitos",Conta_Digitos(n));
	return 0;	
}
