//4) Fa�a um algoritmo que leia um vetor de 10 posi��es. Mostre ent�o os 3 menores valores do vetor.


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
	
	int v[10],i,j,aux=0;
	
	printf("Digite os valores do vetor:\n");
	for(i=0;i<10;i++){
		scanf("%d",&v[i]);	
	}
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(v[j] < v[i]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	
	printf("\n");
	
	for(i=0;i<3;i++){
		printf("%3d",v[i]);
	}
	
	
return 0;
}
