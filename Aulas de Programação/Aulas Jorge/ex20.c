#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int vetor1[10], vetor2[10], i, j=0;
	srand(time(NULL));
	
	
	for(i=0;i<10;i++){
		vetor1[i] = rand()%50;
	}
	
	printf("Vetor 1 gerado:\n");
	
	for(i=0;i<10;i++){
		printf("%d\n",vetor1[i]);
	}
	
	for(i=0;i<10;i++){
		if(vetor1[i]%2 != 0){
			vetor2[j] = vetor1[i];
			j++;	
		}
	}
	
	
	printf("Vetores 1 e 2:\n");
	
	for(i=0;i<10;i++){
		printf("%d",vetor1[i]);
		printf(" %d\n", vetor2[i]);
	}
	
}
