/*Nome:Cíntia Braz Mesquita                            */
/*RA:181040931                                         */
/*Exercício-Programa 4 -- Soma de matrizes             */
/*Compilador:DevC++ 5.11   	   						   */

#include<stdio.h>
#include<stdlib.h>

//Função soma
void soma(int matriz_a[][100],int matriz_b[][100],int matriz_c[][100],int n,int m){
	int l,c;
//Soma das matrizes a e b
	for(l=0;l<m;l++){
		for(c=0;c<n;c++){
			matriz_c[l][c] = matriz_a[l][c] + matriz_b[l][c]; 
		}
	}
//Imprime a matriz c
	for(l=0;l<m;l++){
		for(c=0;c<n;c++){
			printf("  %d  ",matriz_c[l][c]);
		}printf("\n");
	}
}

int main(){
	int l,c;
	int n,m;

//Programa principal recebe o numero de linhas m	
	printf("Digite o numero de linhas das matrizes:");
	scanf("%d",&m);
//Programa principal recebe o numero de colunas c	
	printf("Digite o numero de colunas das matrizes:");
	scanf("%d",&n);
//Declaração e recebimento das matrizes a e b	
	int matriz_a[100][100],matriz_b[100][100],matriz_c[100][100];
	printf("Digite os valores da matriz a:\n");
	for(l=0;l<m;l++){
		for(c=0;c<n;c++){
			scanf("%d",&matriz_a[l][c]);
		}
	}
	
	printf("Digite os valores da matriz b:\n");
	for(l=0;l<m;l++){
		for(c=0;c<n;c++){
			scanf("%d",&matriz_b[l][c]);
		}
	}
//Chamada da função soma
	soma(matriz_a,matriz_b,matriz_c,n,m);
	return 0;
}
