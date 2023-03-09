/*Nome:Cíntia Braz Mesquita                          		        	    */
/*RA:181040931                                                  			*/
/*Exercício-Programa 7 -- Metodo ordenação por pedra                        */
/*Compilador:DevC++ 5.11                                    		        */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

void Bubblesort(int v[],int n){
	int i,j,aux = 0;
	
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(v[i] > v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
}

int main(){
	int i,n,v[100];
	
	printf("Digite a quantidade de elementos a serem ordenados:\n");
	scanf("%d",&n);
	printf("Digite os valores:\n");
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	Bubblesort(v,n);
	
	printf("Apos ordenacao:\n");
	for(i=0;i<n;i++){
		printf("\n%d",v[i]);
	}
}
