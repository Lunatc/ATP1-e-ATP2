#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
	srand(time(NULL));
	int num, num_u, tent=0;
	
	num = rand()%100;
	
	do{
		tent++;
		printf("Digite o numero:\n");
		scanf("%d",&num_u);
		
		if(num < num_u)
			printf("O numero eh menor\n");
		else if(num > num_u)
			printf("O numero eh maior\n");
	}while(num != num_u);

	printf("Acertou!\n");
	printf("Numero de tentativas:%d",tent);
	
}
