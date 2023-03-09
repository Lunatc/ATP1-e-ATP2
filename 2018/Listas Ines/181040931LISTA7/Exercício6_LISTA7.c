/*Nome:Cíntia Braz Mesquita                            			     */
/*RA:181040931                                            			 */
/*Exercício-Programa 6 -- Métodos de ordenação                       */
/*Compilador:DevC++ 5.11                                    		 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

void Bubblesort(int v[],int n,int *cont){
	int i,j,aux = 0;
	
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(v[i] > v[j]){
				aux = v[j];
				v[j] = v[i];
				v[i] = aux;
				*cont += 1;
			}
}

void Selecao(int v[],int n,int *cont){
	int i,j,menor,ind,troca;
	for(i=0;i<n-1;i++){
		menor = v[i];
		ind = i;
		for(j=i+1;j<n;j++){
			if(v[j]<menor){
				menor = v[j];
				ind = j;
				troca = 1;
			}
			if(troca){
				v[ind] = v[i];
				v[i] = menor;
				*cont += 1;
			}	
		}
	}
}

void Insercao(int v[],int n,int *cont){
	int i,j,x;
	for(i=1;i<n;i++){
		x = v[i];
		for(j=i-1;j>0 && v[j] > x;j--)
			v[j+1] = v[j];
			v[j+1] = x;
			*cont += 1;
	}
}

int main(){
	int n,v[100],i,m,cont = 0;
	
	printf("Digite a quantidades de elementos a serem ordenados:\n");
	scanf("%d",&n);
	printf("Digite os valores:\n");
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	printf("Digite o metodo de ordenacao desejado:\n");
	printf("1-Bubble sort\n2-Selecao\n3-Insercao\n");
	scanf("%d",&m);
	if(m == 1){
		Bubblesort(v,n,&cont);
		for(i=0;i<n;i++){
			printf("%d\n",v[i]);
		}	
		printf("\nNumero de  trocas :%d",cont);
	}	
	else if(m == 2){
		Selecao(v,n,&cont);
			for(i=0;i<n;i++){
			printf("%d\n",v[i]);
		}	
		printf("\nNumero de  trocas :%d",cont);
	}
	else if(m == 3){
		Insercao(v,n,&cont);
			for(i=0;i<n;i++){
			printf("%d\n",v[i]);
		}	
		printf("\nNumero de  trocas :%d",cont);
	}
return 0;
}
