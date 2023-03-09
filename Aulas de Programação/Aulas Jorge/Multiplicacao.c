#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int A[3][2], B[2][3], C[3][3], i,j,k, aux;
	
	for(i=0;i<3;i++){	
		for(j=0;j<2;j++){
			A[i][j] = rand()%10;
		}
	}
	
	for(i=0;i<2;i++){	
		for(j=0;j<3;j++){
			B[i][j] = rand()%10;
		}
	}
	
	
	
	for(i=0;i<3;i++){	
		for(j=0;j<3;j++){
			//aux = 0;	
			C[i][j] = 0;
			for(k=0;k<2;k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		//C[i][j] = aux;
		}
	}
	
	printf("A matriz C eh:\n");
	
	for(i=0;i<3;i++){	
		for(j=0;j<3;j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	
}
