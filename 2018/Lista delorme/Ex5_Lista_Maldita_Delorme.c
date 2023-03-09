//5) Faça um algoritmo que solicite a entrade de uma matriz 3 x 3 e uma matriz 3 x 1 e mostre o resultado da multiplicação entre elas


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int m1[3][3],m2[3][1],l,c,m3[3][1],aux =0,x;
	
	printf("Digite os valores da primeira matriz(3 x 3):\n");
	for(l=0;l<3;l++){
		for(c=0;c<3;c++)
			scanf("%d",&m1[l][c]);
	}
	
	printf("\n");
	
	printf("Digite os valores da segunda matriz(3 x 1):\n");
	for(l=0;l<3;l++){
		for(c=0;c<1;c++)
				scanf("%d",&m2[l][c]);
	}
	

	printf("Matriz 1:(3x3):\n");
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			printf("%3d",m1[l][c]);
			}printf("\n");
	}
	
	printf("\n");
	
	printf("Matriz 2:(3x1):\n");
	for(l=0;l<3;l++){
		for(c=0;c<1;c++){
			printf("%3d",m2[l][c]);
		}printf("\n");
	}
	
	printf("\n");
	
	printf("Matriz resultado da multiplicação:(3x1):\n");
	for(l=0;l<3;l++){
		for(c=0;c<1;c++){
			m3[l][c] = 0;
			for(x=0;x<3;x++){
				aux += m1[l][x] * m2[x][c];
			}
			m3[l][c] = aux;
            aux = 0;
		}
	}
	
	for(l=0;l<3;l++){
		for(c=0;c<1;c++){
			printf("%3d",m3[l][c]);
		}printf("\n");
	}	

return 0;
}
