/*Nome:Cíntia Braz Mesquita                      			    */
/*RA:181040931                                        			*/
/*Exercício-Programa 1 -- Permutações circulares                */
/*Compilador:DevC++ 5.11                                		*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void ordenar(char lista_nomes[][200],int n){
	int m,i,j;
	char aux[200];
	m = strlen(lista_nomes[0]);

/*	for(i=0;i<n;i++){
		if(strlen(lista_nomes[i]) > m)){
			m = strlen(lista_nomes[i]);
		}
	}
*/
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(lista_nomes[j],lista_nomes[i]) < 0){
				strcpy(aux,lista_nomes[j]);
				strcpy(lista_nomes[j],lista_nomes[i]);
				strcpy(lista_nomes[i],aux);
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("\n%s\n",lista_nomes[i]);
	}
	
}

int main(){
	char lista_nomes[200][200];
	int n,i;
	printf("Digite o numero de nomes a serem recebidos:\n");
	scanf("%d",&n);
	printf("Digite os nomes:\n");
	for(i=0;i<n;i++){
		scanf("%s",lista_nomes[i]);
	}
	ordenar(lista_nomes,n);
	return 0;
}
