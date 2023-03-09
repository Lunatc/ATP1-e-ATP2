//2. Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao ?nal a matriz obtida.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
	
	int matriz1[5][5], i, j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i == j)
				matriz1[i][j] = 1;
			else
				matriz1[i][j] = 0;
		}
	}
	
	printf("\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",matriz1[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
