#include<stdio.h>
#include<stdlib.h>

int main(){
	int x, y, dist;
	
	printf("Digite a posicao em x:\n");
	scanf("%d",&x);
	
	printf("Digite a posicao em y:\n");
	scanf("%d",&y);
	
	dist = sqrt(pow(x,2) + pow(y,2));
	
	printf("A distancia eh %d",dist);
}
