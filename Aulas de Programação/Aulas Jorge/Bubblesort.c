#include<stdio.h>
#include<stdlib.h>

int main(){
	int vetor[10] = {9,10,8,7,6,5,4,3,2,1}, aux, i,j,k;
	
	for(i=0;i<10;i++){
		printf("%d  ",vetor[i]);
	}
	printf("\n");
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(vetor[i] < vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux; 
			}
			for(k=0;k<10;k++){
				printf("%d  ",vetor[k]);
			}		
			printf("\n");
		}
	}
}

