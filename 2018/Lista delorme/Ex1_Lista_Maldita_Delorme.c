//1) Faça um programa que solicite o tamanho de uma matriz quadrada entre 1 e 5, solicite a entrada dos dados e depois diga se a matriz é simétrica
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
	
	int tam,aux=0;
	
	printf("Digite o tamanho da matriz quadrada entre 1 e 5:");
	scanf("%d",&tam);

	int m[tam][tam],l,c,m2[tam][tam];
	
	printf("\nDigite os valores da matriz:\n");
	
	for(l=0;l<tam;l++){
		for(c=0;c<tam;c++){
		scanf("%d",&m[l][c]);
		}
	}
	
	for(l=0;l<tam;l++){
		for(c=0;c<tam;c++){
			printf("%3d",m[l][c]);
		}printf("\n");
	}
	
	for(c=0;c<tam;c++){
		for(l=0;l<tam;l++){
			if (m[l][c] == m2[l][c]){
				aux = 1;
			}
		}
	}
	printf("\n");
	
	if(aux == 1) printf("A matriz e simetrica.\n");
	else printf("A matriz nao e simetrica");
return 0;
}
