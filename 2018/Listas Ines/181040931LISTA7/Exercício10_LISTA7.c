/*Nome:Cíntia Braz Mesquita                          		        	       			*/
/*RA:181040931                                                  			 			*/
/*Exercício-Programa 10 -- Ordenacao por inserçao decrescente                           */
/*Compilador:DevC++ 5.11                                    		        			*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>


void Insercao(int v[],int n){
	int i,j,x;
	for(i=1;i<n;i++){
		x = v[i];
		for(j=i-1;j>=0 && v[j] < x;j--){
			v[j+1] = v[j];
			v[j] = x;
		}
	}
}

int main(){
	int i,n,v[100];
	
	printf("Digite a quantidade de numeros a serem ordenados:\n");
	scanf("%d",&n);
	printf("Digite os numeros:\n");
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	Insercao(v,n);
	
	printf("Apos ordenacao:\n");
	for(i=0;i<n;i++){
		printf("\n%d",v[i]);
	}
}
