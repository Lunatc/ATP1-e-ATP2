/*Nome:C�ntia Braz Mesquita                      			    */
/*RA:181040931                                        			*/
/*Exerc�cio-Programa 1 -- Permuta��es circulares                */
/*Compilador:DevC++ 5.11                                		*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void leitura(char *matriz[][200],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%s",*(matriz+i));
	}
	for(i=0;i<n;i++){
		printf(" %s ",*(matriz+i));
		printf("\n");
	}
}

int main(){
	char matriz[200][200];
	int i,n;
	printf("Digite a quantidade de nomes a serem colocados na matriz:\n");
	scanf("%d",&n);
	printf("Digite os nomes:\n");
	leitura(&matriz,n);
}
