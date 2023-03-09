/*Nome:Cíntia Braz Mesquita                      			    */
/*RA:181040931                                        			*/
/*Exercício-Programa 3 -- Somatoria                             */
/*Compilador:DevC++ 5.11                                		*/

#include<stdio.h>
#include<stdlib.h>

int Soma(int i,int n){
	if(i == n){
		return i;
	}
	else{
		return (Soma(i+1,n) + (i));	
	}
}

int main(){
	int i,n;
	
	printf("Digite o n da somatoria:");
	scanf("%d",&n);
	
	printf("A soma eh: %d",Soma(1,n));
	
	return 0;
}


