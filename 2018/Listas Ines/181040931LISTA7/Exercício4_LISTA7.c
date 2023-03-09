/*Nome:Cíntia Braz Mesquita                      			    */
/*RA:181040931                                        			*/
/*Exercício-Programa 4 -- Verifica ordem                        */
/*Compilador:DevC++ 5.11                                		*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>

int Verifica_Ordem(int *v,int n){
	int i,j,chave = 0;
	
	for(i=0,j=i+1;i<n,j<n;i++,j++){
		if(v[i] > v[j]){
			chave = 1;
			break;
		}
	}
	
	if(chave == 0){
		return 1;
	}
	else return 0;
}

int main(){
	int i,v[100],n;
	printf("Digite a quantidade de elementos do vetor:\n");
	scanf("%d",&n);
	printf("Digite os valores do vetor:\n");
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	printf("Verificacao:%d\n",Verifica_Ordem(v,n));
	return 0;
}
