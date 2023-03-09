//6. Faça um programa que leia duas matrizes A[4][6] e B[6][4] e calcule e imprima uma matriz C, que seja o produto matricial de M por N.  

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	
	int mA[4][6],mB[6][4],mC[4][4];
	int l,c,aux=0,k;
	
	for(l=0;l<4;l++){
		for(c=0;c<6;c++){
			mA[l][c] = rand()%5;
		}
	}
	
	for(l=0;l<4;l++){
		for(c=0;c<6;c++){
			printf("%3d",mA[l][c]);
		}printf("\n");
	}

	for(l=0;l<6;l++){
		for(c=0;c<4;c++){
			mB[l][c] = rand()%5;
		}
	}
	
	printf("\n");
	
	for(l=0;l<6;l++){
		for(c=0;c<4;c++){
			printf("%3d",mB[l][c]);
		}printf("\n");
	}

	printf("\n");
	
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			mC[l][c] = 0;
			for(k=0;k<4;k++){
				aux += mA[l][k] * mB[k][c];
			}	
			mC[l][c] = aux;
		}
		aux = 0;
	}

	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
		printf("%3d",mC[l][c]);
		}printf("\n");
	}



return 0;	
}
