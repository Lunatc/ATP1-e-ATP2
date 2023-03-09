/*Nome:Cíntia Braz Mesquita                      			    */
/*RA:181040931                                        			*/
/*Exercício-Programa 4 -- Soma dos digitos                      */
/*Compilador:DevC++ 5.11                                		*/

#include<stdio.h>
#include<stdlib.h>

int Soma_Digitos(int n){
	if(n<10){
		return n;
	}
	else return (Soma_Digitos(n/10)+(n%10));
}

int main(){
	int n;
	printf("Digite o numero:");
	scanf("%d",&n);
	printf("A soma eh :%d",Soma_Digitos(n));
	return 0;	
}
