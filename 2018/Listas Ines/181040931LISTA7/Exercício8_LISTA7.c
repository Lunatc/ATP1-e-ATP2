/*Nome:Cíntia Braz Mesquita                          		            	     */
/*RA:181040931                                                      			 */
/*Exercício-Programa 8 -- Metodo ordenação bolha alterado                        */
/*Compilador:DevC++ 5.11                                    	    	         */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>


void BubbleSort(int v[], int n)
{
	int i,j,aux,troca=0,cont=0;
	for(i=0;i<n-1;i++)
		for(j=n-1;j>i;j--)
		{
			if(v[j-1]>v[j])
			{
				troca=1;
			}
			if(troca)
			{
				aux=v[j];
				v[j]=v[j-1];
				v[j-1]=aux;
				troca=0;
				cont++;	
			}
		}
	printf("Quantidade de trocas do bubble sort:  %d\n",cont);	
}

int main(){
	int v[100],n,i,cont=0;
	
	puts("Insira a quantidade de elementos do vetor:\n");
	scanf("%d",&n);
	
	puts("Insira o vetor:\n");
	for(i=0;i<n;i++)
		scanf("%d",&v[i]);
	
	BubbleSort(v,n);
	
	puts("Vetor Ordenado: ");
	for(i=0;i<n;i++)
		printf("%d ",v[i]);	
	
}

